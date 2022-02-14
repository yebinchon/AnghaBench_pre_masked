
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int * dma_mask; } ;
struct TYPE_2__ {int (* dma_supported ) (struct device*,int ) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct device*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct device *VAR_1)
{
 return VAR_1 && VAR_1->dma_mask &&
  !VAR_0.dma_supported(VAR_1, *VAR_1->dma_mask);
}
