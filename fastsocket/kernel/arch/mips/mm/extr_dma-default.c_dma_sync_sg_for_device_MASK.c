
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned long,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct scatterlist*) ;

void FUNC_5(struct device *VAR_1, struct scatterlist *VAR_2, int VAR_3,
 enum dma_data_direction VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_4 == VAR_0);


 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++, VAR_2++) {
  if (!FUNC_3(VAR_1))
   FUNC_1((unsigned long)FUNC_2(FUNC_4(VAR_2)),
              VAR_2->length, VAR_4);
 }
}
