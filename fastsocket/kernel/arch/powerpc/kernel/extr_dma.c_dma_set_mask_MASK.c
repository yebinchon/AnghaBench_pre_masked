
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct dma_map_ops {int (* set_dma_mask ) (struct device*,int ) ;} ;
struct device {int * dma_mask; } ;
struct TYPE_2__ {int (* dma_set_mask ) (struct device*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int ) ;
 struct dma_map_ops* FUNC_1 (struct device*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct device*,int ) ;
 int FUNC_3 (struct device*,int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct device *VAR_2, u64 VAR_3)
{
 struct dma_map_ops *VAR_4 = FUNC_1(VAR_2);

 if (VAR_1.dma_set_mask)
  return VAR_1.dma_set_mask(VAR_2, VAR_3);
 if (FUNC_4(VAR_4 == ((void*)0)))
  return -VAR_0;
 if (VAR_4->set_dma_mask != ((void*)0))
  return VAR_4->set_dma_mask(VAR_2, VAR_3);
 if (!VAR_2->dma_mask || !FUNC_0(VAR_2, VAR_3))
  return -VAR_0;
 *VAR_2->dma_mask = VAR_3;
 return 0;
}
