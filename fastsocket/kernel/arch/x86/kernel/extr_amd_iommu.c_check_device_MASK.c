
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dma_mask; } ;



__attribute__((used)) static bool FUNC_0(struct device *VAR_0)
{
 if (!VAR_0 || !VAR_0->dma_mask)
  return 0;

 return 1;
}
