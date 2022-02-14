
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct il_priv {scalar_t__ iw_mode; } ;
struct ieee80211_hdr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (struct ieee80211_hdr*) ;
 int FUNC_1 (struct il_priv*,int *) ;

__attribute__((used)) static int
FUNC_2(struct il_priv *VAR_2, struct ieee80211_hdr *VAR_3)
{
 if (VAR_2->iw_mode == VAR_1)
  return VAR_0;
 else {
  u8 *VAR_4 = FUNC_0(VAR_3);

  return FUNC_1(VAR_2, VAR_4);
 }
}
