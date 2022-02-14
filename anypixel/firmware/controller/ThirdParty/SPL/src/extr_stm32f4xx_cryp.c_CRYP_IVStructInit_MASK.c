
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ CRYP_IV1Right; scalar_t__ CRYP_IV1Left; scalar_t__ CRYP_IV0Right; scalar_t__ CRYP_IV0Left; } ;
typedef TYPE_1__ CRYP_IVInitTypeDef ;



void FUNC_0(CRYP_IVInitTypeDef* VAR_0)
{
  VAR_0->CRYP_IV0Left = 0;
  VAR_0->CRYP_IV0Right = 0;
  VAR_0->CRYP_IV1Left = 0;
  VAR_0->CRYP_IV1Right = 0;
}
