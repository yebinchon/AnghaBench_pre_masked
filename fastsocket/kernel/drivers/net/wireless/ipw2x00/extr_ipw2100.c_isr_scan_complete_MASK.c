
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipw2100_priv {int scan_event_now; int scan_event_later; scalar_t__ user_requested_scan; int status; TYPE_1__* ieee; } ;
struct TYPE_2__ {int scans; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ipw2100_priv *VAR_1, u32 VAR_2)
{
 FUNC_0("scan complete\n");

 VAR_1->ieee->scans++;
 VAR_1->status &= ~VAR_0;


 if (!VAR_1->user_requested_scan) {
  if (!FUNC_2(&VAR_1->scan_event_later))
   FUNC_5(&VAR_1->scan_event_later,
           FUNC_4(FUNC_3(4000)));
 } else {
  VAR_1->user_requested_scan = 0;
  FUNC_1(&VAR_1->scan_event_later);
  FUNC_6(&VAR_1->scan_event_now);
 }
}
