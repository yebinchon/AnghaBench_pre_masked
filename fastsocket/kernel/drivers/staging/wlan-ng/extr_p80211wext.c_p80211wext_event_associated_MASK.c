
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int netdev; int bssid; } ;
typedef TYPE_2__ wlandevice_t ;
struct TYPE_4__ {int sa_data; int sa_family; } ;
union iwreq_data {TYPE_1__ ap_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,union iwreq_data*,int *) ;
 scalar_t__ VAR_3 ;

int FUNC_3(wlandevice_t * VAR_4, int VAR_5)
{
 union iwreq_data VAR_6;


 VAR_6.ap_addr.sa_family = VAR_0;
 if (VAR_5)
  FUNC_0(VAR_6.ap_addr.sa_data, VAR_4->bssid, VAR_1);
 else
  FUNC_1(VAR_6.ap_addr.sa_data, 0, VAR_1);

 if (VAR_3)
  FUNC_2(VAR_4->netdev, VAR_2, &VAR_6, ((void*)0));

 if (!VAR_5)
  goto done;



done:
 return 0;
}
