
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa1100_irda {int dev; TYPE_1__* pdata; int txdma; int rxdma; } ;
struct TYPE_2__ {int (* shutdown ) (int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sa1100_irda *VAR_2)
{



 FUNC_0(VAR_2->rxdma);
 FUNC_0(VAR_2->txdma);


 VAR_1 = 0;
 VAR_0 = 0;

 if (VAR_2->pdata->shutdown)
  VAR_2->pdata->shutdown(VAR_2->dev);
}
