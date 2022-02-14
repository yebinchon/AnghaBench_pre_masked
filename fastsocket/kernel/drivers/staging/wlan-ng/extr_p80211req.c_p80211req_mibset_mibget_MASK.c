
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int hostwep; } ;
typedef TYPE_2__ wlandevice_t ;
typedef int u8 ;
typedef int u32 ;
struct TYPE_11__ {int len; } ;
typedef TYPE_3__ p80211pstrd_t ;
struct TYPE_9__ {scalar_t__ data; } ;
struct TYPE_12__ {TYPE_1__ mibattribute; } ;
typedef TYPE_4__ p80211msg_dot11req_mibget_t ;
struct TYPE_13__ {int did; int * data; } ;
typedef TYPE_5__ p80211itemd_t ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(wlandevice_t *VAR_5,
       p80211msg_dot11req_mibget_t *VAR_6,
       int VAR_7)
{
 p80211itemd_t *VAR_8 = (p80211itemd_t *) VAR_6->mibattribute.data;
 p80211pstrd_t *VAR_9 = (p80211pstrd_t *) VAR_8->data;
 u8 *VAR_10 = VAR_8->data + sizeof(p80211pstrd_t);

 switch (VAR_8->did) {
 case 131:{
   if (!VAR_7)
    FUNC_0(VAR_5, 0, VAR_10, VAR_9->len);
   break;
  }
 case 130:{
   if (!VAR_7)
    FUNC_0(VAR_5, 1, VAR_10, VAR_9->len);
   break;
  }
 case 129:{
   if (!VAR_7)
    FUNC_0(VAR_5, 2, VAR_10, VAR_9->len);
   break;
  }
 case 128:{
   if (!VAR_7)
    FUNC_0(VAR_5, 3, VAR_10, VAR_9->len);
   break;
  }
 case 132:{
   u32 *VAR_11 = (u32 *) VAR_8->data;

   if (VAR_7) {
    *VAR_11 =
        VAR_5->hostwep & VAR_0;
   } else {
    VAR_5->hostwep &= ~(VAR_0);

    VAR_5->hostwep |=
        (*VAR_11 & VAR_0);
   }
   break;
  }
 case 133:{
   u32 *VAR_12 = (u32 *) VAR_8->data;

   if (VAR_7) {
    if (VAR_5->hostwep & VAR_2)
     *VAR_12 = VAR_4;
    else
     *VAR_12 = VAR_3;
   } else {
    VAR_5->hostwep &= ~(VAR_2);
    if (*VAR_12 == VAR_4)
     VAR_5->hostwep |=
         VAR_2;
   }
   break;
  }
 case 134:{
   u32 *VAR_13 = (u32 *) VAR_8->data;

   if (VAR_7) {
    if (VAR_5->hostwep &
        VAR_1)
     *VAR_13 = VAR_4;
    else
     *VAR_13 = VAR_3;
   } else {
    VAR_5->hostwep &=
        ~(VAR_1);
    if (*VAR_13 == VAR_4)
     VAR_5->hostwep |=
         VAR_1;
   }
   break;
  }
 default:
  ;
 }

 return 0;
}
