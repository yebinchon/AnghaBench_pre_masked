
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tid; } ;
struct i2o_device {TYPE_1__ lct_data; } ;
struct i2o_block_device {TYPE_2__* gd; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int disk_name; } ;


 int FUNC_0 (TYPE_2__*) ;
 struct i2o_block_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct i2o_block_device*) ;
 int VAR_0 ;
 int FUNC_4 (struct i2o_device*) ;
 int FUNC_5 (struct i2o_device*,int *,int ,int ) ;
 int FUNC_6 (char*,int ,int ) ;
 struct i2o_device* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_1)
{
 struct i2o_device *VAR_2 = FUNC_7(VAR_1);
 struct i2o_block_device *VAR_3 = FUNC_1(VAR_1);

 FUNC_6("device removed (TID: %03x): %s\n", VAR_2->lct_data.tid,
   VAR_3->gd->disk_name);

 FUNC_5(VAR_2, &VAR_0, 0, 0);

 FUNC_0(VAR_3->gd);

 FUNC_2(VAR_1, ((void*)0));

 FUNC_4(VAR_2);

 FUNC_3(VAR_3);

 return 0;
}
