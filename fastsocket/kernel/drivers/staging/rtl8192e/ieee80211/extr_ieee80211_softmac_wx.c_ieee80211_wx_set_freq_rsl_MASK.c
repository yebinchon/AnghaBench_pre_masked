
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iw_freq {int e; int m; } ;
union iwreq_data {struct iw_freq freq; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {size_t channel; } ;
struct ieee80211_device {scalar_t__ iw_mode; scalar_t__ state; int wx_sem; TYPE_1__ current_network; int dev; int (* set_chan ) (int ,size_t) ;} ;
struct TYPE_4__ {int * channel_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct ieee80211_device*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int FUNC_3 (struct ieee80211_device*) ;
 int* VAR_6 ;
 int FUNC_4 (int ,size_t) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct ieee80211_device *VAR_7, struct iw_request_info *VAR_8,
        union iwreq_data *VAR_9, char *VAR_10)
{
 int VAR_11;
 struct iw_freq *VAR_12 = & VAR_9->freq;

 FUNC_1(&VAR_7->wx_sem);

 if(VAR_7->iw_mode == VAR_4){
  VAR_11 = -VAR_1;
  goto out;
 }


 if (VAR_12->e == 1) {
  if ((VAR_12->m >= (int) 2.412e8 &&
       VAR_12->m <= (int) 2.487e8)) {
   int VAR_13 = VAR_12->m / 100000;
   int VAR_14 = 0;

   while ((VAR_14 < 14) && (VAR_13 != VAR_6[VAR_14]))
    VAR_14++;


   VAR_12->e = 0;
   VAR_12->m = VAR_14 + 1;
  }
 }

 if (VAR_12->e > 0 || VAR_12->m > 14 || VAR_12->m < 1 ){
  VAR_11 = -VAR_1;
  goto out;

 }else {







  VAR_7->current_network.channel = VAR_12->m;
  VAR_7->set_chan(VAR_7->dev, VAR_7->current_network.channel);

  if(VAR_7->iw_mode == VAR_3 || VAR_7->iw_mode == VAR_5)
   if(VAR_7->state == VAR_2){

   FUNC_3(VAR_7);
   FUNC_2(VAR_7);
   }
 }

 VAR_11 = 0;
out:
 FUNC_5(&VAR_7->wx_sem);
 return VAR_11;
}
