
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rt2x00_dev {int dummy; } ;
struct mac_iveiv_entry {int * iv; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
typedef int iveiv_entry ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct rt2x00_dev*,int ,struct mac_iveiv_entry*,int) ;

void FUNC_3(struct ieee80211_hw *VAR_0, u8 VAR_1, u32 *VAR_2,
    u16 *VAR_3)
{
 struct rt2x00_dev *VAR_4 = VAR_0->priv;
 struct mac_iveiv_entry VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_1);
 FUNC_2(VAR_4, VAR_6,
          &VAR_5, sizeof(VAR_5));

 FUNC_1(VAR_3, &VAR_5.iv[0], sizeof(*VAR_3));
 FUNC_1(VAR_2, &VAR_5.iv[4], sizeof(*VAR_2));
}
