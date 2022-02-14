
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct i2o_controller {scalar_t__ pae_support; TYPE_1__* pdev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;
struct TYPE_2__ {int dev; } ;




 size_t VAR_0 ;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (int *,void*,size_t,int) ;
 int FUNC_2 (int *,int ) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;

dma_addr_t FUNC_5(struct i2o_controller *VAR_1, void *VAR_2,
         size_t VAR_3,
         enum dma_data_direction VAR_4,
         u32 ** VAR_5)
{
 u32 VAR_6;
 u32 *VAR_7 = *VAR_5;
 dma_addr_t VAR_8;

 switch (VAR_4) {
 case 128:
  VAR_6 = 0xd4000000;
  break;
 case 129:
  VAR_6 = 0xd0000000;
  break;
 default:
  return 0;
 }

 VAR_8 = FUNC_1(&VAR_1->pdev->dev, VAR_2, VAR_3, VAR_4);
 if (!FUNC_2(&VAR_1->pdev->dev, VAR_8)) {







  *VAR_7++ = FUNC_0(VAR_6 | VAR_3);
  *VAR_7++ = FUNC_0(FUNC_4(VAR_8));




  *VAR_5 = VAR_7;
 }
 return VAR_8;
}
