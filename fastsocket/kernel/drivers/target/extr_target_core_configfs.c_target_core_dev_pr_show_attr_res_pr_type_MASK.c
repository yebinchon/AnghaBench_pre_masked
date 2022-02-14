
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t10_pr_registration {int pr_res_type; } ;
struct se_device {int dev_reservation_lock; struct t10_pr_registration* dev_pr_res_holder; } ;
typedef int ssize_t ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,...) ;

__attribute__((used)) static ssize_t FUNC_4(
  struct se_device *VAR_0, char *VAR_1)
{
 struct t10_pr_registration *VAR_2;
 ssize_t VAR_3 = 0;

 FUNC_1(&VAR_0->dev_reservation_lock);
 VAR_2 = VAR_0->dev_pr_res_holder;
 if (VAR_2) {
  VAR_3 = FUNC_3(VAR_1, "SPC-3 Reservation Type: %s\n",
   FUNC_0(VAR_2->pr_res_type));
 } else {
  VAR_3 = FUNC_3(VAR_1, "No SPC-3 Reservation holder\n");
 }

 FUNC_2(&VAR_0->dev_reservation_lock);
 return VAR_3;
}
