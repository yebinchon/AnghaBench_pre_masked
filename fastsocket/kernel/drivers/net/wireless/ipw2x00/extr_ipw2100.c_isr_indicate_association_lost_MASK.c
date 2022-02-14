
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ipw2100_priv {int status; int wx_event_work; int security_work; int net_dev; TYPE_1__* ieee; int bssid; int essid_len; int essid; } ;
struct TYPE_2__ {int bssid; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int ,int ) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_8(struct ipw2100_priv *VAR_10, u32 VAR_11)
{
 FUNC_0(VAR_9);

 FUNC_1(VAR_2 | VAR_3 | VAR_1,
    "disassociated: '%s' %pM\n",
    FUNC_6(VAR_9, VAR_10->essid, VAR_10->essid_len),
    VAR_10->bssid);

 VAR_10->status &= ~(VAR_4 | VAR_5);

 if (VAR_10->status & VAR_8) {
  FUNC_2("Card is stopping itself, discard ASSN_LOST.\n");
  return;
 }

 FUNC_3(VAR_10->bssid, 0, VAR_0);
 FUNC_3(VAR_10->ieee->bssid, 0, VAR_0);

 FUNC_4(VAR_10->net_dev);
 FUNC_5(VAR_10->net_dev);

 if (!(VAR_10->status & VAR_6))
  return;

 if (VAR_10->status & VAR_7)
  FUNC_7(&VAR_10->security_work, 0);

 FUNC_7(&VAR_10->wx_event_work, 0);
}
