
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct falcon_board {void* hwmon_client; void* ioexp_client; int i2c_adap; } ;
struct efx_nic {int phy_mode; int net_dev; TYPE_1__* pci_dev; } ;
struct TYPE_5__ {int addr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 struct falcon_board* FUNC_1 (struct efx_nic*) ;
 int FUNC_2 (struct efx_nic*) ;
 int VAR_5 ;
 void* FUNC_3 (int *,TYPE_2__*) ;
 void* FUNC_4 (int *,int ) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct efx_nic*,int ,int ,char*) ;
 TYPE_2__ VAR_6 ;
 int FUNC_8 (struct efx_nic*) ;
 int FUNC_9 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_10(struct efx_nic *VAR_7)
{
 struct falcon_board *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;





 VAR_8->hwmon_client =
  FUNC_4(&VAR_8->i2c_adap, VAR_6.addr);

 if (!VAR_8->hwmon_client)
  return -VAR_0;


 VAR_9 = FUNC_5(VAR_8->hwmon_client,
           VAR_1, 90);
 if (VAR_9)
  goto fail_hwmon;

 VAR_8->ioexp_client = FUNC_4(&VAR_8->i2c_adap, VAR_2);
 if (!VAR_8->ioexp_client) {
  VAR_9 = -VAR_0;
  goto fail_hwmon;
 }

 if (VAR_7->phy_mode & VAR_3) {


  FUNC_2(VAR_7);
 }
 VAR_9 = FUNC_9(VAR_7);
 if (VAR_9)
  goto fail_ioexp;

 VAR_9 = FUNC_0(&VAR_7->pci_dev->dev, &VAR_4);
 if (VAR_9)
  goto fail_on;

 FUNC_7(VAR_7, VAR_5, VAR_7->net_dev, "PHY is powered on\n");
 return 0;

fail_on:
 FUNC_8(VAR_7);
fail_ioexp:
 FUNC_6(VAR_8->ioexp_client);
fail_hwmon:
 FUNC_6(VAR_8->hwmon_client);
 return VAR_9;
}
