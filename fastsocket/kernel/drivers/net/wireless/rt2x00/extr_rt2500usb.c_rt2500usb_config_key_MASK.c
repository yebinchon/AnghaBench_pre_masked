
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct rt2x00lib_crypto {scalar_t__ cmd; int cipher; int key; } ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_key_conf {scalar_t__ cipher; scalar_t__ keyidx; int hw_key_idx; int flags; } ;
typedef enum cipher { ____Placeholder_cipher } cipher ;
struct TYPE_6__ {int bit_mask; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 TYPE_1__ VAR_9 ;
 TYPE_1__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rt2x00_dev*,int ,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,int*) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int) ;
 int FUNC_5 (int,TYPE_1__) ;
 int FUNC_6 (int*,TYPE_1__,int) ;

__attribute__((used)) static int FUNC_7(struct rt2x00_dev *VAR_13,
    struct rt2x00lib_crypto *VAR_14,
    struct ieee80211_key_conf *VAR_15)
{
 u32 VAR_16;
 u16 VAR_17;
 enum cipher VAR_18;

 if (VAR_14->cmd == VAR_6) {





  if ((VAR_15->cipher == VAR_12 ||
       VAR_15->cipher == VAR_11) &&
      VAR_15->keyidx != 0)
   return -VAR_2;






  VAR_16 = VAR_10.bit_mask;

  FUNC_3(VAR_13, VAR_7, &VAR_17);
  VAR_18 = FUNC_5(VAR_17, VAR_8);
  VAR_17 &= VAR_16;

  if (VAR_17 && VAR_17 == VAR_16)
   return -VAR_1;

  VAR_17 = FUNC_5(VAR_17, VAR_10);

  VAR_15->hw_key_idx += VAR_17 ? FUNC_1(VAR_17) : 0;






  if (VAR_15->hw_key_idx > 0 && VAR_14->cipher != VAR_18)
   return -VAR_2;

  FUNC_2(VAR_13, FUNC_0(VAR_15->hw_key_idx),
           VAR_14->key, sizeof(VAR_14->key));
  VAR_15->flags |= VAR_4;
  VAR_15->flags |= VAR_5;
 }





 FUNC_3(VAR_13, VAR_7, &VAR_17);
 FUNC_6(&VAR_17, VAR_8, VAR_14->cipher);
 FUNC_6(&VAR_17, VAR_9, VAR_3);

 VAR_16 = FUNC_5(VAR_17, VAR_10);
 if (VAR_14->cmd == VAR_6)
  VAR_16 |= 1 << VAR_15->hw_key_idx;
 else if (VAR_14->cmd == VAR_0)
  VAR_16 &= ~(1 << VAR_15->hw_key_idx);
 FUNC_6(&VAR_17, VAR_10, VAR_16);
 FUNC_4(VAR_13, VAR_7, VAR_17);

 return 0;
}
