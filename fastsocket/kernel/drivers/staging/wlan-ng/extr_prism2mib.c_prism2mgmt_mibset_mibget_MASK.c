
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int * priv; } ;
typedef TYPE_3__ wlandevice_t ;
typedef int u16 ;
struct TYPE_13__ {void* status; scalar_t__ data; } ;
struct TYPE_12__ {scalar_t__ data; void* status; } ;
struct TYPE_15__ {scalar_t__ msgcode; TYPE_2__ mibattribute; TYPE_1__ resultcode; } ;
typedef TYPE_4__ p80211msg_dot11req_mibset_t ;
struct TYPE_16__ {scalar_t__ did; void* status; scalar_t__ data; } ;
typedef TYPE_5__ p80211itemd_t ;
struct TYPE_17__ {scalar_t__ did; int flag; int (* func ) (TYPE_6__*,int,TYPE_3__*,int *,TYPE_4__*,void*) ;} ;
typedef TYPE_6__ mibrec_t ;
typedef int hfa384x_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 TYPE_6__* VAR_10 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_6__*,int,TYPE_3__*,int *,TYPE_4__*,void*) ;

int FUNC_2(wlandevice_t *VAR_11, void *VAR_12)
{
 hfa384x_t *VAR_13 = VAR_11->priv;
 int VAR_14, VAR_15;
 mibrec_t *VAR_16;

 u16 VAR_17;

 p80211msg_dot11req_mibset_t *VAR_18 = VAR_12;
 p80211itemd_t *VAR_19;

 VAR_18->resultcode.status = VAR_4;
 VAR_18->resultcode.data = VAR_9;





 VAR_17 = VAR_2;
 VAR_19 = (p80211itemd_t *) VAR_18->mibattribute.data;

 for (VAR_16 = VAR_10; VAR_16->did != 0; VAR_16++)
  if (VAR_16->did == VAR_19->did && (VAR_16->flag & VAR_17))
   break;

 if (VAR_16->did == 0) {
  VAR_18->resultcode.data = VAR_8;
  goto done;
 }







 VAR_15 = (VAR_18->msgcode == VAR_0);

 if (VAR_15) {
  if (!(VAR_16->flag & VAR_1)) {
   VAR_18->resultcode.data =
       VAR_5;
   goto done;
  }
 } else {
  if (!(VAR_16->flag & VAR_3)) {
   VAR_18->resultcode.data =
       VAR_6;
   goto done;
  }
 }
 VAR_14 = VAR_16->func(VAR_16, VAR_15, VAR_11, VAR_13, VAR_18, (void *)VAR_19->data);

 if (VAR_18->resultcode.data == VAR_9) {
  if (VAR_14 != 0) {
   FUNC_0("get/set failure, result=%d\n", VAR_14);
   VAR_18->resultcode.data =
       VAR_7;
  } else {
   if (VAR_15) {
    VAR_18->mibattribute.status =
        VAR_4;
    VAR_19->status =
        VAR_4;
   }
  }
 }

done:
 return 0;
}
