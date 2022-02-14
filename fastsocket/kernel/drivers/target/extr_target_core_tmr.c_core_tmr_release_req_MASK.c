
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_tmr_req {int tmr_list; struct se_device* tmr_dev; } ;
struct se_device {int se_tmr_lock; } ;


 int FUNC_0 (struct se_tmr_req*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(
 struct se_tmr_req *VAR_0)
{
 struct se_device *VAR_1 = VAR_0->tmr_dev;
 unsigned long VAR_2;

 if (!VAR_1) {
  FUNC_0(VAR_0);
  return;
 }

 FUNC_2(&VAR_1->se_tmr_lock, VAR_2);
 FUNC_1(&VAR_0->tmr_list);
 FUNC_3(&VAR_1->se_tmr_lock, VAR_2);

 FUNC_0(VAR_0);
}
