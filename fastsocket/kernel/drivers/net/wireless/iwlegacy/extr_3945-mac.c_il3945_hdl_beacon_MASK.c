
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int failure_frame; int status; int rate; } ;
struct il3945_beacon_notif {int ibss_mgr_status; int low_tsf; int high_tsf; TYPE_2__ beacon_notify_hdr; } ;
struct TYPE_3__ {struct il3945_beacon_notif beacon_status; } ;
struct il_rx_pkt {TYPE_1__ u; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {int ibss_manager; } ;


 int FUNC_0 (char*,int,int ,int,int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 struct il_rx_pkt* FUNC_2 (struct il_rx_buf*) ;

__attribute__((used)) static void
FUNC_3(struct il_priv *VAR_1, struct il_rx_buf *VAR_2)
{
 struct il_rx_pkt *VAR_3 = FUNC_2(VAR_2);
 struct il3945_beacon_notif *VAR_4 = &(VAR_3->u.beacon_status);
 VAR_1->ibss_manager = FUNC_1(VAR_4->ibss_mgr_status);

}
