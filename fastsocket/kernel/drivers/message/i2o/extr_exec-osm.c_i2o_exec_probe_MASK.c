
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2o_device {TYPE_1__* iop; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct i2o_device* exec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int *) ;
 int FUNC_1 (struct device*,int *) ;
 int FUNC_2 (struct i2o_device*,int *,int ,int) ;
 int VAR_2 ;
 struct i2o_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_3)
{
 struct i2o_device *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4, &VAR_2, 0, 0xffffffff);
 if (VAR_5) goto err_out;

 VAR_5 = FUNC_0(VAR_3, &VAR_1);
 if (VAR_5) goto err_evtreg;
 VAR_5 = FUNC_0(VAR_3, &VAR_0);
 if (VAR_5) goto err_vid;

 VAR_4->iop->exec = VAR_4;

 return 0;

err_vid:
 FUNC_1(VAR_3, &VAR_1);
err_evtreg:
 FUNC_2(FUNC_3(VAR_3), &VAR_2, 0, 0);
err_out:
 return VAR_5;
}
