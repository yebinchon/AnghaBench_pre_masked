
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int (* l1l2 ) (TYPE_4__*,int,int *) ;} ;
struct TYPE_10__ {TYPE_4__ ifc; } ;
struct TYPE_12__ {scalar_t__ expires; } ;
struct TYPE_11__ {int l1_state; int l1_activated; TYPE_1__ d_if; TYPE_3__ t4_timer; TYPE_3__ t3_timer; } ;
typedef TYPE_2__ hfcusb_data ;
typedef int __u8 ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (TYPE_4__*,int,int *) ;
 int FUNC_5 (TYPE_4__*,int,int *) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_7(hfcusb_data * VAR_9, __u8 VAR_10)
{
 __u8 VAR_11;

 VAR_11 = VAR_9->l1_state;
 if (VAR_10 == VAR_11 || VAR_10 < 1 || VAR_10 > 8)
  return;

 FUNC_0(VAR_0, "HFC-S USB: S0 statechange(%d -> %d)",
     VAR_11, VAR_10);

 if (VAR_10 < 4 || VAR_10 == 7 || VAR_10 == 8) {
  if (FUNC_6(&VAR_9->t3_timer))
   FUNC_2(&VAR_9->t3_timer);
  FUNC_0(VAR_0, "HFC-S USB: T3 deactivated");
 }
 if (VAR_10 >= 7) {
  if (FUNC_6(&VAR_9->t4_timer))
   FUNC_2(&VAR_9->t4_timer);
  FUNC_0(VAR_0, "HFC-S USB: T4 deactivated");
 }

 if (VAR_10 == 7 && !VAR_9->l1_activated) {
  VAR_9->d_if.ifc.l1l2(&VAR_9->d_if.ifc,
       VAR_6 | VAR_3, ((void*)0));
  FUNC_0(VAR_0, "HFC-S USB: PH_ACTIVATE | INDICATION sent");
  VAR_9->l1_activated = 1;
  FUNC_3(VAR_9, VAR_5);
 } else if (VAR_10 <= 3 ) {
  if (VAR_11 == 7 || VAR_11 == 8) {
   FUNC_0(VAR_0, "HFC-S USB: T4 activated");
   if (!FUNC_6(&VAR_9->t4_timer)) {
    VAR_9->t4_timer.expires =
        VAR_8 + (VAR_1 * VAR_2) / 1000;
    FUNC_1(&VAR_9->t4_timer);
   }
  } else {
   VAR_9->d_if.ifc.l1l2(&VAR_9->d_if.ifc,
        VAR_7 | VAR_3,
        ((void*)0));
   FUNC_0(VAR_0,
       "HFC-S USB: PH_DEACTIVATE | INDICATION sent");
   VAR_9->l1_activated = 0;
   FUNC_3(VAR_9, VAR_4);
  }
 }
 VAR_9->l1_state = VAR_10;
}
