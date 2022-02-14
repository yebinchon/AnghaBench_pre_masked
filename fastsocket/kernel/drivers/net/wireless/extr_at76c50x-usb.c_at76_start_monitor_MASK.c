
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at76_req_scan {void* probe_delay; void* max_channel_time; void* min_channel_time; scalar_t__ international_scan; int scan_type; int channel; struct at76_req_scan* bssid; } ;
struct at76_priv {int udev; int scan_max_time; int scan_min_time; int channel; } ;
typedef int scan ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,struct at76_req_scan*,int) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (struct at76_req_scan*,int,int) ;

__attribute__((used)) static int FUNC_4(struct at76_priv *VAR_3)
{
 struct at76_req_scan VAR_4;
 int VAR_5;

 FUNC_3(&VAR_4, 0, sizeof(struct at76_req_scan));
 FUNC_3(VAR_4.bssid, 0xff, VAR_1);

 VAR_4.channel = VAR_3->channel;
 VAR_4.scan_type = VAR_2;
 VAR_4.international_scan = 0;
 VAR_4.min_channel_time = FUNC_2(VAR_3->scan_min_time);
 VAR_4.max_channel_time = FUNC_2(VAR_3->scan_max_time);
 VAR_4.probe_delay = FUNC_2(0);

 VAR_5 = FUNC_1(VAR_3->udev, VAR_0, &VAR_4, sizeof(VAR_4));
 if (VAR_5 >= 0)
  VAR_5 = FUNC_0(VAR_3->udev, VAR_0);

 return VAR_5;
}
