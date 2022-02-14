
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl1251 {int scanning; TYPE_2__* hw; } ;
struct event_mailbox {int scheduled_scan_channels; int scheduled_scan_status; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct wl1251*,int ) ;

__attribute__((used)) static int FUNC_3(struct wl1251 *VAR_4,
          struct event_mailbox *VAR_5)
{
 int VAR_6 = 0;

 FUNC_1(VAR_0, "status: 0x%x, channels: %d",
       VAR_5->scheduled_scan_status,
       VAR_5->scheduled_scan_channels);

 if (VAR_4->scanning) {
  FUNC_0(VAR_4->hw, 0);
  FUNC_1(VAR_1, "mac80211 hw scan completed");
  VAR_4->scanning = 0;
  if (VAR_4->hw->conf.flags & VAR_2)
   VAR_6 = FUNC_2(VAR_4, VAR_3);
 }

 return VAR_6;
}
