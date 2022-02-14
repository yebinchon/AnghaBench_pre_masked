
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tid; } ;
struct i2o_device {TYPE_1__ lct_data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct device*) ;
 struct i2o_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 struct i2o_device *VAR_2 = FUNC_4(FUNC_1(VAR_1));
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, &VAR_0);
 if (VAR_3)
  goto err_out;

 FUNC_2("device added (TID: %03x)\n", VAR_2->lct_data.tid);

 return 0;

err_out:
 FUNC_3(VAR_1);
 return VAR_3;
}
