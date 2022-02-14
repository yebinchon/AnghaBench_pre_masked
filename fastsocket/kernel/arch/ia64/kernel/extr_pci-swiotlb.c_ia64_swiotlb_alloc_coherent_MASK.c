
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {scalar_t__ coherent_dma_mask; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 void* FUNC_1 (struct device*,size_t,int *,int ) ;

__attribute__((used)) static void *FUNC_2(struct device *VAR_1, size_t VAR_2,
      dma_addr_t *VAR_3, gfp_t VAR_4)
{
 if (VAR_1->coherent_dma_mask != FUNC_0(64))
  VAR_4 |= VAR_0;
 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}
