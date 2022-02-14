
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hwblk_id; } ;
struct platform_device {TYPE_1__ archdata; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct device*) ;
 struct platform_device* FUNC_3 (struct device*) ;

int FUNC_4(struct device *VAR_0)
{
 struct platform_device *VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = VAR_1->archdata.hwblk_id;
 int VAR_3 = 0;

 FUNC_0(VAR_0, "platform_pm_runtime_idle() [%d]\n", VAR_2);


 if (!VAR_2)
  goto out;


 FUNC_1();


 VAR_3 = FUNC_2(VAR_0);
out:
 FUNC_0(VAR_0, "platform_pm_runtime_idle() [%d] done!\n", VAR_2);
 return VAR_3;
}
