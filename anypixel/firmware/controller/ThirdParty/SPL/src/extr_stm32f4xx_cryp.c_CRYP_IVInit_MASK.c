
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int IV1RR; int IV1LR; int IV0RR; int IV0LR; } ;
struct TYPE_4__ {int CRYP_IV1Right; int CRYP_IV1Left; int CRYP_IV0Right; int CRYP_IV0Left; } ;
typedef TYPE_1__ CRYP_IVInitTypeDef ;


 TYPE_3__* VAR_0 ;

void FUNC_0(CRYP_IVInitTypeDef* VAR_1)
{
  VAR_0->IV0LR = VAR_1->CRYP_IV0Left;
  VAR_0->IV0RR = VAR_1->CRYP_IV0Right;
  VAR_0->IV1LR = VAR_1->CRYP_IV1Left;
  VAR_0->IV1RR = VAR_1->CRYP_IV1Right;
}
