
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_client {int dummy; } ;
struct efx_nic {int phy_mode; int net_dev; } ;
struct TYPE_2__ {struct i2c_client* hwmon_client; struct i2c_client* ioexp_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_1__* FUNC_0 (struct efx_nic*) ;
 int VAR_16 ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct efx_nic*,int ,int ,char*,...) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct efx_nic*) ;

__attribute__((used)) static int FUNC_7(struct efx_nic *VAR_17)
{
 struct i2c_client *VAR_18 = FUNC_0(VAR_17)->ioexp_client;
 struct i2c_client *VAR_19 = FUNC_0(VAR_17)->hwmon_client;
 unsigned int VAR_20, VAR_21;
 int VAR_22;
 u8 VAR_23;


 VAR_22 = FUNC_1(VAR_19, VAR_2);
 if (VAR_22 < 0)
  return VAR_22;


 VAR_22 = FUNC_2(VAR_18, VAR_3, 0x00);
 if (VAR_22)
  return VAR_22;
 VAR_22 = FUNC_2(VAR_18, VAR_12,
           0xff & ~(1 << VAR_14));
 if (VAR_22)
  goto fail_on;




 VAR_22 = FUNC_1(VAR_18, VAR_9);
 if (VAR_22 < 0)
  goto fail_on;
 VAR_23 = 0xff & ~((0 << VAR_5) | (0 << VAR_6) |
         (0 << VAR_7) | (0 << VAR_8) |
         (0 << VAR_4));
 if (VAR_22 != VAR_23) {
  FUNC_4(VAR_17, VAR_16, VAR_17->net_dev, "power-cycling PHY\n");
  VAR_22 = FUNC_2(VAR_18, VAR_9, VAR_23);
  if (VAR_22)
   goto fail_on;
  FUNC_5(VAR_1);
 }

 for (VAR_20 = 0; VAR_20 < 20; ++VAR_20) {

  VAR_23 = 0xff & ~((1 << VAR_5) | (1 << VAR_6) |
          (1 << VAR_7) | (1 << VAR_8) |
          (1 << VAR_10));
  if (VAR_17->phy_mode & VAR_15)
   VAR_23 |= 1 << VAR_7;

  VAR_22 = FUNC_2(VAR_18, VAR_9, VAR_23);
  if (VAR_22)
   goto fail_on;
  FUNC_3(10);


  VAR_23 &= ~(1 << VAR_4);
  VAR_22 = FUNC_2(VAR_18, VAR_9, VAR_23);
  if (VAR_22)
   goto fail_on;

  FUNC_4(VAR_17, VAR_16, VAR_17->net_dev,
      "waiting for DSP boot (attempt %d)...\n", VAR_20);




  if (VAR_17->phy_mode & VAR_15) {
   FUNC_5(VAR_1);
   return 0;
  }

  for (VAR_21 = 0; VAR_21 < 10; ++VAR_21) {
   FUNC_3(100);


   VAR_22 = FUNC_1(VAR_18, VAR_13);
   if (VAR_22 < 0)
    goto fail_on;
   if (VAR_22 & (1 << VAR_11))
    return 0;
  }
 }

 FUNC_4(VAR_17, VAR_16, VAR_17->net_dev, "timed out waiting for DSP boot\n");
 VAR_22 = -VAR_0;
fail_on:
 FUNC_6(VAR_17);
 return VAR_22;
}
