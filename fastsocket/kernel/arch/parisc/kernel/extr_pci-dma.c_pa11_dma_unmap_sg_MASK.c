
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct scatterlist*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2, struct scatterlist *VAR_3, int VAR_4, enum dma_data_direction VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_5 == VAR_0);

 if (VAR_5 == VAR_1)
     return;



 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++, VAR_3++ )
  FUNC_1(FUNC_2(VAR_3), VAR_3->length);
 return;
}
