
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int
FUNC_11(void)
{
 unsigned long VAR_12;
 int VAR_13 = 0;

 FUNC_8(&VAR_6, VAR_12);

 if (VAR_1 != VAR_4)
  goto fail_unlock;
 VAR_1 = VAR_3;

 FUNC_0(&VAR_9);
 FUNC_0(&VAR_8);
 FUNC_3(&VAR_11.list, &VAR_8);
 FUNC_2(&VAR_10);

 FUNC_9(&VAR_6, VAR_12);
 VAR_13 = FUNC_6();
 FUNC_8(&VAR_6, VAR_12);
 if (VAR_13)
  goto fail_init_state_uninitialized;

 VAR_13 = FUNC_5(&VAR_7);
 if (VAR_13)
  goto fail_init_state_uninitialized;

 VAR_13 = FUNC_4(0x2401, VAR_5,
            &VAR_0);
 if (VAR_13)
  goto fail_unregister_reboot_notifier;
 VAR_1 = VAR_2;
 FUNC_9(&VAR_6, VAR_12);


 FUNC_1(0, 9);
 FUNC_7(1);
 return 0;

fail_unregister_reboot_notifier:
 FUNC_10(&VAR_7);
fail_init_state_uninitialized:
 VAR_1 = VAR_4;
fail_unlock:
 FUNC_9(&VAR_6, VAR_12);
 return VAR_13;
}
