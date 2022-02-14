
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wl3501_scan_req {int probe_delay; int bss_type; int max_chan_time; int min_chan_time; int scan_type; int sig_id; } ;
struct wl3501_card {scalar_t__ join_sta_bss; scalar_t__ bss_cnt; } ;
typedef int sig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct wl3501_card*,struct wl3501_scan_req*,int) ;
 int FUNC_1 (struct wl3501_card*) ;

__attribute__((used)) static int FUNC_2(struct wl3501_card *VAR_2, u16 VAR_3)
{
 struct wl3501_scan_req VAR_4 = {
  .sig_id = VAR_1,
  .scan_type = VAR_0,
  .probe_delay = 0x10,
  .min_chan_time = VAR_3,
  .max_chan_time = VAR_3,
  .bss_type = FUNC_1(VAR_2),
 };

 VAR_2->bss_cnt = VAR_2->join_sta_bss = 0;
 return FUNC_0(VAR_2, &VAR_4, sizeof(VAR_4));
}
