
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* stqe_next; } ;
struct TYPE_5__ {int size; int length; int eof; int owner; TYPE_1__ qe; scalar_t__ sosf; int * buf; } ;
typedef TYPE_2__ lldesc_t ;


 int VAR_0 ;

void FUNC_0(lldesc_t *VAR_1, const void *VAR_2, int VAR_3, bool VAR_4)
{
    int VAR_5 = 0;
    while (VAR_3) {
        int VAR_6 = VAR_3;
        if (VAR_6 > VAR_0) {
            VAR_6 = VAR_0;
        }
        if (VAR_4) {

            VAR_1[VAR_5].size = (VAR_6 + 3) & (~3);
            VAR_1[VAR_5].length = (VAR_6 + 3) & (~3);
        } else {
            VAR_1[VAR_5].size = VAR_6;
            VAR_1[VAR_5].length = VAR_6;
        }
        VAR_1[VAR_5].buf = (uint8_t *)VAR_2;
        VAR_1[VAR_5].eof = 0;
        VAR_1[VAR_5].sosf = 0;
        VAR_1[VAR_5].owner = 1;
        VAR_1[VAR_5].qe.stqe_next = &VAR_1[VAR_5 + 1];
        VAR_3 -= VAR_6;
        VAR_2 += VAR_6;
        VAR_5++;
    }
    VAR_1[VAR_5 - 1].eof = 1;
    VAR_1[VAR_5 - 1].qe.stqe_next = ((void*)0);
}
