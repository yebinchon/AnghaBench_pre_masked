
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* map_page ) (struct device*,struct page*,unsigned long,size_t,int,struct dma_attrs*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,struct dma_attrs*) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (struct device*,int ,struct page*,unsigned long,size_t,int ,int,struct dma_attrs*) ;
 int FUNC_4 (struct device*,struct page*,unsigned long,size_t,int,struct dma_attrs*) ;

__attribute__((used)) static dma_addr_t FUNC_5(struct device *VAR_3, struct page *VAR_4,
         unsigned long VAR_5, size_t VAR_6,
         enum dma_data_direction VAR_7,
         struct dma_attrs *VAR_8)
{
 if (VAR_2 == FUNC_2(VAR_0, VAR_8))
  return VAR_1.map_page(VAR_3, VAR_4, VAR_5, VAR_6,
            VAR_7, VAR_8);
 else
  return FUNC_3(VAR_3, FUNC_0(VAR_3), VAR_4,
          VAR_5, VAR_6, FUNC_1(VAR_3),
          VAR_7, VAR_8);
}
