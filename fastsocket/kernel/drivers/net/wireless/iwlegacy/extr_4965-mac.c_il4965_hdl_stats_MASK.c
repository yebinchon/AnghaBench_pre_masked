
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ cmd; } ;
struct TYPE_12__ {scalar_t__ temperature; } ;
struct TYPE_13__ {TYPE_3__ common; } ;
struct TYPE_18__ {int flag; TYPE_4__ general; } ;
struct TYPE_15__ {TYPE_9__ stats; } ;
struct il_rx_pkt {TYPE_7__ hdr; TYPE_6__ u; int len_n_flags; } ;
struct il_rx_buf {int dummy; } ;
struct TYPE_10__ {scalar_t__ temperature; } ;
struct TYPE_11__ {TYPE_1__ common; } ;
struct TYPE_17__ {int flag; TYPE_2__ general; } ;
struct TYPE_14__ {TYPE_8__ stats; } ;
struct il_priv {int run_time_calib_work; int workqueue; int status; int stats_periodic; TYPE_5__ _4965; } ;
struct il_notif_stats {int dummy; } ;
typedef int __le32 ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct il_priv*,int *) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_8__*,TYPE_9__*,int) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int const) ;
 int FUNC_8 (int ,int *) ;
 struct il_rx_pkt* FUNC_9 (struct il_rx_buf*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(struct il_priv *VAR_6, struct il_rx_buf *VAR_7)
{
 const int VAR_8 = 60;
 bool VAR_9;
 struct il_rx_pkt *VAR_10 = FUNC_9(VAR_7);

 FUNC_0("Statistics notification received (%d vs %d).\n",
      (int)sizeof(struct il_notif_stats),
      FUNC_4(VAR_10->len_n_flags) & VAR_0);

 VAR_9 =
     ((VAR_6->_4965.stats.general.common.temperature !=
       VAR_10->u.stats.general.common.temperature) ||
      ((VAR_6->_4965.stats.flag & VAR_2) !=
       (VAR_10->u.stats.flag & VAR_2)));





 FUNC_5(&VAR_6->_4965.stats, &VAR_10->u.stats, sizeof(VAR_6->_4965.stats));

 FUNC_10(VAR_4, &VAR_6->status);





 FUNC_6(&VAR_6->stats_periodic,
    VAR_5 + FUNC_7(VAR_8 * 1000));

 if (FUNC_12(!FUNC_11(VAR_3, &VAR_6->status)) &&
     (VAR_10->hdr.cmd == VAR_1)) {
  FUNC_2(VAR_6);
  FUNC_8(VAR_6->workqueue, &VAR_6->run_time_calib_work);
 }

 if (VAR_9)
  FUNC_3(VAR_6);
}
