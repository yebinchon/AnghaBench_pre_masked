
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flag; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;
struct il_rx_pkt {TYPE_2__ u; } ;
struct il_rx_buf {int dummy; } ;
struct TYPE_6__ {int max_delta; int delta_stats; int accum_stats; } ;
struct il_priv {TYPE_3__ _4965; } ;
struct il_notif_stats {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (struct il_priv*,struct il_rx_buf*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int) ;
 struct il_rx_pkt* FUNC_4 (struct il_rx_buf*) ;

__attribute__((used)) static void
FUNC_5(struct il_priv *VAR_1, struct il_rx_buf *VAR_2)
{
 struct il_rx_pkt *VAR_3 = FUNC_4(VAR_2);

 if (FUNC_2(VAR_3->u.stats.flag) & VAR_0) {







  FUNC_0("Statistics have been cleared\n");
 }
 FUNC_1(VAR_1, VAR_2);
}
