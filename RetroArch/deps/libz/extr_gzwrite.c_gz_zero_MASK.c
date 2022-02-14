
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_2__* z_streamp ;
typedef scalar_t__ z_off64_t ;
typedef TYPE_3__* gz_statep ;
struct TYPE_6__ {unsigned int pos; } ;
struct TYPE_7__ {unsigned int avail_in; int next_in; } ;
struct TYPE_8__ {unsigned int size; TYPE_1__ x; int in; TYPE_2__ strm; } ;


 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(gz_statep VAR_1, z_off64_t VAR_2)
{
    int VAR_3;
    unsigned VAR_4;
    z_streamp VAR_5 = &(VAR_1->strm);


    if (VAR_5->avail_in && FUNC_1(VAR_1, VAR_0) == -1)
        return -1;


    VAR_3 = 1;
    while (VAR_2) {
        VAR_4 = FUNC_0(VAR_1->size) || (z_off64_t)VAR_1->size > VAR_2 ?
            (unsigned)VAR_2 : VAR_1->size;
        if (VAR_3) {
            FUNC_2(VAR_1->in, 0, VAR_4);
            VAR_3 = 0;
        }
        VAR_5->avail_in = VAR_4;
        VAR_5->next_in = VAR_1->in;
        VAR_1->x.pos += VAR_4;
        if (FUNC_1(VAR_1, VAR_0) == -1)
            return -1;
        VAR_2 -= VAR_4;
    }
    return 0;
}
