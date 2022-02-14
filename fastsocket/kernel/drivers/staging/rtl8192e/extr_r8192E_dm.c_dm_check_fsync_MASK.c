
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ undecorated_smoothed_pwdb; int framesync; scalar_t__ reset_count; scalar_t__ framesyncMonitor; TYPE_2__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {scalar_t__ HardwareType; } ;
struct TYPE_5__ {scalar_t__ state; scalar_t__ bfsync_enable; int fsync_state; TYPE_1__* pHTInfo; int fsync_seconddiff_ratethreshold; int fsync_firstdiff_ratethreshold; int fsync_rate_bitmap; int fsync_multiple_timeinterval; int fsync_time_interval; int fsync_rssi_threshold; } ;
struct TYPE_4__ {int IOTAction; } ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;

 scalar_t__ VAR_2 ;
 int VAR_3 ;

 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct r8192_priv* FUNC_6 (struct net_device*) ;
 int VAR_9 ;
 int FUNC_7 (struct net_device*,int ,int) ;

void FUNC_8(struct net_device *VAR_10)
{



 struct r8192_priv *VAR_11 = FUNC_6(VAR_10);

 static u8 VAR_12=0;
 static u32 VAR_13=0;

 FUNC_1(VAR_1, "RSSI %d TimeInterval %d MultipleTimeInterval %d\n", VAR_11->ieee80211->fsync_rssi_threshold, VAR_11->ieee80211->fsync_time_interval, VAR_11->ieee80211->fsync_multiple_timeinterval);
 FUNC_1(VAR_1, "RateBitmap 0x%x FirstDiffRateThreshold %d SecondDiffRateThreshold %d\n", VAR_11->ieee80211->fsync_rate_bitmap, VAR_11->ieee80211->fsync_firstdiff_ratethreshold, VAR_11->ieee80211->fsync_seconddiff_ratethreshold);

 if( VAR_11->ieee80211->state == VAR_4 &&
  (VAR_11->ieee80211->pHTInfo->IOTAction & VAR_3))
 {
  if(VAR_11->ieee80211->bfsync_enable == 0)
  {
   switch(VAR_11->ieee80211->fsync_state)
   {
    case 130:
     FUNC_4(VAR_10);
     VAR_11->ieee80211->fsync_state = 129;
     break;
    case 128:
     FUNC_3(VAR_10);
     FUNC_4(VAR_10);
     VAR_11->ieee80211->fsync_state = 129;
     break;
    case 129:
    default:
     break;
   }
  }
  else
  {
   switch(VAR_11->ieee80211->fsync_state)
   {
    case 130:
     FUNC_5(VAR_10);
     VAR_11->ieee80211->fsync_state = 128;
     break;
    case 129:
     FUNC_2(VAR_10);
     FUNC_5(VAR_10);
     VAR_11->ieee80211->fsync_state = 128;
     break;
    case 128:
    default:
     break;

   }
  }
  if(VAR_11->framesyncMonitor)
  {
   if(VAR_12 != 2)
   {



     FUNC_7(VAR_10, VAR_9, 0x95);


    VAR_12 = 2;
   }
  }
 }
 else
 {
  switch(VAR_11->ieee80211->fsync_state)
  {
   case 129:
    FUNC_2(VAR_10);
    VAR_11->ieee80211->fsync_state = 130;
    break;
   case 128:
    FUNC_3(VAR_10);
    VAR_11->ieee80211->fsync_state = 130;
    break;
   case 130:
   default:
    break;
  }

  if(VAR_11->framesyncMonitor)
  {
   if(VAR_11->ieee80211->state == VAR_4)
   {
    if(VAR_11->undecorated_smoothed_pwdb <= VAR_8)
    {
     if(VAR_12 != 1)
     {



       FUNC_7(VAR_10, VAR_9, 0x90);


      VAR_12 = 1;






     }
    }
    else if(VAR_11->undecorated_smoothed_pwdb >= (VAR_8+5))
    {
     if(VAR_12)
     {
      FUNC_7(VAR_10, VAR_9, VAR_11->framesync);
      VAR_12 = 0;

     }
    }
   }
   else
   {
    if(VAR_12)
    {
     FUNC_7(VAR_10, VAR_9, VAR_11->framesync);
     VAR_12 = 0;

    }
   }
  }
 }
 if(VAR_11->framesyncMonitor)
 {
  if(VAR_11->reset_count != VAR_13)
  {
   FUNC_7(VAR_10, VAR_9, VAR_11->framesync);
   VAR_12 = 0;
   VAR_13 = VAR_11->reset_count;

  }
 }
 else
 {
  if(VAR_12)
  {
   FUNC_7(VAR_10, VAR_9, VAR_11->framesync);
   VAR_12 = 0;

  }
 }
}
