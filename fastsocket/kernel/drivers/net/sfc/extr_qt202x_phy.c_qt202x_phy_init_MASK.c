
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct efx_nic {scalar_t__ phy_type; int net_dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*) ;
 int FUNC_5 (struct efx_nic*,int ,int ,char*,int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (struct efx_nic*) ;
 int FUNC_7 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_8(struct efx_nic *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_7(VAR_3);
 if (VAR_5) {
  FUNC_4(VAR_3, VAR_2, VAR_3->net_dev, "PHY init failed\n");
  return VAR_5;
 }

 VAR_4 = FUNC_3(VAR_3, VAR_0);
 FUNC_5(VAR_3, VAR_2, VAR_3->net_dev,
     "PHY ID reg %x (OUI %06x model %02x revision %x)\n",
     VAR_4, FUNC_1(VAR_4), FUNC_0(VAR_4),
     FUNC_2(VAR_4));

 if (VAR_3->phy_type == VAR_1)
  FUNC_6(VAR_3);

 return 0;
}
