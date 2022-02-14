
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_freq {int e; int m; } ;
union iwreq_data {struct iw_freq freq; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_2__ {int channel; } ;
struct ieee80211_device {scalar_t__ iw_mode; scalar_t__ state; int wx_sem; TYPE_1__ current_network; int dev; int (* set_chan ) (int ,int) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211_device*) ;
 int FUNC_2 (struct ieee80211_device*) ;
 int* VAR_5 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct ieee80211_device *VAR_6, struct iw_request_info *VAR_7,
        union iwreq_data *VAR_8, char *VAR_9)
{
 int VAR_10;
 struct iw_freq *VAR_11 = & VAR_8->freq;

 FUNC_0(&VAR_6->wx_sem);

 if(VAR_6->iw_mode == VAR_3){
  VAR_10 = -VAR_0;
  goto out;
 }


 if (VAR_11->e == 1) {
  if ((VAR_11->m >= (int) 2.412e8 &&
       VAR_11->m <= (int) 2.487e8)) {
   int VAR_12 = VAR_11->m / 100000;
   int VAR_13 = 0;

   while ((VAR_13 < 14) && (VAR_12 != VAR_5[VAR_13]))
    VAR_13++;


   VAR_11->e = 0;
   VAR_11->m = VAR_13 + 1;
  }
 }

 if (VAR_11->e > 0 || VAR_11->m > 14 || VAR_11->m < 1 ){
  VAR_10 = -VAR_0;
  goto out;

 }else {


  VAR_6->current_network.channel = VAR_11->m;
  VAR_6->set_chan(VAR_6->dev, VAR_6->current_network.channel);

  if(VAR_6->iw_mode == VAR_2 || VAR_6->iw_mode == VAR_4)
   if(VAR_6->state == VAR_1){

   FUNC_2(VAR_6);
   FUNC_1(VAR_6);
   }
 }

 VAR_10 = 0;
out:
 FUNC_4(&VAR_6->wx_sem);
 return VAR_10;
}
