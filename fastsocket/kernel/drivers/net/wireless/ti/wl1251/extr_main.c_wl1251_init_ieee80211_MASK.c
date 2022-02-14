
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wl1251 {scalar_t__ use_eeprom; TYPE_2__* hw; } ;
struct tx_double_buffer_desc {int dummy; } ;
struct TYPE_4__ {int channel_change_time; int flags; int queues; TYPE_1__* wiphy; scalar_t__ extra_tx_headroom; } ;
struct TYPE_3__ {int interface_modes; int max_scan_ssids; int ** bands; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct wl1251*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct wl1251*) ;
 int FUNC_4 (struct wl1251*) ;

int FUNC_5(struct wl1251 *VAR_8)
{
 int VAR_9;


 VAR_8->hw->extra_tx_headroom = sizeof(struct tx_double_buffer_desc)
  + VAR_6;



 VAR_8->hw->channel_change_time = 10000;

 VAR_8->hw->flags = VAR_1 |
  VAR_2 |
  VAR_3;

 VAR_8->hw->wiphy->interface_modes = FUNC_0(VAR_5) |
      FUNC_0(VAR_4);
 VAR_8->hw->wiphy->max_scan_ssids = 1;
 VAR_8->hw->wiphy->bands[VAR_0] = &VAR_7;

 VAR_8->hw->queues = 4;

 if (VAR_8->use_eeprom)
  FUNC_3(VAR_8);

 VAR_9 = FUNC_4(VAR_8);
 if (VAR_9)
  goto out;

 FUNC_1(VAR_8);
 FUNC_2("initialized");

 VAR_9 = 0;

out:
 return VAR_9;
}
