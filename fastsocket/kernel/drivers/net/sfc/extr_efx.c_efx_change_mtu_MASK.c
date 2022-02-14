
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int mtu; } ;
struct efx_nic {int net_dev; int mac_lock; TYPE_1__* type; } ;
struct TYPE_2__ {int (* reconfigure_mac ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int FUNC_3 (struct efx_nic*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct efx_nic* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_10(struct net_device *VAR_3, int VAR_4)
{
 struct efx_nic *VAR_5 = FUNC_6(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_6)
  return VAR_6;
 if (VAR_4 > VAR_0)
  return -VAR_1;

 FUNC_7(VAR_5, VAR_2, VAR_5->net_dev, "changing MTU to %d\n", VAR_4);

 FUNC_1(VAR_5);
 FUNC_3(VAR_5);

 FUNC_4(&VAR_5->mac_lock);
 VAR_3->mtu = VAR_4;
 VAR_5->type->reconfigure_mac(VAR_5);
 FUNC_5(&VAR_5->mac_lock);

 FUNC_2(VAR_5);
 FUNC_8(VAR_5->net_dev);
 return 0;
}
