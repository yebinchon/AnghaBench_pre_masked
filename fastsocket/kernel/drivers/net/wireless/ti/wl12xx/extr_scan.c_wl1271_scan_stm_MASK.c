
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wl12xx_vif {int * bitrate_masks; } ;
struct TYPE_4__ {int state; int failed; TYPE_1__* req; } ;
struct wl1271 {int scan_complete_work; int hw; TYPE_2__ scan; int enable_11a; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_3__ {int no_cck; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct wl1271*,struct wl12xx_vif*,int,int,int ) ;
 int FUNC_5 (struct wl1271*,int ) ;

void FUNC_6(struct wl1271 *VAR_5, struct wl12xx_vif *VAR_6)
{
 int VAR_7 = 0;
 enum ieee80211_band VAR_8;
 u32 VAR_9, VAR_10;

 switch (VAR_5->scan.state) {
 case 128:
  break;

 case 133:
  VAR_8 = VAR_2;
  VAR_10 = VAR_6->bitrate_masks[VAR_8];
  if (VAR_5->scan.req->no_cck) {
   VAR_10 &= ~VAR_0;
   if (!VAR_10)
    VAR_10 = VAR_1;
  }
  VAR_9 = FUNC_5(VAR_5, VAR_10);
  VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_8, 0, VAR_9);
  if (VAR_7 == VAR_4) {
   VAR_5->scan.state = 132;
   FUNC_6(VAR_5, VAR_6);
  }

  break;

 case 132:
  VAR_8 = VAR_2;
  VAR_10 = VAR_6->bitrate_masks[VAR_8];
  if (VAR_5->scan.req->no_cck) {
   VAR_10 &= ~VAR_0;
   if (!VAR_10)
    VAR_10 = VAR_1;
  }
  VAR_9 = FUNC_5(VAR_5, VAR_10);
  VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_8, 1, VAR_9);
  if (VAR_7 == VAR_4) {
   if (VAR_5->enable_11a)
    VAR_5->scan.state = 131;
   else
    VAR_5->scan.state = 129;
   FUNC_6(VAR_5, VAR_6);
  }

  break;

 case 131:
  VAR_8 = VAR_3;
  VAR_9 = FUNC_5(VAR_5, VAR_6->bitrate_masks[VAR_8]);
  VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_8, 0, VAR_9);
  if (VAR_7 == VAR_4) {
   VAR_5->scan.state = 130;
   FUNC_6(VAR_5, VAR_6);
  }

  break;

 case 130:
  VAR_8 = VAR_3;
  VAR_9 = FUNC_5(VAR_5, VAR_6->bitrate_masks[VAR_8]);
  VAR_7 = FUNC_4(VAR_5, VAR_6, VAR_8, 1, VAR_9);
  if (VAR_7 == VAR_4) {
   VAR_5->scan.state = 129;
   FUNC_6(VAR_5, VAR_6);
  }

  break;

 case 129:
  VAR_5->scan.failed = 0;
  FUNC_0(&VAR_5->scan_complete_work);
  FUNC_1(VAR_5->hw, &VAR_5->scan_complete_work,
          FUNC_2(0));
  break;

 default:
  FUNC_3("invalid scan state");
  break;
 }

 if (VAR_7 < 0) {
  FUNC_0(&VAR_5->scan_complete_work);
  FUNC_1(VAR_5->hw, &VAR_5->scan_complete_work,
          FUNC_2(0));
 }
}
