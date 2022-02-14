
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


struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; scalar_t__ flags; } ;
struct TYPE_11__ {int length; int flags; } ;
struct TYPE_9__ {int level; int qual; } ;
struct TYPE_8__ {scalar_t__ e; int m; } ;
struct TYPE_7__ {int sa_data; int sa_family; } ;
struct TYPE_12__ {TYPE_5__ data; TYPE_3__ qual; TYPE_2__ freq; int mode; TYPE_1__ ap_addr; } ;
struct iw_event {TYPE_6__ u; int cmd; } ;
struct atmel_private {scalar_t__ site_survey_state; int BSS_list_entries; TYPE_4__* BSSinfo; } ;
struct TYPE_10__ {int SSIDsize; scalar_t__ UsingWEP; int RSSI; int channel; int BSStype; int * SSID; int BSSID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 char* FUNC_0 (struct iw_request_info*,char*,char*,struct iw_event*,int ) ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,int *) ;
 int FUNC_2 (int ,int ,int) ;
 struct atmel_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_17,
     struct iw_request_info *VAR_18,
     struct iw_point *VAR_19,
     char *VAR_20)
{
 struct atmel_private *VAR_21 = FUNC_3(VAR_17);
 int VAR_22;
 char *VAR_23 = VAR_20;
 struct iw_event VAR_24;

 if (VAR_21->site_survey_state != VAR_16)
  return -VAR_1;

 for (VAR_22 = 0; VAR_22 < VAR_21->BSS_list_entries; VAR_22++) {
  VAR_24.cmd = VAR_11;
  VAR_24.u.ap_addr.sa_family = VAR_0;
  FUNC_2(VAR_24.u.ap_addr.sa_data, VAR_21->BSSinfo[VAR_22].BSSID, 6);
  VAR_23 = FUNC_0(VAR_18, VAR_23,
        VAR_20 + VAR_10,
        &VAR_24, VAR_6);

  VAR_24.u.data.length = VAR_21->BSSinfo[VAR_22].SSIDsize;
  if (VAR_24.u.data.length > 32)
   VAR_24.u.data.length = 32;
  VAR_24.cmd = VAR_13;
  VAR_24.u.data.flags = 1;
  VAR_23 = FUNC_1(VAR_18, VAR_23,
        VAR_20 + VAR_10,
        &VAR_24, VAR_21->BSSinfo[VAR_22].SSID);

  VAR_24.cmd = VAR_15;
  VAR_24.u.mode = VAR_21->BSSinfo[VAR_22].BSStype;
  VAR_23 = FUNC_0(VAR_18, VAR_23,
        VAR_20 + VAR_10,
        &VAR_24, VAR_9);

  VAR_24.cmd = VAR_14;
  VAR_24.u.freq.m = VAR_21->BSSinfo[VAR_22].channel;
  VAR_24.u.freq.e = 0;
  VAR_23 = FUNC_0(VAR_18, VAR_23,
        VAR_20 + VAR_10,
        &VAR_24, VAR_7);


  VAR_24.cmd = VAR_2;
  VAR_24.u.qual.level = VAR_21->BSSinfo[VAR_22].RSSI;
  VAR_24.u.qual.qual = VAR_24.u.qual.level;

  VAR_23 = FUNC_0(VAR_18, VAR_23,
        VAR_20 + VAR_10,
        &VAR_24, VAR_8);


  VAR_24.cmd = VAR_12;
  if (VAR_21->BSSinfo[VAR_22].UsingWEP)
   VAR_24.u.data.flags = VAR_4 | VAR_5;
  else
   VAR_24.u.data.flags = VAR_3;
  VAR_24.u.data.length = 0;
  VAR_23 = FUNC_1(VAR_18, VAR_23,
        VAR_20 + VAR_10,
        &VAR_24, ((void*)0));
 }


 VAR_19->length = (VAR_23 - VAR_20);
 VAR_19->flags = 0;

 return 0;
}
