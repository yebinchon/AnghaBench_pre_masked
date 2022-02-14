
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int idx; TYPE_1__* status; } ;
typedef TYPE_2__ dsfmt_t ;
struct TYPE_6__ {int* u32; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 size_t FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_3 ;

void FUNC_5(dsfmt_t *VAR_4, uint32_t VAR_5, int VAR_6) {
    int VAR_7;
    uint32_t *VAR_8;


    if (VAR_6 != VAR_2) {
 FUNC_1(VAR_3, "DSFMT_MEXP doesn't match with dSFMT.c\n");
 FUNC_0(1);
    }
    VAR_8 = &VAR_4->status[0].u32[0];
    VAR_8[FUNC_2(0)] = VAR_5;
    for (VAR_7 = 1; VAR_7 < (VAR_0 + 1) * 4; VAR_7++) {
        VAR_8[FUNC_2(VAR_7)] = 1812433253UL
     * (VAR_8[FUNC_2(VAR_7 - 1)] ^ (VAR_8[FUNC_2(VAR_7 - 1)] >> 30)) + VAR_7;
    }
    FUNC_3(VAR_4);
    FUNC_4(VAR_4);
    VAR_4->idx = VAR_1;
}
