
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int swtxstop; } ;
struct ieee80211_device {int queue_stop; TYPE_1__ softmac_stats; int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(struct ieee80211_device *VAR_0)
{



 if (! FUNC_0(VAR_0->dev)){
  FUNC_1(VAR_0->dev);
  VAR_0->softmac_stats.swtxstop++;
 }
 VAR_0->queue_stop = 1;


}
