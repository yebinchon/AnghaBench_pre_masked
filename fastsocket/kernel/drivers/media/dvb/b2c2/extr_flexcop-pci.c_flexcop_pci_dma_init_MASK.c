
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct flexcop_pci {int init_state; int fc_dev; int * dma; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int ) ;

__attribute__((used)) static int FUNC_3(struct flexcop_pci *VAR_9)
{
 int VAR_10;
 VAR_10 = FUNC_0(VAR_9->pdev, &VAR_9->dma[0],
   VAR_0);
 if (VAR_10 != 0)
  return VAR_10;

 VAR_10 = FUNC_0(VAR_9->pdev, &VAR_9->dma[1],
   VAR_1);
 if (VAR_10 != 0) {
  FUNC_1(&VAR_9->dma[0]);
  return VAR_10;
 }

 FUNC_2(VAR_9->fc_dev, VAR_5 |
   VAR_6, VAR_7);
 FUNC_2(VAR_9->fc_dev, VAR_4 |
   VAR_3, VAR_8);
 VAR_9->init_state |= VAR_2;
 return VAR_10;
}
