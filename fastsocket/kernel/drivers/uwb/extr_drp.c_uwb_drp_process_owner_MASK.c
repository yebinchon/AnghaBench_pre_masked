
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bm; } ;
struct uwb_rsv_move {TYPE_2__ companion_mas; } ;
struct TYPE_6__ {int bm; } ;
struct uwb_rsv {TYPE_3__ mas; int state; struct uwb_rsv_move mv; } ;
struct uwb_rc_evt_drp {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device dev; } ;
struct uwb_rc {TYPE_1__ uwb_dev; } ;
struct uwb_mas_bm {int bm; } ;
struct uwb_ie_drp {int dummy; } ;
struct uwb_dev {int last_availability_bm; } ;
typedef enum uwb_drp_reason { ____Placeholder_uwb_drp_reason } uwb_drp_reason ;






 int VAR_0 ;
 int const VAR_1 ;







 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 int FUNC_3 (struct uwb_rc*,struct uwb_rsv*,struct uwb_rc_evt_drp*,struct uwb_ie_drp*,struct uwb_mas_bm*) ;
 int FUNC_4 (struct uwb_mas_bm*,struct uwb_ie_drp*) ;
 int FUNC_5 (struct uwb_ie_drp*) ;
 int FUNC_6 (struct uwb_ie_drp*) ;
 int FUNC_7 (struct uwb_rsv*,int const) ;

__attribute__((used)) static void FUNC_8(struct uwb_rc *VAR_2, struct uwb_rsv *VAR_3,
      struct uwb_dev *VAR_4, struct uwb_ie_drp *VAR_5,
      struct uwb_rc_evt_drp *VAR_6)
{
 struct device *VAR_7 = &VAR_2->uwb_dev.dev;
 struct uwb_rsv_move *VAR_8 = &VAR_3->mv;
 int VAR_9;
 enum uwb_drp_reason VAR_10;
 struct uwb_mas_bm VAR_11;

 VAR_9 = FUNC_6(VAR_5);
 VAR_10 = FUNC_5(VAR_5);
 FUNC_4(&VAR_11, VAR_5);

 if (VAR_9) {
  switch (VAR_10) {
  case 138:
   switch (VAR_3->state) {
   case 128:
   case 133:
   case 134:
    FUNC_7(VAR_3, 134);
    break;
   case 132:
    if (FUNC_1(VAR_11.bm, VAR_3->mas.bm, VAR_0)) {
     FUNC_7(VAR_3, 134);
    } else {
     FUNC_7(VAR_3, 132);
    }
    break;

   case 129:
    if (FUNC_1(VAR_11.bm, VAR_3->mas.bm, VAR_0)) {
     FUNC_7(VAR_3, 134);
    } else {
     FUNC_7(VAR_3, 129);
    }
    break;
   case 130:
    if (FUNC_1(VAR_11.bm, VAR_8->companion_mas.bm, VAR_0)) {

     FUNC_7(VAR_3, 131);
    } else {
     FUNC_7(VAR_3, 130);
    }
    break;
   case 131:
    if (FUNC_1(VAR_11.bm, VAR_3->mas.bm, VAR_0))
     FUNC_7(VAR_3, 129);
    else
     FUNC_7(VAR_3, 131);
    break;
   default:
    break;
   }
   break;
  default:
   FUNC_2(VAR_7, "ignoring invalid DRP IE state (%d/%d)\n",
     VAR_10, VAR_9);
  }
 } else {
  switch (VAR_10) {
  case 135:
   FUNC_7(VAR_3, 128);
   break;
  case 136:
   FUNC_7(VAR_3, VAR_1);
   break;
  case 137:

   FUNC_0(VAR_11.bm, VAR_4->last_availability_bm,
       VAR_0);
   FUNC_3(VAR_2, VAR_3, VAR_6, VAR_5, &VAR_11);
   break;
  default:
   FUNC_2(VAR_7, "ignoring invalid DRP IE state (%d/%d)\n",
     VAR_10, VAR_9);
  }
 }
}
