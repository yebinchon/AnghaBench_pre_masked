
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct page*,unsigned long,size_t,int) ;
 scalar_t__ FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (struct page*) ;

__attribute__((used)) static inline dma_addr_t FUNC_4(struct device *VAR_1,
          struct page *VAR_2,
          unsigned long VAR_3,
          size_t VAR_4,
          enum dma_data_direction VAR_5,
          struct dma_attrs *VAR_6)
{
 FUNC_0(VAR_5 == VAR_0);
 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 return FUNC_3(VAR_2) + VAR_3 + FUNC_2(VAR_1);
}
