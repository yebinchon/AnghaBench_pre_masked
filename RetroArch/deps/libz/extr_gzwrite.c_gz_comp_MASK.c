
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* z_streamp ;
typedef TYPE_3__* gz_statep ;
struct TYPE_9__ {scalar_t__ next; } ;
struct TYPE_10__ {unsigned int avail_in; unsigned int avail_out; scalar_t__ next_out; scalar_t__ next_in; } ;
struct TYPE_11__ {scalar_t__ size; TYPE_1__ x; scalar_t__ out; int fd; scalar_t__ direct; TYPE_2__ strm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,int,char*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ,scalar_t__,unsigned int) ;
 char* FUNC_5 () ;

__attribute__((used)) static int FUNC_6(gz_statep VAR_6, int VAR_7)
{
    int VAR_8, VAR_9;
    unsigned VAR_10;
    z_streamp VAR_11 = &(VAR_6->strm);


    if (VAR_6->size == 0 && FUNC_3(VAR_6) == -1)
        return -1;


    if (VAR_6->direct) {
        VAR_9 = FUNC_4(VAR_6->fd, VAR_11->next_in, VAR_11->avail_in);
        if (VAR_9 < 0 || (unsigned)VAR_9 != VAR_11->avail_in) {
            FUNC_2(VAR_6, VAR_0, FUNC_5());
            return -1;
        }
        VAR_11->avail_in = 0;
        return 0;
    }


    VAR_8 = VAR_3;
    do {


        if (VAR_11->avail_out == 0 || (VAR_7 != VAR_2 &&
            (VAR_7 != VAR_1 || VAR_8 == VAR_4))) {
            VAR_10 = (unsigned)(VAR_11->next_out - VAR_6->x.next);
            if (VAR_10 && ((VAR_9 = FUNC_4(VAR_6->fd, VAR_6->x.next, VAR_10)) < 0 ||
                         (unsigned)VAR_9 != VAR_10)) {
                FUNC_2(VAR_6, VAR_0, FUNC_5());
                return -1;
            }
            if (VAR_11->avail_out == 0) {
                VAR_11->avail_out = VAR_6->size;
                VAR_11->next_out = VAR_6->out;
            }
            VAR_6->x.next = VAR_11->next_out;
        }


        VAR_10 = VAR_11->avail_out;
        VAR_8 = FUNC_0(VAR_11, VAR_7);
        if (VAR_8 == VAR_5) {
            FUNC_2(VAR_6, VAR_5,
                      "internal error: deflate stream corrupt");
            return -1;
        }
        VAR_10 -= VAR_11->avail_out;
    } while (VAR_10);


    if (VAR_7 == VAR_1)
        FUNC_1(VAR_11);


    return 0;
}
