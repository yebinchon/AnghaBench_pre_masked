
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int DMARDLAR; } ;
struct TYPE_5__ {int ControlBufferSize; int Buffer1Addr; int Buffer2NextDescAddr; int Status; } ;
typedef TYPE_1__ ETH_DMADESCTypeDef ;


 TYPE_1__* VAR_0 ;
 int * VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_0(ETH_DMADESCTypeDef *VAR_7, uint8_t *VAR_8, uint32_t VAR_9)
{
  uint32_t VAR_10 = 0;
  ETH_DMADESCTypeDef *VAR_11;


  VAR_0 = VAR_7;

  for(VAR_10=0; VAR_10 < VAR_9; VAR_10++)
  {

    VAR_11 = VAR_7+VAR_10;

    VAR_11->Status = VAR_3;


    VAR_11->ControlBufferSize = VAR_4 | (uint32_t)VAR_5;

    VAR_11->Buffer1Addr = (uint32_t)(&VAR_8[VAR_10*VAR_5]);


    if(VAR_10 < (VAR_9-1))
    {

      VAR_11->Buffer2NextDescAddr = (uint32_t)(VAR_7+VAR_10+1);
    }
    else
    {

      VAR_11->Buffer2NextDescAddr = (uint32_t)(VAR_7);
    }
  }


  VAR_2->DMARDLAR = (uint32_t) VAR_7;

  VAR_1 = &VAR_6;

}
