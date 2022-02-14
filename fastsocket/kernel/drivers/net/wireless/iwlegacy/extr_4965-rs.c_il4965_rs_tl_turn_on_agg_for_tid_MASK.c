
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct il_priv {int dummy; } ;
struct il_lq_sta {int dummy; } ;
struct ieee80211_sta {scalar_t__ addr; } ;


 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct ieee80211_sta*,scalar_t__,int) ;
 int FUNC_3 (struct ieee80211_sta*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct il_lq_sta*,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(struct il_priv *VAR_2, struct il_lq_sta *VAR_3,
     u8 VAR_4, struct ieee80211_sta *VAR_5)
{
 int VAR_6 = -VAR_0;
 u32 VAR_7;

 VAR_7 = FUNC_4(VAR_3, VAR_4);

 if (VAR_7 > VAR_1) {
  FUNC_0("Starting Tx agg: STA: %pM tid: %d\n", VAR_5->addr, VAR_4);
  VAR_6 = FUNC_2(VAR_5, VAR_4, 5000);
  if (VAR_6 == -VAR_0) {





   FUNC_1("Fail start Tx agg on tid: %d\n", VAR_4);
   FUNC_3(VAR_5, VAR_4);
  }
 } else
  FUNC_0("Aggregation not enabled for tid %d because load = %u\n",
       VAR_4, VAR_7);

 return VAR_6;
}
