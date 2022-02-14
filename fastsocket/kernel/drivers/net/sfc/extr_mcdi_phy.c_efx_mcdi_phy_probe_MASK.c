
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int mmds; int mode_support; int prtad; } ;
struct efx_nic {int loopback_modes; int wanted_fc; int link_state; int link_advertising; TYPE_1__ mdio; int mdio_bus; int phy_type; struct efx_mcdi_phy_data* phy_data; } ;
struct efx_mcdi_phy_data {int mmd_mask; int forced_cap; int supported_cap; int media; int port; int channel; int type; } ;
typedef int outbuf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 int FUNC_1 (int *,int ) ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 scalar_t__ VAR_48 ;
 scalar_t__ VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 scalar_t__ VAR_52 ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 scalar_t__ VAR_55 ;
 scalar_t__ VAR_56 ;
 scalar_t__ VAR_57 ;
 scalar_t__ VAR_58 ;
 scalar_t__ VAR_59 ;
 scalar_t__ VAR_60 ;
 scalar_t__ VAR_61 ;
 scalar_t__ VAR_62 ;
 scalar_t__ VAR_63 ;
 scalar_t__ VAR_64 ;
 scalar_t__ VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int FUNC_2 (struct efx_nic*,int) ;
 int FUNC_3 (struct efx_nic*,struct efx_mcdi_phy_data*) ;
 int FUNC_4 (struct efx_nic*,int*) ;
 int FUNC_5 (struct efx_nic*,int *,int,int,int) ;
 int FUNC_6 (struct efx_nic*,int ,int *,int ,int *,int,int *) ;
 int FUNC_7 (struct efx_mcdi_phy_data*) ;
 struct efx_mcdi_phy_data* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct efx_nic *VAR_71)
{
 struct efx_mcdi_phy_data *VAR_72;
 u8 VAR_73[VAR_38];
 u32 VAR_74;
 int VAR_75;


 VAR_72 = FUNC_8(sizeof(*VAR_72), VAR_8);
 if (VAR_72 == ((void*)0))
  return -VAR_3;

 VAR_75 = FUNC_3(VAR_71, VAR_72);
 if (VAR_75 != 0)
  goto fail;


 FUNC_0(VAR_37 != 0);
 VAR_75 = FUNC_6(VAR_71, VAR_36, ((void*)0), 0,
     VAR_73, sizeof(VAR_73), ((void*)0));
 if (VAR_75)
  goto fail;


 VAR_71->phy_data = VAR_72;
 VAR_71->phy_type = VAR_72->type;

 VAR_71->mdio_bus = VAR_72->channel;
 VAR_71->mdio.prtad = VAR_72->port;
 VAR_71->mdio.mmds = VAR_72->mmd_mask & ~(1 << VAR_66);
 VAR_71->mdio.mode_support = 0;
 if (VAR_72->mmd_mask & (1 << VAR_66))
  VAR_71->mdio.mode_support |= VAR_69;
 if (VAR_72->mmd_mask & ~(1 << VAR_66))
  VAR_71->mdio.mode_support |= VAR_70 | VAR_68;

 VAR_74 = FUNC_1(VAR_73, VAR_4);
 if (VAR_74 & (1 << VAR_67))
  VAR_71->link_advertising =
   FUNC_9(VAR_72->media, VAR_74);
 else
  VAR_72->forced_cap = VAR_74;


 FUNC_0(VAR_15 != VAR_45);
 FUNC_0(VAR_9 != VAR_39);
 FUNC_0(VAR_10 != VAR_40);
 FUNC_0(VAR_32 != VAR_62);
 FUNC_0(VAR_34 != VAR_64);
 FUNC_0(VAR_22 != VAR_52);
 FUNC_0(VAR_11 != VAR_41);
 FUNC_0(VAR_20 != VAR_50);
 FUNC_0(VAR_31 != VAR_61);
 FUNC_0(VAR_27 != VAR_57);
 FUNC_0(VAR_23 != VAR_53);
 FUNC_0(VAR_12 != VAR_42);
 FUNC_0(VAR_21 != VAR_51);
 FUNC_0(VAR_28 != VAR_58);
 FUNC_0(VAR_14 != VAR_44);
 FUNC_0(VAR_17 != VAR_47);
 FUNC_0(VAR_16 != VAR_46);
 FUNC_0(VAR_19 != VAR_49);
 FUNC_0(VAR_35 != VAR_65);
 FUNC_0(VAR_33 != VAR_63);
 FUNC_0(VAR_24 != VAR_54);
 FUNC_0(VAR_25 != VAR_55);
 FUNC_0(VAR_26 != VAR_56);
 FUNC_0(VAR_13 != VAR_43);
 FUNC_0(VAR_29 != VAR_59);
 FUNC_0(VAR_30 != VAR_60);
 FUNC_0(VAR_18 != VAR_48);

 VAR_75 = FUNC_4(VAR_71, &VAR_71->loopback_modes);
 if (VAR_75 != 0)
  goto fail;


 VAR_71->loopback_modes &= ~(1 << VAR_15);


 FUNC_5(
  VAR_71, &VAR_71->link_state,
  FUNC_1(VAR_73, VAR_7),
  FUNC_1(VAR_73, VAR_6),
  FUNC_1(VAR_73, VAR_5));


 VAR_71->wanted_fc = VAR_1 | VAR_2;
 if (VAR_72->supported_cap & (1 << VAR_67))
  VAR_71->wanted_fc |= VAR_0;
 FUNC_2(VAR_71, VAR_71->wanted_fc);

 return 0;

fail:
 FUNC_7(VAR_72);
 return VAR_75;
}
