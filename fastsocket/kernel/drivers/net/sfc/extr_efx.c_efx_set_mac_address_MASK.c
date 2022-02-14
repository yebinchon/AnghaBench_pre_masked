
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {char* sa_data; } ;
struct net_device {int addr_len; int dev_addr; } ;
struct efx_nic {int mac_lock; TYPE_1__* type; int net_dev; } ;
struct TYPE_2__ {int (* reconfigure_mac ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct efx_nic* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct efx_nic*,int ,int ,char*,char*) ;
 int FUNC_7 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_2, void *VAR_3)
{
 struct efx_nic *VAR_4 = FUNC_5(VAR_2);
 struct sockaddr *VAR_5 = VAR_3;
 char *VAR_6 = VAR_5->sa_data;

 if (!FUNC_1(VAR_6)) {
  FUNC_6(VAR_4, VAR_1, VAR_4->net_dev,
     "invalid ethernet MAC address requested: %pM\n",
     VAR_6);
  return -VAR_0;
 }

 FUNC_2(VAR_2->dev_addr, VAR_6, VAR_2->addr_len);
 FUNC_0(VAR_4);


 FUNC_3(&VAR_4->mac_lock);
 VAR_4->type->reconfigure_mac(VAR_4);
 FUNC_4(&VAR_4->mac_lock);

 return 0;
}
