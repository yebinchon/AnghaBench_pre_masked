
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_info {scalar_t__ d64txregbase; scalar_t__ d64rxregbase; int name; int core; } ;


 int FUNC_0 (struct dma_info*,int ) ;
 int FUNC_1 (struct dma_info*,int ) ;
 int FUNC_2 (struct dma_info*,int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_0 ;

__attribute__((used)) static bool FUNC_4(struct dma_info *VAR_1)
{



 if (VAR_1->d64txregbase != 0) {
  if (!FUNC_2(VAR_1, FUNC_1(VAR_1, VAR_0)))
   FUNC_3(VAR_1->core,
          "%s: DMA64 tx doesn't have AE set\n",
          VAR_1->name);
  return 1;
 } else if (VAR_1->d64rxregbase != 0) {
  if (!FUNC_2(VAR_1, FUNC_0(VAR_1, VAR_0)))
   FUNC_3(VAR_1->core,
          "%s: DMA64 rx doesn't have AE set\n",
          VAR_1->name);
  return 1;
 }

 return 0;
}
