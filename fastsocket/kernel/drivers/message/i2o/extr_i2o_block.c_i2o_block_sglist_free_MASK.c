
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_block_request {int sg_nents; int sg_table; int dev; int req; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int ,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline void FUNC_2(struct i2o_block_request *VAR_3)
{
 enum dma_data_direction VAR_4;

 if (FUNC_1(VAR_3->req) == VAR_2)
  VAR_4 = VAR_0;
 else
  VAR_4 = VAR_1;

 FUNC_0(VAR_3->dev, VAR_3->sg_table, VAR_3->sg_nents, VAR_4);
}
