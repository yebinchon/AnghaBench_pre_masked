
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* z_streamp ;
typedef TYPE_3__* gz_statep ;
struct TYPE_7__ {unsigned char* next; } ;
struct TYPE_8__ {unsigned char* next_out; int avail_out; void* opaque; void* zfree; void* zalloc; } ;
struct TYPE_9__ {unsigned char* in; unsigned char* out; TYPE_1__ x; int size; int direct; int want; int strategy; int level; TYPE_2__ strm; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_1 (unsigned char*) ;
 int FUNC_2 (TYPE_3__*,int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(gz_statep VAR_6)
{
    int VAR_7;
    z_streamp VAR_8 = &(VAR_6->strm);


    VAR_6->in = (unsigned char *)FUNC_3(VAR_6->want);
    if (VAR_6->in == ((void*)0)) {
        FUNC_2(VAR_6, VAR_3, "out of memory");
        return -1;
    }


    if (!VAR_6->direct) {

        VAR_6->out = (unsigned char *)FUNC_3(VAR_6->want);
        if (VAR_6->out == ((void*)0)) {
            FUNC_1(VAR_6->in);
            FUNC_2(VAR_6, VAR_3, "out of memory");
            return -1;
        }


        VAR_8->zalloc = VAR_4;
        VAR_8->zfree = VAR_4;
        VAR_8->opaque = VAR_4;
        VAR_7 = FUNC_0(VAR_8, VAR_6->level, VAR_2,
                           VAR_1 + 16, VAR_0, VAR_6->strategy);
        if (VAR_7 != VAR_5) {
            FUNC_1(VAR_6->out);
            FUNC_1(VAR_6->in);
            FUNC_2(VAR_6, VAR_3, "out of memory");
            return -1;
        }
    }


    VAR_6->size = VAR_6->want;


    if (!VAR_6->direct) {
        VAR_8->avail_out = VAR_6->size;
        VAR_8->next_out = VAR_6->out;
        VAR_6->x.next = VAR_8->next_out;
    }
    return 0;
}
