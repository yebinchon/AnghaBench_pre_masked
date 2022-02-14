
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int hostwep; } ;
typedef TYPE_3__ wlandevice_t ;
struct TYPE_12__ {int msgcode; } ;
typedef TYPE_4__ p80211msg_t ;
struct TYPE_9__ {int data; } ;
struct TYPE_10__ {int data; } ;
struct TYPE_13__ {TYPE_1__ encrypt; TYPE_2__ decrypt; } ;
typedef TYPE_5__ p80211msg_lnxreq_hostwep_t ;
typedef int p80211msg_dot11req_mibget_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int *,int) ;

__attribute__((used)) static void FUNC_1(wlandevice_t *VAR_3, p80211msg_t *VAR_4)
{
 switch (VAR_4->msgcode) {

 case 128:{
   p80211msg_lnxreq_hostwep_t *VAR_5 =
       (p80211msg_lnxreq_hostwep_t *) VAR_4;
   VAR_3->hostwep &=
       ~(VAR_0 | VAR_1);
   if (VAR_5->decrypt.data == VAR_2)
    VAR_3->hostwep |= VAR_0;
   if (VAR_5->encrypt.data == VAR_2)
    VAR_3->hostwep |= VAR_1;

   break;
  }
 case 130:
 case 129:{
   int VAR_6 = (VAR_4->msgcode == 130);
   p80211msg_dot11req_mibget_t *VAR_7 =
       (p80211msg_dot11req_mibget_t *) VAR_4;
   FUNC_0(VAR_3, VAR_7, VAR_6);
  }
 default:
  ;
 }

 return;
}
