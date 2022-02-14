
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int dummy; } ;
struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int FUNC_0 (struct device*,struct scatterlist*,unsigned int,int) ;
 struct scatterlist* FUNC_1 (struct scatterlist*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct scatterlist *VAR_1,
     unsigned int VAR_2, enum dma_data_direction VAR_3,
     int VAR_4)
{
 if (FUNC_2(VAR_4))
  while (VAR_1) {
   FUNC_0(VAR_0, VAR_1, 1, VAR_3);
   VAR_1 = FUNC_1(VAR_1);
  }
 else
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 return VAR_2;
}
