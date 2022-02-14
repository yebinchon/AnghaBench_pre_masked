
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_device {int be_scan_inprogress; scalar_t__ state; int actscanning; int scan_sem; scalar_t__ sync_scan_hurryup; int dev; int (* set_chan ) (int ,short) ;} ;
struct TYPE_2__ {int channel_map; } ;


 int FUNC_0 (struct ieee80211_device*) ;
 TYPE_1__* FUNC_1 (struct ieee80211_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ieee80211_device*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,short) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct ieee80211_device *VAR_3)
{
 short VAR_4 = 0;
 u8 VAR_5[VAR_2+1];
 FUNC_5(VAR_5, FUNC_1(VAR_3)->channel_map, VAR_2+1);
 VAR_3->be_scan_inprogress = 1;
 FUNC_3(&VAR_3->scan_sem);

 while(1)
 {

  do{
   VAR_4++;
   if (VAR_4 > VAR_2)
    goto out;
  }while(!VAR_5[VAR_4]);
  if (VAR_3->state == VAR_0)
   goto out;
  VAR_3->set_chan(VAR_3->dev, VAR_4);
  if(VAR_5[VAR_4] == 1)
  FUNC_4(VAR_3);




  if(VAR_3->state < VAR_0)
   ;
  else
  if (VAR_3->sync_scan_hurryup)
   goto out;


  FUNC_6(VAR_1);

 }
out:
 if(VAR_3->state < VAR_0){
  VAR_3->actscanning = 0;
  FUNC_8(&VAR_3->scan_sem);
  VAR_3->be_scan_inprogress = 0;
 }
 else{
 VAR_3->sync_scan_hurryup = 0;
 if(FUNC_2(VAR_3))
  FUNC_0(VAR_3);
 FUNC_8(&VAR_3->scan_sem);
 VAR_3->be_scan_inprogress = 0;
}
}
