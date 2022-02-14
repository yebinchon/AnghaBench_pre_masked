
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int K3RR; int K3LR; int K2RR; int K2LR; int K1RR; int K1LR; int K0RR; int K0LR; } ;
struct TYPE_4__ {int CRYP_Key3Right; int CRYP_Key3Left; int CRYP_Key2Right; int CRYP_Key2Left; int CRYP_Key1Right; int CRYP_Key1Left; int CRYP_Key0Right; int CRYP_Key0Left; } ;
typedef TYPE_1__ CRYP_KeyInitTypeDef ;


 TYPE_3__* VAR_0 ;

void FUNC_0(CRYP_KeyInitTypeDef* VAR_1)
{

  VAR_0->K0LR = VAR_1->CRYP_Key0Left;
  VAR_0->K0RR = VAR_1->CRYP_Key0Right;
  VAR_0->K1LR = VAR_1->CRYP_Key1Left;
  VAR_0->K1RR = VAR_1->CRYP_Key1Right;
  VAR_0->K2LR = VAR_1->CRYP_Key2Left;
  VAR_0->K2RR = VAR_1->CRYP_Key2Right;
  VAR_0->K3LR = VAR_1->CRYP_Key3Left;
  VAR_0->K3RR = VAR_1->CRYP_Key3Right;
}
