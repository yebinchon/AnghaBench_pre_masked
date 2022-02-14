
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct net_device {int dummy; } ;
struct falcon_nic_data {int mdio_lock; } ;
struct efx_nic {int net_dev; struct falcon_nic_data* nic_data; } ;
typedef int efx_oword_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
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
 int FUNC_3 (struct efx_nic*,int *,int ) ;
 int FUNC_4 (struct efx_nic*,int *,int ) ;
 int FUNC_5 (struct efx_nic*) ;
 int VAR_11 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct efx_nic* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct efx_nic*,int ,int ,char*,int,int,int ,int) ;
 int FUNC_10 (struct efx_nic*,int ,int ,char*,int,int,int ,int) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_12,
       int VAR_13, int VAR_14, u16 VAR_15)
{
 struct efx_nic *VAR_16 = FUNC_8(VAR_12);
 struct falcon_nic_data *VAR_17 = VAR_16->nic_data;
 efx_oword_t VAR_18;
 int VAR_19;

 FUNC_6(&VAR_17->mdio_lock);


 VAR_19 = FUNC_5(VAR_16);
 if (VAR_19)
  goto out;

 FUNC_1(VAR_18, VAR_2, VAR_15);
 FUNC_4(VAR_16, &VAR_18, VAR_9);

 FUNC_2(VAR_18, VAR_3, VAR_13,
        VAR_0, VAR_14);
 FUNC_4(VAR_16, &VAR_18, VAR_8);


 FUNC_2(VAR_18, VAR_4, 1, VAR_1, 0);
 FUNC_4(VAR_16, &VAR_18, VAR_7);


 VAR_19 = FUNC_5(VAR_16);
 if (VAR_19 == 0) {
  FUNC_3(VAR_16, &VAR_18, VAR_10);
  VAR_19 = FUNC_0(VAR_18, VAR_6);
  FUNC_10(VAR_16, VAR_11, VAR_16->net_dev,
      "read from MDIO %d register %d.%d, got %04x\n",
      VAR_13, VAR_14, VAR_15, VAR_19);
 } else {

  FUNC_2(VAR_18,
         VAR_5, 0,
         VAR_1, 1);
  FUNC_4(VAR_16, &VAR_18, VAR_7);

  FUNC_9(VAR_16, VAR_11, VAR_16->net_dev,
     "read from MDIO %d register %d.%d, got error %d\n",
     VAR_13, VAR_14, VAR_15, VAR_19);
 }

out:
 FUNC_7(&VAR_17->mdio_lock);
 return VAR_19;
}
