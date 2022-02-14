
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bssid; } ;
typedef TYPE_1__ wlandevice_t ;
struct sockaddr {int sa_family; int sa_data; } ;
struct iw_request_info {int dummy; } ;
struct TYPE_5__ {TYPE_1__* ml_priv; } ;
typedef TYPE_2__ netdevice_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(netdevice_t *VAR_2,
       struct iw_request_info *VAR_3,
       struct sockaddr *VAR_4, char *VAR_5)
{

 wlandevice_t *VAR_6 = VAR_2->ml_priv;

 FUNC_0(VAR_4->sa_data, VAR_6->bssid, VAR_1);
 VAR_4->sa_family = VAR_0;

 return 0;
}
