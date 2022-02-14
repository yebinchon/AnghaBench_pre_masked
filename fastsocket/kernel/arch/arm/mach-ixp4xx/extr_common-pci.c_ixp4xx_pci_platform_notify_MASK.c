
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {void* coherent_dma_mask; void** dma_mask; int * bus; } ;


 void* VAR_0 ;
 int FUNC_0 (struct device*,int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2)
{
 if(VAR_2->bus == &VAR_1) {
  *VAR_2->dma_mask = VAR_0 - 1;
  VAR_2->coherent_dma_mask = VAR_0 - 1;
  FUNC_0(VAR_2, 2048, 4096);
 }
 return 0;
}
