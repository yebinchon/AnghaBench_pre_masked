
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hist; scalar_t__ bestlag; scalar_t__ nbf; } ;
typedef TYPE_1__ sbc_plc_state_t ;


 int FUNC_0 (int ,int ,int) ;

void FUNC_1(sbc_plc_state_t *VAR_0){
    VAR_0->nbf=0;
    VAR_0->bestlag=0;
    FUNC_0(VAR_0->hist, 0, sizeof(VAR_0->hist));
}
