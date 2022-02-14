
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uwb_rsv {scalar_t__ state; } ;
struct uwb_rc_evt_drp {int dummy; } ;
struct uwb_rc {int dummy; } ;
struct uwb_ie_drp {int dummy; } ;
struct uwb_dev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct uwb_rc*,struct uwb_rsv*,struct uwb_dev*,struct uwb_ie_drp*,struct uwb_rc_evt_drp*) ;
 int FUNC_1 (struct uwb_rc*,struct uwb_rsv*,struct uwb_ie_drp*,struct uwb_rc_evt_drp*) ;
 scalar_t__ FUNC_2 (struct uwb_ie_drp*) ;
 struct uwb_rsv* FUNC_3 (struct uwb_rc*,struct uwb_dev*,struct uwb_ie_drp*) ;
 int FUNC_4 (struct uwb_rsv*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct uwb_rc *VAR_1, struct uwb_dev *VAR_2,
         struct uwb_rc_evt_drp *VAR_3,
         struct uwb_ie_drp *VAR_4)
{
 struct uwb_rsv *VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4);
 if (!VAR_5) {





  return;
 }





 if (VAR_5->state == VAR_0) {
  FUNC_4(VAR_5, VAR_0);
  return;
 }

 if (FUNC_2(VAR_4))
  FUNC_1(VAR_1, VAR_5, VAR_4, VAR_3);
 else
  FUNC_0(VAR_1, VAR_5, VAR_2, VAR_4, VAR_3);

}
