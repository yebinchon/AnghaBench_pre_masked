
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int channel; } ;
struct ieee80211_device {scalar_t__ state; int actscanning; int scan_sem; TYPE_1__ current_network; int dev; int (* set_chan ) (int ,size_t) ;} ;
struct TYPE_4__ {int channel_map; } ;


 int FUNC_0 (struct ieee80211_device*) ;
 TYPE_2__* FUNC_1 (struct ieee80211_device*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct ieee80211_device*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ieee80211_device*) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (int *) ;

void FUNC_9(struct ieee80211_device *VAR_3)
{
 int VAR_4;
        unsigned int VAR_5 = 0;
 u8 VAR_6[VAR_2+1];
 FUNC_5(VAR_6, FUNC_1(VAR_3)->channel_map, VAR_2+1);
        FUNC_3(&VAR_3->scan_sem);
 VAR_4 = VAR_3->current_network.channel;







      while(1)
        {
  if (VAR_3->state == VAR_0)
  {
   goto out;
  }
  if(VAR_6[VAR_3->current_network.channel] > 0)
  {
   VAR_3->set_chan(VAR_3->dev, VAR_3->current_network.channel);

  }
  if(VAR_6[VAR_3->current_network.channel] == 1)
  {

   FUNC_4(VAR_3);
                }






  FUNC_6(VAR_1);

  do{
   if (VAR_5++ >= VAR_2)

    goto out;

   VAR_3->current_network.channel = (VAR_3->current_network.channel + 1)%VAR_2;
  }while(!VAR_6[VAR_3->current_network.channel]);
        }
out:



 VAR_3->actscanning = 0;
 FUNC_8(&VAR_3->scan_sem);
 if(FUNC_2(VAR_3))
  FUNC_0(VAR_3);
}
