
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device {int coherent_dma_mask; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,...) ;

__attribute__((used)) static u64 FUNC_1(struct device *VAR_1)
{
 u64 VAR_2 = VAR_0;

 if (VAR_1) {
  VAR_2 = VAR_1->coherent_dma_mask;





  if (VAR_2 == 0) {
   FUNC_0(VAR_1, "coherent DMA mask is unset\n");
   return 0;
  }

  if ((~VAR_2) & VAR_0) {
   FUNC_0(VAR_1, "coherent DMA mask %#llx is smaller "
     "than system GFP_DMA mask %#llx\n",
     VAR_2, (unsigned long long)VAR_0);
   return 0;
  }
 }

 return VAR_2;
}
