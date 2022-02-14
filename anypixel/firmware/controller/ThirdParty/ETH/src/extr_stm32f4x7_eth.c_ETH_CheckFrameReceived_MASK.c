
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int Seg_Count; TYPE_1__* LS_Rx_Desc; TYPE_1__* FS_Rx_Desc; } ;
struct TYPE_4__ {int Status; scalar_t__ Buffer2NextDescAddr; } ;
typedef TYPE_1__ ETH_DMADESCTypeDef ;


 TYPE_1__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

uint32_t FUNC_0(void)
{

  if(((VAR_0->Status & VAR_4) == (uint32_t)VAR_5) &&
     ((VAR_0->Status & VAR_3) != (uint32_t)VAR_5))
  {
    VAR_1->Seg_Count++;
    if (VAR_1->Seg_Count == 1)
    {
      VAR_1->FS_Rx_Desc = VAR_0;
    }
    VAR_1->LS_Rx_Desc = VAR_0;
    return 1;
  }


  else if(((VAR_0->Status & VAR_4) == (uint32_t)VAR_5) &&
          ((VAR_0->Status & VAR_2) != (uint32_t)VAR_5)&&
            ((VAR_0->Status & VAR_3) == (uint32_t)VAR_5))
  {
    VAR_1->FS_Rx_Desc = VAR_0;
    VAR_1->LS_Rx_Desc = ((void*)0);
    VAR_1->Seg_Count = 1;
    VAR_0 = (ETH_DMADESCTypeDef*) (VAR_0->Buffer2NextDescAddr);
  }


  else if(((VAR_0->Status & VAR_4) == (uint32_t)VAR_5) &&
          ((VAR_0->Status & VAR_2) == (uint32_t)VAR_5)&&
            ((VAR_0->Status & VAR_3) == (uint32_t)VAR_5))
  {
    (VAR_1->Seg_Count) ++;
    VAR_0 = (ETH_DMADESCTypeDef*) (VAR_0->Buffer2NextDescAddr);
  }
  return 0;
}
