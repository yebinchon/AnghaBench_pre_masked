
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (char*,int *,int *,int ) ;
 int VAR_10 ;
 int FUNC_8 (int *,int ,char*) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_12)
{
 int VAR_13;


 FUNC_0(&VAR_3);
 FUNC_0(&VAR_5);

 FUNC_3(&VAR_4);
 FUNC_3(&VAR_10);
 FUNC_8(&VAR_7, VAR_1, "SMD_RPCCALL");

 VAR_8 = FUNC_1("rpcrouter");
 if (!VAR_8)
  return -VAR_0;

 VAR_13 = FUNC_5();
 if (VAR_13 < 0)
  goto fail_destroy_workqueue;


 VAR_2 = 0;
 VAR_13 = FUNC_7("SMD_RPCCALL", &VAR_9, ((void*)0), VAR_6);
 if (VAR_13 < 0)
  goto fail_remove_devices;

 FUNC_6(VAR_8, &VAR_11);
 return 0;

 fail_remove_devices:
 FUNC_4();
 fail_destroy_workqueue:
 FUNC_2(VAR_8);
 return VAR_13;
}
