
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_devres {scalar_t__ vaddr; scalar_t__ size; scalar_t__ dma_handle; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, void *VAR_1, void *VAR_2)
{
 struct dma_devres *VAR_3 = VAR_1, *VAR_4 = VAR_2;

 if (VAR_3->vaddr == VAR_4->vaddr) {
  FUNC_0(VAR_3->size != VAR_4->size ||
   VAR_3->dma_handle != VAR_4->dma_handle);
  return 1;
 }
 return 0;
}
