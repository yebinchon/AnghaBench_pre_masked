
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct efx_nic {int phy_mode; int net_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct efx_nic*) ;
 int FUNC_1 (struct efx_nic*) ;
 scalar_t__ FUNC_2 (struct efx_nic*) ;
 scalar_t__ FUNC_3 (struct efx_nic*,int ) ;
 int FUNC_4 (struct efx_nic*) ;
 int FUNC_5 (struct efx_nic*) ;
 int VAR_4 ;
 struct efx_nic* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*,int ) ;
 int FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_5)
{
 struct efx_nic *VAR_6 = FUNC_6(VAR_5);
 int VAR_7;

 FUNC_7(VAR_6, VAR_4, VAR_6->net_dev, "opening device on CPU %d\n",
    FUNC_8());

 VAR_7 = FUNC_0(VAR_6);
 if (VAR_7)
  return VAR_7;
 if (VAR_6->phy_mode & VAR_2)
  return -VAR_0;
 if (FUNC_2(VAR_6) && FUNC_3(VAR_6, VAR_3))
  return -VAR_1;



 FUNC_1(VAR_6);

 FUNC_5(VAR_6);
 FUNC_4(VAR_6);
 return 0;
}
