
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct edac_device_ctl_info {scalar_t__ op_state; int poll_msec; int delay; int work; int (* edac_check ) (struct edac_device_ctl_info*) ;} ;
struct delayed_work {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct edac_device_ctl_info*) ;
 struct delayed_work* FUNC_5 (struct work_struct*) ;
 struct edac_device_ctl_info* FUNC_6 (struct delayed_work*) ;

__attribute__((used)) static void FUNC_7(struct work_struct *VAR_4)
{
 struct delayed_work *VAR_5 = FUNC_5(VAR_4);
 struct edac_device_ctl_info *VAR_6 = FUNC_6(VAR_5);

 FUNC_0(&VAR_2);


 if (VAR_6->op_state == VAR_0) {
  FUNC_1(&VAR_2);
  return;
 }


 if ((VAR_6->op_state == VAR_1) &&
  (VAR_6->edac_check != ((void*)0))) {
   VAR_6->edac_check(VAR_6);
 }

 FUNC_1(&VAR_2);






 if (VAR_6->poll_msec == 1000)
  FUNC_2(VAR_3, &VAR_6->work,
    FUNC_3(VAR_6->delay));
 else
  FUNC_2(VAR_3, &VAR_6->work,
    VAR_6->delay);
}
