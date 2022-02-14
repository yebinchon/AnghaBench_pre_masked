
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_priv {int status; int up; int rf_kill; int down; int scan_event; int request_passive_scan; int request_direct_scan; int request_scan; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct ipw_priv*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct ipw_priv *VAR_2, int VAR_3)
{
 if ((VAR_3 ? 1 : 0) ==
     ((VAR_2->status & VAR_1) ? 1 : 0))
  return 0;

 FUNC_0("Manual SW RF Kill set to: RADIO  %s\n",
     VAR_3 ? "OFF" : "ON");

 if (VAR_3) {
  VAR_2->status |= VAR_1;

  FUNC_1(&VAR_2->request_scan);
  FUNC_1(&VAR_2->request_direct_scan);
  FUNC_1(&VAR_2->request_passive_scan);
  FUNC_1(&VAR_2->scan_event);
  FUNC_5(&VAR_2->down);
 } else {
  VAR_2->status &= ~VAR_1;
  if (FUNC_2(VAR_2)) {
   FUNC_0("Can not turn radio back on - "
       "disabled by HW switch\n");

   FUNC_1(&VAR_2->rf_kill);
   FUNC_4(&VAR_2->rf_kill,
           FUNC_3(2 * VAR_0));
  } else
   FUNC_5(&VAR_2->up);
 }

 return 1;
}
