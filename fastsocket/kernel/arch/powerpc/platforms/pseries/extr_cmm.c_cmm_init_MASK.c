
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(void)
{
 int VAR_11 = -VAR_0;

 if (!FUNC_4(VAR_2))
  return -VAR_1;

 if ((VAR_11 = FUNC_8(&VAR_6)) < 0)
  return VAR_11;

 if ((VAR_11 = FUNC_9(&VAR_7)))
  goto out_oom_notifier;

 if ((VAR_11 = FUNC_2(&VAR_8)))
  goto out_reboot_notifier;

 if (FUNC_7(&VAR_5) ||
     FUNC_6(&VAR_4))
  goto out_unregister_notifier;

 if (VAR_3)
  return VAR_11;

 VAR_10 = FUNC_5(VAR_9, ((void*)0), "cmmthread");
 if (FUNC_0(VAR_10)) {
  VAR_11 = FUNC_1(VAR_10);
  goto out_unregister_notifier;
 }

 return VAR_11;

out_unregister_notifier:
 FUNC_11(&VAR_5);
 FUNC_10(&VAR_4);
 FUNC_3(&VAR_8);
out_reboot_notifier:
 FUNC_13(&VAR_7);
out_oom_notifier:
 FUNC_12(&VAR_6);
 return VAR_11;
}
