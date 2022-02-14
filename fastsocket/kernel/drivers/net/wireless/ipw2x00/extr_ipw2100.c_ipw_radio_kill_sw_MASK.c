
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int status; int action_mutex; int rf_kill; scalar_t__ stop_rf_kill; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ipw2100_priv*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct ipw2100_priv*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct ipw2100_priv*) ;

__attribute__((used)) static int FUNC_9(struct ipw2100_priv *VAR_2, int VAR_3)
{
 if ((VAR_3 ? 1 : 0) ==
     (VAR_2->status & VAR_1 ? 1 : 0))
  return 0;

 FUNC_0("Manual SW RF Kill set to: RADIO  %s\n",
     VAR_3 ? "OFF" : "ON");

 FUNC_3(&VAR_2->action_mutex);

 if (VAR_3) {
  VAR_2->status |= VAR_1;
  FUNC_2(VAR_2);
 } else {
  VAR_2->status &= ~VAR_1;
  if (FUNC_5(VAR_2)) {
   FUNC_0("Can not turn radio back on - "
       "disabled by HW switch\n");

   VAR_2->stop_rf_kill = 0;
   FUNC_1(&VAR_2->rf_kill);
   FUNC_7(&VAR_2->rf_kill,
           FUNC_6(VAR_0));
  } else
   FUNC_8(VAR_2);
 }

 FUNC_4(&VAR_2->action_mutex);
 return 1;
}
