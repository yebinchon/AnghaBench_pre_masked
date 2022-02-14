
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct net_device {int features; } ;
struct TYPE_7__ {scalar_t__ fill_cnt; scalar_t__ cnt; } ;
struct TYPE_6__ {unsigned long rx_packets; unsigned long rx_bytes; } ;
struct myri10ge_rx_done {int idx; int cnt; int lro_mgr; TYPE_1__* entry; } ;
struct myri10ge_slice_state {TYPE_3__ rx_big; TYPE_3__ rx_small; TYPE_2__ stats; struct myri10ge_priv* mgp; struct myri10ge_rx_done rx_done; } ;
struct myri10ge_priv {scalar_t__ small_bytes; scalar_t__ big_bytes; int max_intr_slots; struct net_device* dev; } ;
typedef int __wsum ;
struct TYPE_5__ {scalar_t__ length; int checksum; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct myri10ge_priv*,TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 unsigned long FUNC_3 (struct myri10ge_slice_state*,TYPE_3__*,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static inline int
FUNC_5(struct myri10ge_slice_state *VAR_3, int VAR_4)
{
 struct myri10ge_rx_done *VAR_5 = &VAR_3->rx_done;
 struct myri10ge_priv *VAR_6 = VAR_3->mgp;
 struct net_device *VAR_7 = VAR_6->dev;
 unsigned long VAR_8 = 0;
 unsigned long VAR_9 = 0;
 unsigned long VAR_10;

 int VAR_11 = VAR_5->idx;
 int VAR_12 = VAR_5->cnt;
 int VAR_13 = 0;
 u16 VAR_14;
 __wsum VAR_15;

 while (VAR_5->entry[VAR_11].length != 0 && VAR_13 < VAR_4) {
  VAR_14 = FUNC_4(VAR_5->entry[VAR_11].length);
  VAR_5->entry[VAR_11].length = 0;
  VAR_15 = FUNC_0(VAR_5->entry[VAR_11].checksum);
  if (VAR_14 <= VAR_6->small_bytes)
   VAR_10 = FUNC_3(VAR_3, &VAR_3->rx_small,
       VAR_6->small_bytes,
       VAR_14, VAR_15);
  else
   VAR_10 = FUNC_3(VAR_3, &VAR_3->rx_big,
       VAR_6->big_bytes,
       VAR_14, VAR_15);
  VAR_9 += VAR_10;
  VAR_8 += VAR_10 * (unsigned long)VAR_14;
  VAR_12++;
  VAR_11 = VAR_12 & (VAR_6->max_intr_slots - 1);
  VAR_13++;
 }
 VAR_5->idx = VAR_11;
 VAR_5->cnt = VAR_12;
 VAR_3->stats.rx_packets += VAR_9;
 VAR_3->stats.rx_bytes += VAR_8;

 if (VAR_7->features & VAR_1)
  FUNC_1(&VAR_5->lro_mgr);


 if (VAR_3->rx_small.fill_cnt - VAR_3->rx_small.cnt < VAR_2)
  FUNC_2(VAR_6, &VAR_3->rx_small,
     VAR_6->small_bytes + VAR_0, 0);
 if (VAR_3->rx_big.fill_cnt - VAR_3->rx_big.cnt < VAR_2)
  FUNC_2(VAR_6, &VAR_3->rx_big, VAR_6->big_bytes, 0);

 return VAR_13;
}
