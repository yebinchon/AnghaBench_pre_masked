
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sse_line; } ;
typedef TYPE_1__ PSNRDSPContext ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(PSNRDSPContext *VAR_2, int VAR_3)
{
    int VAR_4 = FUNC_1();

    if (FUNC_0(VAR_4)) {
        if (VAR_3 <= 8) {
            VAR_2->sse_line = VAR_1;
        } else if (VAR_3 <= 15) {
            VAR_2->sse_line = VAR_0;
        }
    }
}
