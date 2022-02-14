
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct efx_nic {int port_enabled; int net_dev; int mac_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*) ;

__attribute__((used)) static void FUNC_5(struct efx_nic *VAR_1)
{
 FUNC_4(VAR_1, VAR_0, VAR_1->net_dev, "stop port\n");

 FUNC_0(&VAR_1->mac_lock);
 VAR_1->port_enabled = 0;
 FUNC_1(&VAR_1->mac_lock);


 FUNC_2(VAR_1->net_dev);
 FUNC_3(VAR_1->net_dev);
}
