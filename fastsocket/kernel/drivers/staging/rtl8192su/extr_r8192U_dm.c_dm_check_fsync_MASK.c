
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ undecorated_smoothed_pwdb; int framesync; scalar_t__ reset_count; scalar_t__ framesyncMonitor; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ state; scalar_t__ bfsync_enable; int fsync_state; TYPE_1__* pHTInfo; int fsync_seconddiff_ratethreshold; int fsync_firstdiff_ratethreshold; int fsync_rate_bitmap; int fsync_multiple_timeinterval; int fsync_time_interval; int fsync_rssi_threshold; } ;
struct TYPE_3__ {int IOTAction; } ;


 int VAR_0 ;

 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 struct r8192_priv* FUNC_5 (struct net_device*) ;
 int VAR_7 ;
 int FUNC_6 (struct net_device*,int ,int) ;

void FUNC_7(struct net_device *VAR_8)
{



 struct r8192_priv *VAR_9 = FUNC_5(VAR_8);

 static u8 VAR_10=0;
 static u32 VAR_11=0;

 FUNC_0(VAR_0, "RSSI %d TimeInterval %d MultipleTimeInterval %d\n", VAR_9->ieee80211->fsync_rssi_threshold, VAR_9->ieee80211->fsync_time_interval, VAR_9->ieee80211->fsync_multiple_timeinterval);
 FUNC_0(VAR_0, "RateBitmap 0x%x FirstDiffRateThreshold %d SecondDiffRateThreshold %d\n", VAR_9->ieee80211->fsync_rate_bitmap, VAR_9->ieee80211->fsync_firstdiff_ratethreshold, VAR_9->ieee80211->fsync_seconddiff_ratethreshold);

 if( VAR_9->ieee80211->state == VAR_2 &&
  (VAR_9->ieee80211->pHTInfo->IOTAction & VAR_1))
 {
  if(VAR_9->ieee80211->bfsync_enable == 0)
  {
   switch(VAR_9->ieee80211->fsync_state)
   {
    case 130:
     FUNC_3(VAR_8);
     VAR_9->ieee80211->fsync_state = 129;
     break;
    case 128:
     FUNC_2(VAR_8);
     FUNC_3(VAR_8);
     VAR_9->ieee80211->fsync_state = 129;
     break;
    case 129:
    default:
     break;
   }
  }
  else
  {
   switch(VAR_9->ieee80211->fsync_state)
   {
    case 130:
     FUNC_4(VAR_8);
     VAR_9->ieee80211->fsync_state = 128;
     break;
    case 129:
     FUNC_1(VAR_8);
     FUNC_4(VAR_8);
     VAR_9->ieee80211->fsync_state = 128;
     break;
    case 128:
    default:
     break;

   }
  }
  if(VAR_9->framesyncMonitor)
  {
   if(VAR_10 != 2)
   {



     FUNC_6(VAR_8, VAR_7, 0x95);


    VAR_10 = 2;
   }
  }
 }
 else
 {
  switch(VAR_9->ieee80211->fsync_state)
  {
   case 129:
    FUNC_1(VAR_8);
    VAR_9->ieee80211->fsync_state = 130;
    break;
   case 128:
    FUNC_2(VAR_8);
    VAR_9->ieee80211->fsync_state = 130;
    break;
   case 130:
   default:
    break;
  }

  if(VAR_9->framesyncMonitor)
  {
   if(VAR_9->ieee80211->state == VAR_2)
   {
    if(VAR_9->undecorated_smoothed_pwdb <= VAR_6)
    {
     if(VAR_10 != 1)
     {



       FUNC_6(VAR_8, VAR_7, 0x90);


      VAR_10 = 1;
     }
    }
    else if(VAR_9->undecorated_smoothed_pwdb >= (VAR_6+5))
    {
     if(VAR_10)
     {
      FUNC_6(VAR_8, VAR_7, VAR_9->framesync);
      VAR_10 = 0;

     }
    }
   }
   else
   {
    if(VAR_10)
    {
     FUNC_6(VAR_8, VAR_7, VAR_9->framesync);
     VAR_10 = 0;

    }
   }
  }
 }
 if(VAR_9->framesyncMonitor)
 {
  if(VAR_9->reset_count != VAR_11)
  {
   FUNC_6(VAR_8, VAR_7, VAR_9->framesync);
   VAR_10 = 0;
   VAR_11 = VAR_9->reset_count;

  }
 }
 else
 {
  if(VAR_10)
  {
   FUNC_6(VAR_8, VAR_7, VAR_9->framesync);
   VAR_10 = 0;

  }
 }
}
