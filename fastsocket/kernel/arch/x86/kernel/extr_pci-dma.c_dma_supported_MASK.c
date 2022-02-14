
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct dma_map_ops {int (* dma_supported ) (struct device*,int) ;} ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 scalar_t__ VAR_0 ;
 struct dma_map_ops* FUNC_2 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct device*,int) ;

int FUNC_4(struct device *VAR_2, u64 VAR_3)
{
 struct dma_map_ops *VAR_4 = FUNC_2(VAR_2);
 if (VAR_4->dma_supported)
  return VAR_4->dma_supported(VAR_2, VAR_3);




 if (VAR_3 < FUNC_0(24))
  return 0;
 if (VAR_1 && (VAR_3 >= FUNC_0(40))) {
  FUNC_1(VAR_2, "Force SAC with mask %Lx\n", VAR_3);
  return 0;
 }

 return 1;
}
