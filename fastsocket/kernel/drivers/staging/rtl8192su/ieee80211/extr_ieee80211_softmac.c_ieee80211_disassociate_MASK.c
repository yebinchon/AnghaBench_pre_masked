
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int softmac_features; int is_set_key; int link_change_wq; int wq; int state; int dev; int (* data_hard_stop ) (int ) ;} ;


 int FUNC_0 (struct ieee80211_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ) ;

void FUNC_7(struct ieee80211_device *VAR_2)
{


 FUNC_3(VAR_2->dev);
 if (VAR_2->softmac_features & VAR_1)
   FUNC_2(VAR_2);

 if (VAR_2->data_hard_stop)
   VAR_2->data_hard_stop(VAR_2->dev);
 if(FUNC_1(VAR_2))
  FUNC_0(VAR_2);
 VAR_2->state = VAR_0;
 VAR_2->is_set_key = 0;



 FUNC_5(VAR_2->wq, &VAR_2->link_change_wq, 0);


 FUNC_4(VAR_2);

}
