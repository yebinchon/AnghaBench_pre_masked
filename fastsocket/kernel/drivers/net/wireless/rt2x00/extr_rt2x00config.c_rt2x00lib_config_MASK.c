
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_12__ {int channel; } ;
struct rt2x00lib_conf {TYPE_6__ rf; TYPE_6__ channel; struct ieee80211_conf* conf; } ;
struct TYPE_7__ {int * channels_info; int * channels; } ;
struct rt2x00_dev {int long_retry; int short_retry; int tx_power; int curr_freq; int curr_band; int flags; int autowakeup_work; int workqueue; int beacon_int; scalar_t__ last_beacon; int cap_flags; TYPE_3__* ops; int rf_channel; TYPE_1__ spec; } ;
struct TYPE_11__ {TYPE_4__* chan; } ;
struct ieee80211_conf {int flags; size_t max_sleep_period; int long_frame_max_tx_count; int short_frame_max_tx_count; int power_level; TYPE_5__ chandef; } ;
typedef int libconf ;
struct TYPE_10__ {size_t hw_value; int center_freq; int band; } ;
struct TYPE_9__ {TYPE_2__* lib; } ;
struct TYPE_8__ {int (* config ) (struct rt2x00_dev*,struct rt2x00lib_conf*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ieee80211_conf*) ;
 scalar_t__ FUNC_3 (struct ieee80211_conf*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (TYPE_6__*,int *,int) ;
 int FUNC_5 (struct rt2x00lib_conf*,int ,int) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (int ,int *,size_t) ;
 size_t FUNC_8 (struct rt2x00_dev*,struct ieee80211_conf*) ;
 int FUNC_9 (struct rt2x00_dev*,int) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (struct rt2x00_dev*,struct rt2x00lib_conf*,unsigned int) ;
 scalar_t__ FUNC_12 (int ,int *) ;

void FUNC_13(struct rt2x00_dev *VAR_9,
        struct ieee80211_conf *VAR_10,
        unsigned int VAR_11)
{
 struct rt2x00lib_conf VAR_12;
 u16 VAR_13;
 u16 VAR_14;
 u16 VAR_15;
 u16 VAR_16;

 FUNC_5(&VAR_12, 0, sizeof(VAR_12));

 VAR_12.conf = VAR_10;

 if (VAR_11 & VAR_4) {
  if (!FUNC_2(VAR_10))
   FUNC_10(VAR_1, &VAR_9->flags);
  else
   FUNC_1(VAR_1, &VAR_9->flags);

  if (FUNC_3(VAR_10)) {
   FUNC_10(VAR_0, &VAR_9->flags);
   VAR_13 = FUNC_8(VAR_9, VAR_10);
  } else {
   FUNC_1(VAR_0, &VAR_9->flags);
   VAR_13 = VAR_10->chandef.chan->hw_value;
  }

  FUNC_4(&VAR_12.rf,
         &VAR_9->spec.channels[VAR_13],
         sizeof(VAR_12.rf));

  FUNC_4(&VAR_12.channel,
         &VAR_9->spec.channels_info[VAR_13],
         sizeof(VAR_12.channel));


  VAR_9->rf_channel = VAR_12.rf.channel;
 }

 if (FUNC_12(VAR_7, &VAR_9->cap_flags) &&
     (VAR_11 & VAR_5))
  FUNC_0(&VAR_9->autowakeup_work);




 VAR_9->ops->lib->config(VAR_9, &VAR_12, VAR_11);





 if (VAR_11 & VAR_4)
  FUNC_9(VAR_9, 0);

 if (FUNC_12(VAR_3, &VAR_9->flags) &&
     FUNC_12(VAR_7, &VAR_9->cap_flags) &&
     (VAR_11 & VAR_5) &&
     (VAR_10->flags & VAR_6)) {
  VAR_16 = (long)VAR_8 - (long)VAR_9->last_beacon;
  VAR_15 = FUNC_6(VAR_9->beacon_int);

  if (VAR_16 > VAR_15)
   VAR_16 = 0;

  VAR_14 = (VAR_10->max_sleep_period * VAR_15) - VAR_16;
  FUNC_7(VAR_9->workqueue,
       &VAR_9->autowakeup_work,
       VAR_14 - 15);
 }

 if (VAR_10->flags & VAR_6)
  FUNC_10(VAR_2, &VAR_9->flags);
 else
  FUNC_1(VAR_2, &VAR_9->flags);

 VAR_9->curr_band = VAR_10->chandef.chan->band;
 VAR_9->curr_freq = VAR_10->chandef.chan->center_freq;
 VAR_9->tx_power = VAR_10->power_level;
 VAR_9->short_retry = VAR_10->short_frame_max_tx_count;
 VAR_9->long_retry = VAR_10->long_frame_max_tx_count;
}
