
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int hostwep; int netdev; } ;
typedef TYPE_4__ wlandevice_t ;
typedef int u8 ;
struct iw_point {int length; } ;
struct TYPE_9__ {int len; int data; } ;
struct TYPE_10__ {TYPE_2__ data; } ;
struct TYPE_8__ {int data; } ;
struct TYPE_12__ {TYPE_3__ ssid; int msgcode; TYPE_1__ authtype; } ;
typedef TYPE_5__ p80211msg_lnxreq_autojoin_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_4__*,int *) ;
 int FUNC_2 (int ,int *,struct iw_point*,char*) ;

__attribute__((used)) static int FUNC_3(wlandevice_t *VAR_6)
{
 p80211msg_lnxreq_autojoin_t VAR_7;
 struct iw_point VAR_8;
 char VAR_9[VAR_3];

 int VAR_10;
 int VAR_11 = 0;


 VAR_10 = FUNC_2(VAR_6->netdev, ((void*)0), &VAR_8, VAR_9);

 if (VAR_10) {
  VAR_11 = -VAR_1;
  goto exit;
 }

 if (VAR_6->hostwep & VAR_2)
  VAR_7.authtype.data = VAR_5;
 else
  VAR_7.authtype.data = VAR_4;

 VAR_7.msgcode = VAR_0;



 if (VAR_8.length && VAR_9[VAR_8.length - 1] == '\0')
  VAR_8.length = VAR_8.length - 1;

 FUNC_0(VAR_7.ssid.data.data, VAR_9, VAR_8.length);
 VAR_7.ssid.data.len = VAR_8.length;

 VAR_10 = FUNC_1(VAR_6, (u8 *) & VAR_7);

 if (VAR_10) {
  VAR_11 = -VAR_1;
  goto exit;
 }

exit:

 return VAR_11;

}
