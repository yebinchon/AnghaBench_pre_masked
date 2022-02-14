
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efx_nic {scalar_t__ phy_type; int net_dev; } ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* init_phy ) (struct efx_nic*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*,int ,int,int) ;
 TYPE_2__* FUNC_1 (struct efx_nic*) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_6(struct efx_nic *VAR_5)
{
 int VAR_6;

 if (VAR_5->phy_type == VAR_1) {


  VAR_6 = FUNC_4(VAR_5);
  if (VAR_6 < 0)
   goto fail;
 } else {


  VAR_6 = FUNC_0(VAR_5, VAR_0,
     VAR_2 /
     VAR_3,
     VAR_3);
  if (VAR_6 < 0)
   goto fail;
 }


 FUNC_2(250);

 FUNC_1(VAR_5)->type->init_phy(VAR_5);

 return 0;

 fail:
 FUNC_3(VAR_5, VAR_4, VAR_5->net_dev, "PHY reset timed out\n");
 return VAR_6;
}
