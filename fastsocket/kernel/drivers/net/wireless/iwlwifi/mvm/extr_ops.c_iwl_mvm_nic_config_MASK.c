
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct iwl_op_mode {int dummy; } ;
struct iwl_mvm {TYPE_2__* trans; TYPE_1__* fw; } ;
struct TYPE_5__ {int hw_rev; } ;
struct TYPE_4__ {int phy_config; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (struct iwl_mvm*,char*,int,int,int) ;
 struct iwl_mvm* FUNC_3 (struct iwl_op_mode*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int,int) ;

__attribute__((used)) static void FUNC_7(struct iwl_op_mode *VAR_21)
{
 struct iwl_mvm *VAR_22 = FUNC_3(VAR_21);
 u8 VAR_23, VAR_24, VAR_25;
 u32 VAR_26 = 0;

 VAR_23 = (VAR_22->fw->phy_config & VAR_19) >>
     VAR_20;
 VAR_24 = (VAR_22->fw->phy_config & VAR_17) >>
     VAR_18;
 VAR_25 = (VAR_22->fw->phy_config & VAR_15) >>
     VAR_16;


 VAR_26 |= FUNC_1(VAR_22->trans->hw_rev) <<
    VAR_11;
 VAR_26 |= FUNC_0(VAR_22->trans->hw_rev) <<
    VAR_10;


 VAR_26 |= VAR_23 << VAR_14;
 VAR_26 |= VAR_24 << VAR_13;
 VAR_26 |= VAR_25 << VAR_12;

 FUNC_4((VAR_23 << VAR_14) &
   ~VAR_9);


 VAR_26 |= VAR_4;

 FUNC_6(VAR_22->trans, VAR_2,
    VAR_5 |
    VAR_6 |
    VAR_9 |
    VAR_8 |
    VAR_7 |
    VAR_4 |
    VAR_3,
    VAR_26);

 FUNC_2(VAR_22, "Radio type=0x%x-0x%x-0x%x\n", VAR_23,
         VAR_24, VAR_25);






 FUNC_5(VAR_22->trans, VAR_1,
          VAR_0,
          ~VAR_0);
}
