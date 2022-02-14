
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct memstick_request {int dummy; } ;
struct memstick_dev {int mrq_complete; struct memstick_request current_mrq; int reg_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct memstick_request*,int ,char*,int) ;

__attribute__((used)) static int FUNC_2(struct memstick_dev *VAR_2,
      struct memstick_request **VAR_3)
{
 if (!(*VAR_3)) {
  FUNC_1(&VAR_2->current_mrq, VAR_1,
      (char *)&VAR_2->reg_addr,
      sizeof(VAR_2->reg_addr));
  *VAR_3 = &VAR_2->current_mrq;
  return 0;
 } else {
  FUNC_0(&VAR_2->mrq_complete);
  return -VAR_0;
 }
}
