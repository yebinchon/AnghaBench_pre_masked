
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct i2o_controller {scalar_t__ pae_support; TYPE_1__* pdev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;




 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *,struct scatterlist*,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct scatterlist*) ;
 int FUNC_5 (struct scatterlist*) ;
 struct scatterlist* FUNC_6 (struct scatterlist*) ;

int FUNC_7(struct i2o_controller *VAR_1, struct scatterlist *VAR_2,
     int VAR_3, enum dma_data_direction VAR_4, u32 ** VAR_5)
{
 u32 VAR_6;
 u32 *VAR_7 = *VAR_5;

 switch (VAR_4) {
 case 128:
  VAR_6 = 0x14000000;
  break;
 case 129:
  VAR_6 = 0x10000000;
  break;
 default:
  return 0;
 }

 VAR_3 = FUNC_1(&VAR_1->pdev->dev, VAR_2, VAR_3, VAR_4);
 if (!VAR_3)
  return 0;
 while (VAR_3-- > 0) {
  if (!VAR_3)
   VAR_6 |= 0xC0000000;
  *VAR_7++ = FUNC_0(VAR_6 | FUNC_5(VAR_2));
  *VAR_7++ = FUNC_0(FUNC_3(FUNC_4(VAR_2)));




  VAR_2 = FUNC_6(VAR_2);
 }
 *VAR_5 = VAR_7;

 return 1;
}
