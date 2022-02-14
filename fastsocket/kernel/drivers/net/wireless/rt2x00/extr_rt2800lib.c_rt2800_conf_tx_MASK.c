
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct rt2x00_field32 {int bit_offset; int bit_mask; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_tx_queue_params {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct data_queue {int cw_max; int cw_min; int aifs; int txop; } ;


 scalar_t__ VAR_0 ;
 struct rt2x00_field32 VAR_1 ;
 struct rt2x00_field32 VAR_2 ;
 struct rt2x00_field32 VAR_3 ;
 struct rt2x00_field32 VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct rt2x00_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct rt2x00_dev*,scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__*,struct rt2x00_field32,int ) ;
 int FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*,int,struct ieee80211_tx_queue_params const*) ;
 struct data_queue* FUNC_4 (struct rt2x00_dev*,int) ;

int FUNC_5(struct ieee80211_hw *VAR_9,
     struct ieee80211_vif *VAR_10, u16 VAR_11,
     const struct ieee80211_tx_queue_params *VAR_12)
{
 struct rt2x00_dev *VAR_13 = VAR_9->priv;
 struct data_queue *VAR_14;
 struct rt2x00_field32 VAR_15;
 int VAR_16;
 u32 VAR_17;
 u32 VAR_18;







 VAR_16 = FUNC_3(VAR_9, VAR_10, VAR_11, VAR_12);
 if (VAR_16)
  return VAR_16;





 if (VAR_11 >= 4)
  return 0;

 VAR_14 = FUNC_4(VAR_13, VAR_11);


 VAR_18 = VAR_8 + (sizeof(u32) * (!!(VAR_11 & 2)));
 VAR_15.bit_offset = (VAR_11 & 1) * 16;
 VAR_15.bit_mask = 0xffff << VAR_15.bit_offset;

 FUNC_0(VAR_13, VAR_18, &VAR_17);
 FUNC_2(&VAR_17, VAR_15, VAR_14->txop);
 FUNC_1(VAR_13, VAR_18, VAR_17);


 VAR_15.bit_offset = VAR_11 * 4;
 VAR_15.bit_mask = 0xf << VAR_15.bit_offset;

 FUNC_0(VAR_13, VAR_5, &VAR_17);
 FUNC_2(&VAR_17, VAR_15, VAR_14->aifs);
 FUNC_1(VAR_13, VAR_5, VAR_17);

 FUNC_0(VAR_13, VAR_7, &VAR_17);
 FUNC_2(&VAR_17, VAR_15, VAR_14->cw_min);
 FUNC_1(VAR_13, VAR_7, VAR_17);

 FUNC_0(VAR_13, VAR_6, &VAR_17);
 FUNC_2(&VAR_17, VAR_15, VAR_14->cw_max);
 FUNC_1(VAR_13, VAR_6, VAR_17);


 VAR_18 = VAR_0 + (sizeof(u32) * VAR_11);

 FUNC_0(VAR_13, VAR_18, &VAR_17);
 FUNC_2(&VAR_17, VAR_4, VAR_14->txop);
 FUNC_2(&VAR_17, VAR_1, VAR_14->aifs);
 FUNC_2(&VAR_17, VAR_3, VAR_14->cw_min);
 FUNC_2(&VAR_17, VAR_2, VAR_14->cw_max);
 FUNC_1(VAR_13, VAR_18, VAR_17);

 return 0;
}
