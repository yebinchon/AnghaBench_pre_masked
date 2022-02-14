
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_device {int softmac_features; int scanning; int dev; int (* start_scan ) (int ) ;int softmac_scan_wq; int wq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ieee80211_device *VAR_1)
{
 if(FUNC_1(VAR_1) )
 {
  if(FUNC_0(VAR_1))
  {
   FUNC_2(VAR_1);
  }
 }
 if (VAR_1->softmac_features & VAR_0){
  if (VAR_1->scanning == 0)
  {
   VAR_1->scanning = 1;




   FUNC_3(VAR_1->wq, &VAR_1->softmac_scan_wq,0);

  }
 }else
  VAR_1->start_scan(VAR_1->dev);

}
