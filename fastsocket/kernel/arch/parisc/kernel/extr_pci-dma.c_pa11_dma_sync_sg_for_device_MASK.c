
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0, struct scatterlist *VAR_1, int VAR_2, enum dma_data_direction VAR_3)
{
 int VAR_4;



 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_1++ )
  FUNC_0(FUNC_1(VAR_1), VAR_1->length);
}
