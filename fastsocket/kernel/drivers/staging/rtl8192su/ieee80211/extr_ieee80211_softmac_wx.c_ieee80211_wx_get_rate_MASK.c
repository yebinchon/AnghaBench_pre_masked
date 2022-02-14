
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
union iwreq_data {TYPE_1__ bitrate; } ;
typedef int u32 ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {int mode; int rate; int dev; scalar_t__ (* GetHalfNmodeSupportByAPsHandler ) (int ) ;} ;


 int FUNC_0 (struct ieee80211_device*,int) ;
 int FUNC_1 (struct ieee80211_device*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;

int FUNC_3(struct ieee80211_device *VAR_5,
        struct iw_request_info *VAR_6,
        union iwreq_data *VAR_7, char *VAR_8)
{
 u32 VAR_9 = 0;

 if (VAR_5->mode & (VAR_0 | VAR_1 | VAR_2))
  VAR_9 = VAR_5->rate;
 else if (VAR_5->mode & VAR_4)
  VAR_9 = 580;
 else if (VAR_5->mode & VAR_3)
 {
  if (VAR_5->GetHalfNmodeSupportByAPsHandler(VAR_5->dev))
   VAR_9 = FUNC_0(VAR_5, 15);
  else
   VAR_9 = FUNC_1(VAR_5, 15);
 }
 VAR_7->bitrate.value = VAR_9 * 500000;

 return 0;
}
