
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {scalar_t__ raw; } ;
struct il_rx_pkt {TYPE_2__ u; } ;
struct il_rx_buf {int dummy; } ;
struct il_priv {int ibss_manager; } ;
struct TYPE_4__ {int status; } ;
struct TYPE_6__ {int failure_frame; TYPE_1__ u; int rate_n_flags; } ;
struct il4965_beacon_notif {int ibss_mgr_status; int low_tsf; int high_tsf; TYPE_3__ beacon_notify_hdr; } ;


 int FUNC_0 (char*,int,int ,int,int,int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct il_rx_pkt* FUNC_3 (struct il_rx_buf*) ;

__attribute__((used)) static void
FUNC_4(struct il_priv *VAR_1, struct il_rx_buf *VAR_2)
{
 struct il_rx_pkt *VAR_3 = FUNC_3(VAR_2);
 struct il4965_beacon_notif *VAR_4 =
     (struct il4965_beacon_notif *)VAR_3->u.raw;
 VAR_1->ibss_manager = FUNC_2(VAR_4->ibss_mgr_status);
}
