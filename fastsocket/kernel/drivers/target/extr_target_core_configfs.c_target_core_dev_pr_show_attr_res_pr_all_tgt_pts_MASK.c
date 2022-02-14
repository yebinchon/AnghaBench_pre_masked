
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_device {int dev_reservation_lock; TYPE_1__* dev_pr_res_holder; } ;
typedef int ssize_t ;
struct TYPE_2__ {scalar_t__ pr_reg_all_tg_pt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_3(
  struct se_device *VAR_0, char *VAR_1)
{
 ssize_t VAR_2 = 0;

 FUNC_0(&VAR_0->dev_reservation_lock);
 if (!VAR_0->dev_pr_res_holder) {
  VAR_2 = FUNC_2(VAR_1, "No SPC-3 Reservation holder\n");
 } else if (VAR_0->dev_pr_res_holder->pr_reg_all_tg_pt) {
  VAR_2 = FUNC_2(VAR_1, "SPC-3 Reservation: All Target"
   " Ports registration\n");
 } else {
  VAR_2 = FUNC_2(VAR_1, "SPC-3 Reservation: Single"
   " Target Port registration\n");
 }

 FUNC_1(&VAR_0->dev_reservation_lock);
 return VAR_2;
}
