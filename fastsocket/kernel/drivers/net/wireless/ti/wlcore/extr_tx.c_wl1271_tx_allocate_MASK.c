
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct wl12xx_vif {int dummy; } ;
struct wl1271_tx_hw_descr {int id; } ;
struct wl1271 {scalar_t__ aggr_buf_size; scalar_t__ tx_blocks_available; scalar_t__ tx_allocated_blocks; TYPE_1__* links; int links_map; int * tx_allocated_pkts; } ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int allocated_pkts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_2 (size_t,int ) ;
 int FUNC_3 (struct wl1271*,struct sk_buff*) ;
 int FUNC_4 (int ,char*,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct wl1271*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct wl1271*) ;
 scalar_t__ FUNC_8 (struct wl1271*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (struct wl1271*,int) ;
 int FUNC_10 (struct wl1271*,struct wl1271_tx_hw_descr*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct wl1271 *VAR_3, struct wl12xx_vif *VAR_4,
         struct sk_buff *VAR_5, u32 VAR_6, u32 VAR_7,
         u8 VAR_8, bool VAR_9)
{
 struct wl1271_tx_hw_descr *VAR_10;
 u32 VAR_11 = VAR_5->len + sizeof(struct wl1271_tx_hw_descr) + VAR_6;
 u32 VAR_12;
 int VAR_13, VAR_14 = -VAR_2, VAR_15;
 u32 VAR_16;

 if (VAR_7 + VAR_11 > VAR_3->aggr_buf_size)
  return -VAR_1;

 VAR_16 = FUNC_9(VAR_3, VAR_9);


 VAR_13 = FUNC_3(VAR_3, VAR_5);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12 = FUNC_8(VAR_3, VAR_11, VAR_16);

 if (VAR_12 <= VAR_3->tx_blocks_available) {
  VAR_10 = (struct wl1271_tx_hw_descr *)FUNC_1(
   VAR_5, VAR_11 - VAR_5->len);

  FUNC_10(VAR_3, VAR_10, VAR_12,
          VAR_16);

  VAR_10->id = VAR_13;

  VAR_3->tx_blocks_available -= VAR_12;
  VAR_3->tx_allocated_blocks += VAR_12;


  if (VAR_3->tx_allocated_blocks == VAR_12)
   FUNC_7(VAR_3);

  VAR_15 = FUNC_6(FUNC_0(VAR_5));
  VAR_3->tx_allocated_pkts[VAR_15]++;

  if (FUNC_2(VAR_8, VAR_3->links_map))
   VAR_3->links[VAR_8].allocated_pkts++;

  VAR_14 = 0;

  FUNC_4(VAR_0,
        "tx_allocate: size: %d, blocks: %d, id: %d",
        VAR_11, VAR_12, VAR_13);
 } else {
  FUNC_5(VAR_3, VAR_13);
 }

 return VAR_14;
}
