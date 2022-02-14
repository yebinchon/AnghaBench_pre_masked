
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {TYPE_1__* FS_Rx_Desc; } ;
struct TYPE_9__ {int Status; scalar_t__ Buffer2NextDescAddr; } ;
struct TYPE_8__ {int length; int buffer; TYPE_1__* descriptor; int member_2; int member_1; int member_0; } ;
struct TYPE_7__ {int Buffer1Addr; } ;
typedef TYPE_2__ FrameTypeDef ;
typedef TYPE_3__ ETH_DMADESCTypeDef ;


 TYPE_3__* VAR_0 ;
 TYPE_5__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

FrameTypeDef FUNC_0(void)
{
  uint32_t VAR_4 = 0;
  FrameTypeDef VAR_5 = {0,0,0};


  VAR_4 = ((VAR_0->Status & VAR_2) >> VAR_3) - 4;
  VAR_5.length = VAR_4;


  VAR_5.descriptor = VAR_1->FS_Rx_Desc;
  VAR_5.buffer =(VAR_1->FS_Rx_Desc)->Buffer1Addr;




  VAR_0 = (ETH_DMADESCTypeDef*) (VAR_0->Buffer2NextDescAddr);


  return (VAR_5);
}
