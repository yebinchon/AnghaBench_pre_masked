
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct rt2x00_dev {int dummy; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct rt2x00_dev*,int ,int *) ;

__attribute__((used)) static u64 FUNC_2(struct ieee80211_hw *VAR_4, struct ieee80211_vif *VAR_5)
{
 struct rt2x00_dev *VAR_6 = VAR_4->priv;
 u64 VAR_7;
 u32 VAR_8;

 FUNC_1(VAR_6, VAR_2, &VAR_8);
 VAR_7 = (u64) FUNC_0(VAR_8, VAR_3) << 32;
 FUNC_1(VAR_6, VAR_0, &VAR_8);
 VAR_7 |= FUNC_0(VAR_8, VAR_1);

 return VAR_7;
}
