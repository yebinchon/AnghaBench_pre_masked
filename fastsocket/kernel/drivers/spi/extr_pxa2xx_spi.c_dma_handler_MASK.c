
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct driver_data {int tx_channel; scalar_t__ ssp_type; TYPE_1__* pdev; int ioaddr; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct driver_data*,char*) ;
 int FUNC_3 (struct driver_data*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(int VAR_4, void *VAR_5)
{
 struct driver_data *VAR_6 = VAR_5;
 u32 VAR_7 = FUNC_0(VAR_4) & VAR_2;

 if (VAR_7 & VAR_0) {

  if (VAR_4 == VAR_6->tx_channel)
   FUNC_2(VAR_6,
     "dma_handler: "
     "bad bus address on tx channel");
  else
   FUNC_2(VAR_6,
     "dma_handler: "
     "bad bus address on rx channel");
  return;
 }


 if ((VAR_4 == VAR_6->tx_channel)
  && (VAR_7 & VAR_1)
  && (VAR_6->ssp_type == VAR_3)) {


  if (FUNC_4(VAR_6->ioaddr) == 0)
   FUNC_1(&VAR_6->pdev->dev,
    "dma_handler: ssp rx stall failed\n");


  FUNC_3(VAR_6);
 }
}
