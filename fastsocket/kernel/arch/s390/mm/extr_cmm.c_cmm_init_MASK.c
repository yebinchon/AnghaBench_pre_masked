
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int * VAR_11 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14 (void)
{
 int VAR_12 = -VAR_0;
 VAR_12 = FUNC_4(&VAR_4);
 if (VAR_12 < 0)
  goto out_oom_notify;
 VAR_12 = FUNC_5(&VAR_5);
 if (VAR_12)
  goto out_pm;
 VAR_9 = FUNC_3(VAR_8, ((void*)0), "cmmthread");
 VAR_12 = FUNC_0(VAR_9) ? FUNC_1(VAR_9) : 0;
 if (VAR_12)
  goto out_kthread;
 return 0;

out_kthread:
 FUNC_12(&VAR_5);
out_pm:
 FUNC_11(&VAR_4);
out_oom_notify:
 FUNC_2(&VAR_10);
 return VAR_12;
}
