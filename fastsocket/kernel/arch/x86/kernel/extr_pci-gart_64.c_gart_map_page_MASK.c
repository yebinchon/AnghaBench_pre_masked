
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
typedef unsigned long phys_addr_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef unsigned long dma_addr_t ;


 unsigned long FUNC_0 (struct device*,unsigned long,size_t,int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct device*,unsigned long,size_t) ;
 unsigned long FUNC_3 (struct page*) ;
 struct device VAR_0 ;

__attribute__((used)) static dma_addr_t FUNC_4(struct device *VAR_1, struct page *VAR_2,
    unsigned long VAR_3, size_t VAR_4,
    enum dma_data_direction VAR_5,
    struct dma_attrs *VAR_6)
{
 unsigned long VAR_7;
 phys_addr_t VAR_8 = FUNC_3(VAR_2) + VAR_3;

 if (!VAR_1)
  VAR_1 = &VAR_0;

 if (!FUNC_2(VAR_1, VAR_8, VAR_4))
  return VAR_8;

 VAR_7 = FUNC_0(VAR_1, VAR_8, VAR_4, VAR_5, 0);
 FUNC_1();

 return VAR_7;
}
