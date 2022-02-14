
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rc {scalar_t__ set_drp_ie_pending; int rsvs_lock; int rsv_update_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct uwb_rc*) ;

void FUNC_4(struct uwb_rc *VAR_0)
{
 FUNC_1(&VAR_0->rsvs_lock);
 if (!FUNC_0(&VAR_0->rsv_update_work)) {
  if (VAR_0->set_drp_ie_pending > 0) {
   VAR_0->set_drp_ie_pending++;
   goto unlock;
  }
  FUNC_3(VAR_0);
 }
unlock:
 FUNC_2(&VAR_0->rsvs_lock);
}
