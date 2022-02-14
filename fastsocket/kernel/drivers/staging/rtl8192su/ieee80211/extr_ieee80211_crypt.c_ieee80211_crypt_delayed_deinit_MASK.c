
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct ieee80211_device {int lock; TYPE_1__ crypt_deinit_timer; int crypt_deinit_list; } ;
struct ieee80211_crypt_data {int list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(struct ieee80211_device *VAR_2,
        struct ieee80211_crypt_data **VAR_3)
{
 struct ieee80211_crypt_data *VAR_4;
 unsigned long VAR_5;

 if (*VAR_3 == ((void*)0))
  return;

 VAR_4 = *VAR_3;
 *VAR_3 = ((void*)0);





 FUNC_2(&VAR_2->lock, VAR_5);
 FUNC_1(&VAR_4->list, &VAR_2->crypt_deinit_list);
 if (!FUNC_4(&VAR_2->crypt_deinit_timer)) {
  VAR_2->crypt_deinit_timer.expires = VAR_1 + VAR_0;
  FUNC_0(&VAR_2->crypt_deinit_timer);
 }
 FUNC_3(&VAR_2->lock, VAR_5);
}
