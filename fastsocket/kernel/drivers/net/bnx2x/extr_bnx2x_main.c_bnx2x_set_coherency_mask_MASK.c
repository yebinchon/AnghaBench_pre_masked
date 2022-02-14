
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct bnx2x {int flags; TYPE_1__* pdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;

__attribute__((used)) static int FUNC_4(struct bnx2x *VAR_2)
{
 struct device *VAR_3 = &VAR_2->pdev->dev;

 if (FUNC_3(VAR_3, FUNC_0(64)) == 0) {
  VAR_2->flags |= VAR_1;
  if (FUNC_2(VAR_3, FUNC_0(64)) != 0) {
   FUNC_1(VAR_3, "dma_set_coherent_mask failed, aborting\n");
   return -VAR_0;
  }
 } else if (FUNC_3(VAR_3, FUNC_0(32)) != 0) {
  FUNC_1(VAR_3, "System does not support DMA, aborting\n");
  return -VAR_0;
 }

 return 0;
}
