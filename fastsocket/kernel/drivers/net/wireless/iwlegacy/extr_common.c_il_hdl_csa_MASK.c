
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct il_rxon_cmd {scalar_t__ channel; } ;
struct il_csa_notification {scalar_t__ channel; int status; } ;
struct TYPE_3__ {struct il_csa_notification csa_notif; } ;
struct il_rx_pkt {TYPE_1__ u; } ;
struct il_rx_buf {int dummy; } ;
struct TYPE_4__ {scalar_t__ channel; } ;
struct il_priv {scalar_t__ switch_channel; TYPE_2__ staging; int status; int active; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct il_priv*,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 struct il_rx_pkt* FUNC_5 (struct il_rx_buf*) ;
 int FUNC_6 (int ,int *) ;

void
FUNC_7(struct il_priv *VAR_1, struct il_rx_buf *VAR_2)
{
 struct il_rx_pkt *VAR_3 = FUNC_5(VAR_2);
 struct il_csa_notification *VAR_4 = &(VAR_3->u.csa_notif);
 struct il_rxon_cmd *VAR_5 = (void *)&VAR_1->active;

 if (!FUNC_6(VAR_0, &VAR_1->status))
  return;

 if (!FUNC_4(VAR_4->status) && VAR_4->channel == VAR_1->switch_channel) {
  VAR_5->channel = VAR_4->channel;
  VAR_1->staging.channel = VAR_4->channel;
  FUNC_0("CSA notif: channel %d\n", FUNC_3(VAR_4->channel));
  FUNC_2(VAR_1, 1);
 } else {
  FUNC_1("CSA notif (fail) : channel %d\n",
         FUNC_3(VAR_4->channel));
  FUNC_2(VAR_1, 0);
 }
}
