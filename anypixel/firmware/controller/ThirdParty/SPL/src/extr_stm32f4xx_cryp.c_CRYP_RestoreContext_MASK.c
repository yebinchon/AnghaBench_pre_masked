
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int CR; int IV1RR; int IV1LR; int IV0RR; int IV0LR; int K3RR; int K3LR; int K2RR; int K2LR; int K1RR; int K1LR; int K0RR; int K0LR; } ;
struct TYPE_4__ {int CRYP_IV1RR; int CRYP_IV1LR; int CRYP_IV0RR; int CRYP_IV0LR; int CRYP_K3RR; int CRYP_K3LR; int CRYP_K2RR; int CRYP_K2LR; int CRYP_K1RR; int CRYP_K1LR; int CRYP_K0RR; int CRYP_K0LR; int CR_bits9to2; } ;
typedef TYPE_1__ CRYP_Context ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;

void FUNC_0(CRYP_Context* VAR_2)
{


  VAR_0->CR = VAR_2->CR_bits9to2;


  VAR_0->K0LR = VAR_2->CRYP_K0LR;
  VAR_0->K0RR = VAR_2->CRYP_K0RR;
  VAR_0->K1LR = VAR_2->CRYP_K1LR;
  VAR_0->K1RR = VAR_2->CRYP_K1RR;
  VAR_0->K2LR = VAR_2->CRYP_K2LR;
  VAR_0->K2RR = VAR_2->CRYP_K2RR;
  VAR_0->K3LR = VAR_2->CRYP_K3LR;
  VAR_0->K3RR = VAR_2->CRYP_K3RR;


  VAR_0->IV0LR = VAR_2->CRYP_IV0LR;
  VAR_0->IV0RR = VAR_2->CRYP_IV0RR;
  VAR_0->IV1LR = VAR_2->CRYP_IV1LR;
  VAR_0->IV1RR = VAR_2->CRYP_IV1RR;


  VAR_0->CR |= VAR_1;
}
