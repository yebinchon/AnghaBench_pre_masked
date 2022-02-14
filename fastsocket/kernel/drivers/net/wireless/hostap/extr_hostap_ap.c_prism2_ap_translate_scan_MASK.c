
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {char* ssid; int channel; int ssid_len; } ;
struct TYPE_15__ {TYPE_6__ ap; } ;
struct sta_info {int last_rx_silence; int last_rx_signal; int capability; int listen_interval; int last_rx_updated; TYPE_7__ u; scalar_t__ ap; int addr; } ;
struct net_device {int dummy; } ;
struct list_head {struct list_head* next; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_11__ {int flags; int length; } ;
struct TYPE_12__ {int m; int e; } ;
struct TYPE_10__ {int qual; int updated; void* noise; void* level; } ;
struct TYPE_9__ {int sa_data; int sa_family; } ;
struct TYPE_13__ {TYPE_3__ data; TYPE_4__ freq; TYPE_2__ qual; int mode; TYPE_1__ ap_addr; } ;
struct iw_event {TYPE_5__ u; int cmd; void* len; } ;
struct hostap_interface {TYPE_8__* local; } ;
struct ap_data {int sta_table_lock; struct list_head sta_list; } ;
struct TYPE_16__ {struct ap_data* ap; } ;
typedef TYPE_8__ local_info_t ;
typedef int iwe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int* VAR_22 ;
 char* FUNC_1 (struct iw_request_info*,char*,char*,struct iw_event*,void*) ;
 char* FUNC_2 (struct iw_request_info*,char*,char*,struct iw_event*,char*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct iw_event*,int ,int) ;
 struct hostap_interface* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;

int FUNC_10(struct net_device *VAR_23,
        struct iw_request_info *VAR_24, char *VAR_25)
{
 struct hostap_interface *VAR_26;
 local_info_t *VAR_27;
 struct ap_data *VAR_28;
 struct list_head *VAR_29;
 struct iw_event VAR_30;
 char *VAR_31 = VAR_25;
 char *VAR_32 = VAR_25 + VAR_15;

 char VAR_33[64];


 VAR_26 = FUNC_5(VAR_23);
 VAR_27 = VAR_26->local;
 VAR_28 = VAR_27->ap;

 FUNC_6(&VAR_28->sta_table_lock);

 for (VAR_29 = VAR_28->sta_list.next; VAR_29 != ((void*)0) && VAR_29 != &VAR_28->sta_list;
      VAR_29 = VAR_29->next) {
  struct sta_info *VAR_34 = (struct sta_info *) VAR_29;


  FUNC_4(&VAR_30, 0, sizeof(VAR_30));
  VAR_30.cmd = VAR_16;
  VAR_30.u.ap_addr.sa_family = VAR_0;
  FUNC_3(VAR_30.u.ap_addr.sa_data, VAR_34->addr, VAR_1);
  VAR_30.len = VAR_8;
  VAR_31 = FUNC_1(VAR_24, VAR_31, VAR_32,
        &VAR_30, VAR_8);



  FUNC_4(&VAR_30, 0, sizeof(VAR_30));
  VAR_30.cmd = VAR_20;
  if (VAR_34->ap)
   VAR_30.u.mode = VAR_13;
  else
   VAR_30.u.mode = VAR_12;
  VAR_30.len = VAR_11;
  VAR_31 = FUNC_1(VAR_24, VAR_31, VAR_32,
        &VAR_30, VAR_11);


  FUNC_4(&VAR_30, 0, sizeof(VAR_30));
  VAR_30.cmd = VAR_4;
  if (VAR_34->last_rx_silence == 0)
   VAR_30.u.qual.qual = VAR_34->last_rx_signal < 27 ?
    0 : (VAR_34->last_rx_signal - 27) * 92 / 127;
  else
   VAR_30.u.qual.qual = VAR_34->last_rx_signal -
    VAR_34->last_rx_silence - 35;
  VAR_30.u.qual.level = FUNC_0(VAR_34->last_rx_signal);
  VAR_30.u.qual.noise = FUNC_0(VAR_34->last_rx_silence);
  VAR_30.u.qual.updated = VAR_34->last_rx_updated;
  VAR_30.len = VAR_10;
  VAR_31 = FUNC_1(VAR_24, VAR_31, VAR_32,
        &VAR_30, VAR_10);


  if (VAR_34->ap) {
   FUNC_4(&VAR_30, 0, sizeof(VAR_30));
   VAR_30.cmd = VAR_18;
   VAR_30.u.data.length = VAR_34->u.ap.ssid_len;
   VAR_30.u.data.flags = 1;
   VAR_31 = FUNC_2(VAR_24, VAR_31,
         VAR_32, &VAR_30,
         VAR_34->u.ap.ssid);

   FUNC_4(&VAR_30, 0, sizeof(VAR_30));
   VAR_30.cmd = VAR_17;
   if (VAR_34->capability & VAR_21)
    VAR_30.u.data.flags =
     VAR_6 | VAR_7;
   else
    VAR_30.u.data.flags = VAR_5;
   VAR_31 = FUNC_2(VAR_24, VAR_31,
         VAR_32, &VAR_30,
         VAR_34->u.ap.ssid);

   if (VAR_34->u.ap.channel > 0 &&
       VAR_34->u.ap.channel <= VAR_2) {
    FUNC_4(&VAR_30, 0, sizeof(VAR_30));
    VAR_30.cmd = VAR_19;
    VAR_30.u.freq.m = VAR_22[VAR_34->u.ap.channel - 1]
     * 100000;
    VAR_30.u.freq.e = 1;
    VAR_31 = FUNC_1(
     VAR_24, VAR_31, VAR_32, &VAR_30,
     VAR_9);
   }

   FUNC_4(&VAR_30, 0, sizeof(VAR_30));
   VAR_30.cmd = VAR_3;
   FUNC_8(VAR_33, "beacon_interval=%d",
    VAR_34->listen_interval);
   VAR_30.u.data.length = FUNC_9(VAR_33);
   VAR_31 = FUNC_2(VAR_24, VAR_31,
         VAR_32, &VAR_30, VAR_33);
  }


  VAR_34->last_rx_updated = VAR_14;


 }

 FUNC_7(&VAR_28->sta_table_lock);

 return VAR_31 - VAR_25;
}
