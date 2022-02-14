
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_table {int nents; int sgl; } ;
struct dma_buf_attachment {int dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int ,int ,int ,int) ;
 int FUNC_1 (struct sg_table*) ;
 int FUNC_2 (struct sg_table*) ;

__attribute__((used)) static void FUNC_3(struct dma_buf_attachment *VAR_0,
       struct sg_table *VAR_1,
       enum dma_data_direction VAR_2)
{
 FUNC_0(VAR_0->dev, VAR_1->sgl, VAR_1->nents, VAR_2);
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
