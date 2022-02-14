
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; int dma_address; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned long,int ,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,int ,int ,int) ;
 scalar_t__ FUNC_4 (struct scatterlist*) ;

void FUNC_5(struct device *VAR_2, struct scatterlist *VAR_3, int VAR_4,
 enum dma_data_direction VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(VAR_5 == VAR_0);

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_3++) {
  if (!FUNC_2(VAR_2) &&
      VAR_5 != VAR_1) {
   VAR_6 = (unsigned long) FUNC_4(VAR_3);
   if (VAR_6)
    FUNC_1(VAR_6, VAR_3->length, VAR_5);
  }
  FUNC_3(VAR_2, VAR_3->dma_address, VAR_3->length, VAR_5);
 }
}
