
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,size_t,int) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct device*) ;
 scalar_t__ FUNC_4 (struct device*,struct page*) ;

dma_addr_t FUNC_5(struct device *VAR_1, struct page *VAR_2,
 unsigned long VAR_3, size_t VAR_4, enum dma_data_direction VAR_5)
{
 FUNC_0(VAR_5 == VAR_0);

 if (!FUNC_3(VAR_1)) {
  unsigned long VAR_6;

  VAR_6 = (unsigned long) FUNC_2(VAR_2) + VAR_3;
  FUNC_1(VAR_6, VAR_4, VAR_5);
 }

 return FUNC_4(VAR_1, VAR_2) + VAR_3;
}
