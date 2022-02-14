
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdev_archdata {int hwblk_id; int mutex; int flags; } ;
struct platform_device {struct pdev_archdata archdata; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct device*,char*,int,...) ;
 int FUNC_3 (int ,int,int ) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (int ,int *) ;
 struct platform_device* FUNC_9 (struct device*) ;

int FUNC_10(struct device *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_9(VAR_4);
 struct pdev_archdata *VAR_6 = &VAR_5->archdata;
 int VAR_7 = VAR_6->hwblk_id;
 int VAR_8 = 0;

 FUNC_2(VAR_4, "platform_pm_runtime_resume() [%d]\n", VAR_7);


 if (!VAR_7)
  goto out;


 FUNC_4();


 FUNC_5(&VAR_6->mutex);


 FUNC_7(VAR_5);


 if (!FUNC_8(VAR_1, &VAR_5->archdata.flags) &&
     !FUNC_8(VAR_2, &VAR_5->archdata.flags))
  FUNC_3(VAR_3, VAR_7, VAR_0);


 VAR_8 = FUNC_0(VAR_5);


 FUNC_1(VAR_1, &VAR_5->archdata.flags);





 FUNC_6(&VAR_6->mutex);
out:
 FUNC_2(VAR_4, "platform_pm_runtime_resume() [%d] returns %d\n",
  VAR_7, VAR_8);

 return VAR_8;
}
