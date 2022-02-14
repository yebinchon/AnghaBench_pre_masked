
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int DMATDLAR; } ;
struct TYPE_5__ {int Buffer1Addr; int Buffer2NextDescAddr; int Status; } ;
typedef TYPE_1__ ETH_DMADESCTypeDef ;


 TYPE_1__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(ETH_DMADESCTypeDef *VAR_4, uint8_t* VAR_5, uint32_t VAR_6)
{
  uint32_t VAR_7 = 0;
  ETH_DMADESCTypeDef *VAR_8;


  VAR_0 = VAR_4;

  for(VAR_7=0; VAR_7 < VAR_6; VAR_7++)
  {

    VAR_8 = VAR_4 + VAR_7;

    VAR_8->Status = VAR_2;


    VAR_8->Buffer1Addr = (uint32_t)(&VAR_5[VAR_7*VAR_3]);


    if(VAR_7 < (VAR_6-1))
    {

      VAR_8->Buffer2NextDescAddr = (uint32_t)(VAR_4+VAR_7+1);
    }
    else
    {

      VAR_8->Buffer2NextDescAddr = (uint32_t) VAR_4;
    }
  }


  VAR_1->DMATDLAR = (uint32_t) VAR_4;
}
