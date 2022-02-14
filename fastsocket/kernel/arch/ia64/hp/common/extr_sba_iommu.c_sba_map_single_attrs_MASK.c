
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct device*,int ,unsigned long,size_t,int,struct dma_attrs*) ;
 int FUNC_1 (void*) ;

__attribute__((used)) static dma_addr_t FUNC_2(struct device *VAR_1, void *VAR_2,
           size_t VAR_3, enum dma_data_direction VAR_4,
           struct dma_attrs *VAR_5)
{
 return FUNC_0(VAR_1, FUNC_1(VAR_2),
       (unsigned long)VAR_2 & ~VAR_0, VAR_3, VAR_4, VAR_5);
}
