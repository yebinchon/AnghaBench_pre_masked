
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
union iwreq_data {TYPE_2__ bitrate; } ;
typedef int u32 ;
struct iw_request_info {int dummy; } ;
struct TYPE_3__ {int CurrentShowTxate; } ;
struct ieee80211_device {int mode; int rate; TYPE_1__ softmac_stats; int dev; scalar_t__ (* GetHalfNmodeSupportByAPsHandler ) (int ) ;int bHalfWirelessN24GMode; } ;


 int FUNC_0 (struct ieee80211_device*,int) ;
 int FUNC_1 (struct ieee80211_device*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ieee80211_device*,int ) ;
 int FUNC_3 (char*,int,int ) ;
 scalar_t__ FUNC_4 (int ) ;

int FUNC_5(struct ieee80211_device *VAR_5,
        struct iw_request_info *VAR_6,
        union iwreq_data *VAR_7, char *VAR_8)
{
 u32 VAR_9;
 VAR_9 = FUNC_2(VAR_5, VAR_5->softmac_stats.CurrentShowTxate);


 VAR_7->bitrate.value = VAR_9 * 500000;

 return 0;
}
