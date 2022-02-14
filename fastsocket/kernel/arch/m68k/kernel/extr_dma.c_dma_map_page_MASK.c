
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (struct device*,scalar_t__,size_t,int) ;
 scalar_t__ FUNC_1 (struct page*) ;

dma_addr_t FUNC_2(struct device *VAR_0, struct page *VAR_1,
   unsigned long VAR_2, size_t VAR_3,
   enum dma_data_direction VAR_4)
{
 dma_addr_t VAR_5 = FUNC_1(VAR_1) + VAR_2;

 FUNC_0(VAR_0, VAR_5, VAR_3, VAR_4);
 return VAR_5;
}
