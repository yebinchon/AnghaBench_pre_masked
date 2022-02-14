
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
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__*,struct rt2x00_field32,int ) ;
 int FUNC_1 (struct ieee80211_hw*,struct ieee80211_vif*,int,struct ieee80211_tx_queue_params const*) ;
 int FUNC_2 (struct rt2x00_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct rt2x00_dev*,scalar_t__,scalar_t__) ;
 struct data_queue* FUNC_4 (struct rt2x00_dev*,int) ;

__attribute__((used)) static int FUNC_5(struct ieee80211_hw *VAR_4,
      struct ieee80211_vif *VAR_5, u16 VAR_6,
      const struct ieee80211_tx_queue_params *VAR_7)
{
 struct rt2x00_dev *VAR_8 = VAR_4->priv;
 struct data_queue *VAR_9;
 struct rt2x00_field32 VAR_10;
 int VAR_11;
 u32 VAR_12;
 u32 VAR_13;







 VAR_11 = FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_11)
  return VAR_11;





 if (VAR_6 >= 4)
  return 0;

 VAR_9 = FUNC_4(VAR_8, VAR_6);


 VAR_13 = VAR_0 + (sizeof(u32) * (!!(VAR_6 & 2)));
 VAR_10.bit_offset = (VAR_6 & 1) * 16;
 VAR_10.bit_mask = 0xffff << VAR_10.bit_offset;

 FUNC_2(VAR_8, VAR_13, &VAR_12);
 FUNC_0(&VAR_12, VAR_10, VAR_9->txop);
 FUNC_3(VAR_8, VAR_13, VAR_12);


 VAR_10.bit_offset = VAR_6 * 4;
 VAR_10.bit_mask = 0xf << VAR_10.bit_offset;

 FUNC_2(VAR_8, VAR_1, &VAR_12);
 FUNC_0(&VAR_12, VAR_10, VAR_9->aifs);
 FUNC_3(VAR_8, VAR_1, VAR_12);

 FUNC_2(VAR_8, VAR_3, &VAR_12);
 FUNC_0(&VAR_12, VAR_10, VAR_9->cw_min);
 FUNC_3(VAR_8, VAR_3, VAR_12);

 FUNC_2(VAR_8, VAR_2, &VAR_12);
 FUNC_0(&VAR_12, VAR_10, VAR_9->cw_max);
 FUNC_3(VAR_8, VAR_2, VAR_12);

 return 0;
}
