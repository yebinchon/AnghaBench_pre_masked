
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t len; int data; } ;
struct TYPE_6__ {TYPE_1__ ssid; } ;
typedef TYPE_2__ wlandevice_t ;
struct iw_request_info {int dummy; } ;
struct iw_point {size_t length; int flags; } ;
struct TYPE_7__ {TYPE_2__* ml_priv; } ;
typedef TYPE_3__ netdevice_t ;


 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (char*,int ,int) ;

__attribute__((used)) static int FUNC_2(netdevice_t *VAR_0,
          struct iw_request_info *VAR_1,
          struct iw_point *VAR_2, char *VAR_3)
{
 wlandevice_t *VAR_4 = VAR_0->ml_priv;

 if (VAR_4->ssid.len) {
  VAR_2->length = VAR_4->ssid.len;
  VAR_2->flags = 1;
  FUNC_0(VAR_3, VAR_4->ssid.data, VAR_2->length);
  VAR_3[VAR_2->length] = 0;
 } else {
  FUNC_1(VAR_3, 0, sizeof(VAR_4->ssid.data));
  VAR_2->length = 0;
  VAR_2->flags = 0;
 }

 return 0;
}
