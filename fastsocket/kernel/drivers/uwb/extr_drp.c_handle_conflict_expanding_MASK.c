
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bm; } ;
struct uwb_rsv_move {TYPE_2__ companion_mas; } ;
struct TYPE_3__ {int bm; } ;
struct uwb_rsv {int needs_release_companion_mas; TYPE_1__ mas; struct uwb_rsv_move mv; struct uwb_rc* rc; } ;
struct uwb_drp_backoff_win {int can_reserve_extra_mases; } ;
struct uwb_rc {struct uwb_drp_backoff_win bow; } ;
struct uwb_mas_bm {int bm; } ;
struct uwb_ie_drp {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct uwb_ie_drp*,int,struct uwb_rsv*,int ) ;
 int FUNC_2 (struct uwb_rc*,TYPE_2__*) ;
 int FUNC_3 (struct uwb_rc*) ;
 scalar_t__ FUNC_4 (struct uwb_rsv*) ;
 int FUNC_5 (struct uwb_rsv*,int ) ;

__attribute__((used)) static void FUNC_6(struct uwb_ie_drp *VAR_5, int VAR_6,
          struct uwb_rsv *VAR_7, bool VAR_8,
          struct uwb_mas_bm *VAR_9)
{
 struct uwb_rc *VAR_10 = VAR_7->rc;
 struct uwb_drp_backoff_win *VAR_11 = &VAR_10->bow;
 struct uwb_rsv_move *VAR_12 = &VAR_7->mv;
 int VAR_13;

 if (VAR_8) {

  VAR_13 = FUNC_1(VAR_5, VAR_6, VAR_7, 0);
  if (FUNC_4(VAR_7)) {
   switch(VAR_13) {
   case 129:
   case 128:
    FUNC_5(VAR_7, VAR_1);
    VAR_7->needs_release_companion_mas = 0;
    if (VAR_11->can_reserve_extra_mases == 0)
     FUNC_3(VAR_10);
    FUNC_2(VAR_7->rc, &VAR_7->mv.companion_mas);
   }
  } else {
   switch(VAR_13) {
   case 129:
   case 128:
    FUNC_5(VAR_7, VAR_4);

   }
  }
 } else {
  if (FUNC_4(VAR_7)) {
   FUNC_3(VAR_10);

   FUNC_2(VAR_7->rc, &VAR_7->mv.companion_mas);




   FUNC_0(VAR_12->companion_mas.bm, VAR_7->mas.bm, VAR_9->bm, VAR_0);
   FUNC_5(VAR_7, VAR_2);
  } else {
   FUNC_5(VAR_7, VAR_3);

  }
 }
}
