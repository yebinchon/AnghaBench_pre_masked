
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pasemi_mac {int dma_if; TYPE_1__* dma_pdev; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*,unsigned int) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct pasemi_mac *VAR_3)
{
 unsigned int VAR_4, VAR_5;

 FUNC_4(FUNC_0(VAR_3->dma_if),
        VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_3(FUNC_0(VAR_3->dma_if));
  if (!(VAR_4 & VAR_1))
   break;
  FUNC_1();
 }

 if (VAR_4 & VAR_1)
  FUNC_2(&VAR_3->dma_pdev->dev,
   "Failed to stop rx interface, rcmdsta %08x\n", VAR_4);
 FUNC_4(FUNC_0(VAR_3->dma_if), 0);
}
