
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_7__ {int txq_id; int state; } ;
struct il_tid_data {int seq_number; TYPE_3__ agg; } ;
struct il_priv {int lock; int sta_lock; TYPE_4__* stations; TYPE_2__* txq; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct TYPE_8__ {struct il_tid_data* tid; } ;
struct TYPE_5__ {int write_ptr; int read_ptr; } ;
struct TYPE_6__ {TYPE_1__ q; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int FUNC_1 (char*,size_t) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct il_priv*,int,int,int) ;
 int FUNC_6 (struct ieee80211_sta*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int) ;

int
FUNC_12(struct il_priv *VAR_5, struct ieee80211_vif *VAR_6,
     struct ieee80211_sta *VAR_7, u16 VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12;
 struct il_tid_data *VAR_13;
 int VAR_14, VAR_15;
 unsigned long VAR_16;


 VAR_9 = FUNC_4(VAR_8);
 if (FUNC_11(VAR_9 < 0))
  return VAR_9;

 VAR_11 = FUNC_6(VAR_7);

 if (VAR_11 == VAR_4) {
  FUNC_1("Invalid station for AGG tid %d\n", VAR_8);
  return -VAR_0;
 }

 FUNC_8(&VAR_5->sta_lock, VAR_16);

 VAR_13 = &VAR_5->stations[VAR_11].tid[VAR_8];
 VAR_12 = (VAR_13->seq_number & VAR_1) >> 4;
 VAR_10 = VAR_13->agg.txq_id;

 switch (VAR_5->stations[VAR_11].tid[VAR_8].agg.state) {
 case 128:






  FUNC_0("AGG stop before setup done\n");
  goto turn_off;
 case 129:
  break;
 default:
  FUNC_2("Stopping AGG while state not ON or starting\n");
 }

 VAR_14 = VAR_5->txq[VAR_10].q.write_ptr;
 VAR_15 = VAR_5->txq[VAR_10].q.read_ptr;


 if (VAR_14 != VAR_15) {
  FUNC_0("Stopping a non empty AGG HW QUEUE\n");
  VAR_5->stations[VAR_11].tid[VAR_8].agg.state =
      VAR_3;
  FUNC_10(&VAR_5->sta_lock, VAR_16);
  return 0;
 }

 FUNC_0("HW queue is empty\n");
turn_off:
 VAR_5->stations[VAR_11].tid[VAR_8].agg.state = VAR_2;


 FUNC_9(&VAR_5->sta_lock);
 FUNC_7(&VAR_5->lock);
 FUNC_5(VAR_5, VAR_10, VAR_12, VAR_9);
 FUNC_10(&VAR_5->lock, VAR_16);

 FUNC_3(VAR_6, VAR_7->addr, VAR_8);

 return 0;
}
