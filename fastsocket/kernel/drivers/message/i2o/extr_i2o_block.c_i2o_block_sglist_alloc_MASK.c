
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct i2o_controller {TYPE_1__* pdev; } ;
struct i2o_block_request {int sg_nents; int sg_table; TYPE_2__* req; int * dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_5__ {int q; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int FUNC_1 (struct i2o_controller*,int ,int,int,int **) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static inline int FUNC_3(struct i2o_controller *VAR_3,
      struct i2o_block_request *VAR_4,
      u32 ** VAR_5)
{
 int VAR_6;
 enum dma_data_direction VAR_7;

 VAR_4->dev = &VAR_3->pdev->dev;
 VAR_6 = FUNC_0(VAR_4->req->q, VAR_4->req, VAR_4->sg_table);

 if (FUNC_2(VAR_4->req) == VAR_2)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_1;

 VAR_4->sg_nents = VAR_6;

 return FUNC_1(VAR_3, VAR_4->sg_table, VAR_6, VAR_7, VAR_5);
}
