
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rt2x00lib_crypto {scalar_t__ cmd; int cipher; } ;
struct rt2x00_dev {int dummy; } ;
struct mac_iveiv_entry {int* iv; } ;
struct ieee80211_key_conf {int flags; int keyidx; int hw_key_idx; } ;
typedef int iveiv_entry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct mac_iveiv_entry*,int ,int) ;
 int FUNC_3 (struct rt2x00_dev*,int ,struct mac_iveiv_entry*,int) ;
 int FUNC_4 (struct rt2x00_dev*,int ,int *) ;
 int FUNC_5 (struct rt2x00_dev*,int ,int ) ;
 int FUNC_6 (int *,int ,int) ;

__attribute__((used)) static void FUNC_7(struct rt2x00_dev *VAR_9,
        struct rt2x00lib_crypto *VAR_10,
        struct ieee80211_key_conf *VAR_11)
{
 struct mac_iveiv_entry VAR_12;
 u32 VAR_13;
 u32 VAR_14;

 VAR_13 = FUNC_1(VAR_11->hw_key_idx);

 if (VAR_10->cmd == VAR_8) {
  FUNC_4(VAR_9, VAR_13, &VAR_14);
  FUNC_6(&VAR_14, VAR_6,
       !!(VAR_11->flags & VAR_3));





  FUNC_6(&VAR_14, VAR_4,
       (VAR_10->cipher & 0x7));
  FUNC_6(&VAR_14, VAR_5,
       (VAR_10->cipher & 0x8) >> 3);
  FUNC_6(&VAR_14, VAR_7, VAR_10->cipher);
  FUNC_5(VAR_9, VAR_13, VAR_14);
 } else {

  FUNC_4(VAR_9, VAR_13, &VAR_14);
  FUNC_6(&VAR_14, VAR_6, 0);
  FUNC_6(&VAR_14, VAR_4, 0);
  FUNC_6(&VAR_14, VAR_5, 0);
  FUNC_6(&VAR_14, VAR_7, 0);
  FUNC_5(VAR_9, VAR_13, VAR_14);
 }

 VAR_13 = FUNC_0(VAR_11->hw_key_idx);

 FUNC_2(&VAR_12, 0, sizeof(VAR_12));
 if ((VAR_10->cipher == VAR_1) ||
     (VAR_10->cipher == VAR_2) ||
     (VAR_10->cipher == VAR_0))
  VAR_12.iv[3] |= 0x20;
 VAR_12.iv[3] |= VAR_11->keyidx << 6;
 FUNC_3(VAR_9, VAR_13,
          &VAR_12, sizeof(VAR_12));
}
