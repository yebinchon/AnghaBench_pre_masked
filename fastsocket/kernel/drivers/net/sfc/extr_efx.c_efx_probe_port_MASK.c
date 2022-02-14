
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {TYPE_2__* net_dev; TYPE_1__* type; int phy_mode; } ;
struct TYPE_4__ {int perm_addr; int dev_addr; } ;
struct TYPE_3__ {int (* probe_port ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct efx_nic*,int ,TYPE_2__*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_3(struct efx_nic *VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_4, VAR_3, VAR_4->net_dev, "create port\n");

 if (VAR_2)
  VAR_4->phy_mode = VAR_1;


 VAR_5 = VAR_4->type->probe_port(VAR_4);
 if (VAR_5)
  return VAR_5;


 FUNC_0(VAR_4->net_dev->dev_addr, VAR_4->net_dev->perm_addr, VAR_0);

 return 0;
}
