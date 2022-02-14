
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct dma_attrs {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (int ,struct scatterlist*,int,int,struct dma_attrs*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct scatterlist *VAR_1,
  int VAR_2, enum dma_data_direction VAR_3,
  struct dma_attrs *VAR_4)
{
 FUNC_1(FUNC_0(VAR_0), VAR_1, VAR_2, VAR_3,
         VAR_4);
}
