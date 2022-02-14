
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bcast_id; } ;
struct il_priv {TYPE_1__ hw_params; } ;
struct ieee80211_sta {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_sta*) ;

__attribute__((used)) static inline int
FUNC_2(struct il_priv *VAR_1, struct ieee80211_sta *VAR_2)
{
 int VAR_3;

 if (!VAR_2)
  return VAR_1->hw_params.bcast_id;

 VAR_3 = FUNC_1(VAR_2);





 FUNC_0(VAR_3 == VAR_0);

 return VAR_3;
}
