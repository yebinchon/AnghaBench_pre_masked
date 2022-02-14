
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pdev_archdata {int hwblk_id; int mutex; int flags; int entry; } ;
struct platform_device {struct pdev_archdata archdata; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 struct platform_device* FUNC_11 (struct device*) ;

int FUNC_12(struct device *VAR_7)
{
 struct platform_device *VAR_8 = FUNC_11(VAR_7);
 struct pdev_archdata *VAR_9 = &VAR_8->archdata;
 unsigned long VAR_10;
 int VAR_11 = VAR_9->hwblk_id;
 int VAR_12 = 0;

 FUNC_1(VAR_7, "platform_pm_runtime_suspend() [%d]\n", VAR_11);


 if (!VAR_11)
  goto out;


 FUNC_5();


 if (FUNC_10(VAR_3, &VAR_8->archdata.flags)) {
  VAR_12 = -VAR_0;
  goto out;
 }


 FUNC_6(&VAR_9->mutex);


 FUNC_3(VAR_5, VAR_11);


 FUNC_8(&VAR_6, VAR_10);
 FUNC_4(&VAR_8->archdata.entry, &VAR_4);
 FUNC_0(VAR_2, &VAR_8->archdata.flags);
 FUNC_9(&VAR_6, VAR_10);


 FUNC_2(VAR_5, VAR_11, VAR_1);




 FUNC_7(&VAR_9->mutex);

out:
 FUNC_1(VAR_7, "platform_pm_runtime_suspend() [%d] returns %d\n",
  VAR_11, VAR_12);

 return VAR_12;
}
