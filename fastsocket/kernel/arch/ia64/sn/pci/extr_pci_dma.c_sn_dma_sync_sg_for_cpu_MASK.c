
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct device {int * bus; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct device *VAR_1, struct scatterlist *VAR_2,
       int VAR_3, enum dma_data_direction VAR_4)
{
 FUNC_0(VAR_1->bus != &VAR_0);
}
