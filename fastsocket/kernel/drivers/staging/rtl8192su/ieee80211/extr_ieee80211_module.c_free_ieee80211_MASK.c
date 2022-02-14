
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ieee80211_device {struct ieee80211_crypt_data** crypt; int crypt_deinit_timer; struct ieee80211_crypt_data* pHTInfo; } ;
struct ieee80211_crypt_data {int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* deinit ) (int ) ;} ;


 int FUNC_0 (struct ieee80211_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct ieee80211_device*,int) ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (struct ieee80211_device*) ;
 int FUNC_6 (struct ieee80211_crypt_data*) ;
 struct ieee80211_device* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int ) ;

void FUNC_9(struct net_device *VAR_1)
{
 struct ieee80211_device *VAR_2 = FUNC_7(VAR_1);
 int VAR_3;



 if (VAR_2->pHTInfo != ((void*)0))
 {
  FUNC_6(VAR_2->pHTInfo);
  VAR_2->pHTInfo = ((void*)0);
 }

 FUNC_0(VAR_2);
 FUNC_5(VAR_2);
 FUNC_1(&VAR_2->crypt_deinit_timer);
 FUNC_3(VAR_2, 1);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct ieee80211_crypt_data *VAR_4 = VAR_2->crypt[VAR_3];
  if (VAR_4) {
   if (VAR_4->ops)
    VAR_4->ops->deinit(VAR_4->priv);
   FUNC_6(VAR_4);
   VAR_2->crypt[VAR_3] = ((void*)0);
  }
 }

 FUNC_4(VAR_2);
 FUNC_2(VAR_1);
}
