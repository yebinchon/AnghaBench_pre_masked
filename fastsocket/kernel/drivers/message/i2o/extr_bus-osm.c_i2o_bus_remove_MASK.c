
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
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct device*) ;
 struct i2o_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1)
{
 struct i2o_device *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(VAR_1, &VAR_0);

 FUNC_2(VAR_1);

 FUNC_1("device removed (TID: %03x)\n", VAR_2->lct_data.tid);

 return 0;
}
