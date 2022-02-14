
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int CRYP_KeySize; int CRYP_DataType; int CRYP_AlgoMode; int CRYP_AlgoDir; } ;
typedef TYPE_1__ CRYP_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(CRYP_InitTypeDef* VAR_4)
{

  VAR_4->CRYP_AlgoDir = VAR_0;


  VAR_4->CRYP_AlgoMode = VAR_1;


  VAR_4->CRYP_DataType = VAR_2;


  VAR_4->CRYP_KeySize = VAR_3;
}
