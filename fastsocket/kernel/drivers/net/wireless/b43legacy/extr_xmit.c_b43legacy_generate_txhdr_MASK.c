
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_tx_info {int dummy; } ;
struct b43legacy_wldev {int dummy; } ;
struct b43legacy_txhdr_fw3 {int dummy; } ;


 int FUNC_0 (struct b43legacy_wldev*,struct b43legacy_txhdr_fw3*,unsigned char const*,unsigned int,struct ieee80211_tx_info*,int ) ;

int FUNC_1(struct b43legacy_wldev *VAR_0,
         u8 *VAR_1,
         const unsigned char *VAR_2,
         unsigned int VAR_3,
         struct ieee80211_tx_info *VAR_4,
         u16 VAR_5)
{
 return FUNC_0(VAR_0, (struct b43legacy_txhdr_fw3 *)VAR_1,
      VAR_2, VAR_3,
      VAR_4, VAR_5);
}
