
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw2100_priv {int stop_rf_kill; int stop_hang_check; int scan_event_later; int scan_event_now; int rf_kill; int hang_check; int wx_event_work; int security_work; int reset_work; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ipw2100_priv *VAR_0)
{
 VAR_0->stop_rf_kill = 1;
 VAR_0->stop_hang_check = 1;
 FUNC_0(&VAR_0->reset_work);
 FUNC_0(&VAR_0->security_work);
 FUNC_0(&VAR_0->wx_event_work);
 FUNC_0(&VAR_0->hang_check);
 FUNC_0(&VAR_0->rf_kill);
 FUNC_1(&VAR_0->scan_event_now);
 FUNC_0(&VAR_0->scan_event_later);
}
