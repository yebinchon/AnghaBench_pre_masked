
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int,unsigned long) ;
 int FUNC_3 (int,unsigned long) ;
 int FUNC_4 (unsigned long,scalar_t__) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (struct scatterlist*) ;

int FUNC_8(struct device *VAR_3, struct scatterlist *VAR_4, int VAR_5,
        enum dma_data_direction VAR_6)
{
 unsigned long VAR_7;
 void *VAR_8;
 int VAR_9;

 FUNC_0(VAR_6 == VAR_0);

 VAR_7 = FUNC_1(2);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8 = FUNC_5(FUNC_7(&VAR_4[VAR_9]), VAR_2);

  FUNC_4((unsigned long) VAR_8,
         (unsigned long) VAR_8 + VAR_1);

 }

 FUNC_6(VAR_8, VAR_2);
 if (VAR_7) {
  FUNC_2(2, VAR_7);
  FUNC_3(2, VAR_7);
 }

 return VAR_5;
}
