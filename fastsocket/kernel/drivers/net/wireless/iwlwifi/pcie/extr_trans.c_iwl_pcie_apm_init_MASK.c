
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_trans_pcie {int status; } ;
struct iwl_trans {TYPE_2__* cfg; } ;
struct TYPE_4__ {TYPE_1__* base_params; } ;
struct TYPE_3__ {scalar_t__ pll_cfg_val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (struct iwl_trans*,char*) ;
 struct iwl_trans_pcie* FUNC_1 (struct iwl_trans*) ;
 int VAR_15 ;
 int FUNC_2 (struct iwl_trans*) ;
 int FUNC_3 (struct iwl_trans*,int ,int ,int ,int) ;
 int FUNC_4 (struct iwl_trans*,int ,scalar_t__) ;
 int FUNC_5 (struct iwl_trans*,int ,int ) ;
 int FUNC_6 (struct iwl_trans*,int ,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct iwl_trans *VAR_16)
{
 struct iwl_trans_pcie *VAR_17 = FUNC_1(VAR_16);
 int VAR_18 = 0;
 FUNC_0(VAR_16, "Init card's basic functions\n");







 FUNC_4(VAR_16, VAR_7,
      VAR_8);





 FUNC_4(VAR_16, VAR_7,
      VAR_9);


 FUNC_4(VAR_16, VAR_5, VAR_6);





 FUNC_4(VAR_16, VAR_13,
      VAR_14);

 FUNC_2(VAR_16);


 if (VAR_16->cfg->base_params->pll_cfg_val)
  FUNC_4(VAR_16, VAR_4,
       VAR_16->cfg->base_params->pll_cfg_val);





 FUNC_4(VAR_16, VAR_10, VAR_11);






 VAR_18 = FUNC_3(VAR_16, VAR_10,
      VAR_12,
      VAR_12, 25000);
 if (VAR_18 < 0) {
  FUNC_0(VAR_16, "Failed to init the card\n");
  goto out;
 }
 FUNC_6(VAR_16, VAR_0, VAR_1);
 FUNC_8(20);


 FUNC_5(VAR_16, VAR_2,
     VAR_3);

 FUNC_7(VAR_15, &VAR_17->status);

out:
 return VAR_18;
}
