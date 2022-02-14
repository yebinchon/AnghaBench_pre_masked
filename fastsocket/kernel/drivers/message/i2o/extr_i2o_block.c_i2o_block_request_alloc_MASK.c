
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2o_block_request {int sg_table; int queue; } ;
struct TYPE_2__ {int pool; } ;


 int VAR_0 ;
 struct i2o_block_request* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_3 ;
 struct i2o_block_request* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static inline struct i2o_block_request *FUNC_4(void)
{
 struct i2o_block_request *VAR_4;

 VAR_4 = FUNC_2(VAR_3.pool, VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 FUNC_1(&VAR_4->queue);
 FUNC_3(VAR_4->sg_table, VAR_2);

 return VAR_4;
}
