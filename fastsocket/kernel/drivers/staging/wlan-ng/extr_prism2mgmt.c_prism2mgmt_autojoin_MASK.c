
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int ssid; int macmode; int * priv; } ;
typedef TYPE_4__ wlandevice_t ;
typedef int u8 ;
typedef int u16 ;
typedef int p80211pstrd_t ;
struct TYPE_9__ {int data; int status; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_7__ {scalar_t__ data; } ;
struct TYPE_11__ {TYPE_3__ resultcode; TYPE_2__ ssid; TYPE_1__ authtype; } ;
typedef TYPE_5__ p80211msg_lnxreq_autojoin_t ;
typedef int hfa384x_t ;
typedef int hfa384x_bytestr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int *,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int *,int *) ;

int FUNC_7(wlandevice_t *VAR_12, void *VAR_13)
{
 hfa384x_t *VAR_14 = VAR_12->priv;
 int VAR_15 = 0;
 u16 VAR_16;
 u16 VAR_17;
 p80211msg_lnxreq_autojoin_t *VAR_18 = VAR_13;
 p80211pstrd_t *VAR_19;
 u8 VAR_20[256];
 hfa384x_bytestr_t *VAR_21 = (hfa384x_bytestr_t *) VAR_20;

 VAR_12->macmode = VAR_11;


 FUNC_4(&VAR_12->ssid, &VAR_18->ssid.data, sizeof(VAR_18->ssid.data));


 FUNC_0(VAR_14, 0);



 FUNC_3(VAR_14, VAR_7, 0x000f);


 if (VAR_18->authtype.data == VAR_8)
  VAR_16 = VAR_1;
 else
  VAR_16 = VAR_0;

 FUNC_3(VAR_14, VAR_3, VAR_16);


 FUNC_5(VAR_20, 0, 256);
 VAR_19 = (p80211pstrd_t *) & (VAR_18->ssid.data);
 FUNC_6(VAR_21, VAR_19);
 VAR_15 = FUNC_2(VAR_14, VAR_4,
     VAR_20,
     VAR_5);
 VAR_17 = VAR_2;

 FUNC_3(VAR_14, VAR_6, VAR_17);


 FUNC_1(VAR_14, 0);


 VAR_18->resultcode.status = VAR_9;
 VAR_18->resultcode.data = VAR_10;

 return VAR_15;
}
