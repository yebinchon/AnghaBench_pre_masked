
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct il_priv {TYPE_1__* cfg; int pci_dev; } ;
struct TYPE_2__ {scalar_t__ use_bsm; scalar_t__ pll_cfg_val; scalar_t__ set_l0s; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_2 (struct il_priv*,int ,int ,int ,int) ;
 int FUNC_3 (struct il_priv*,int ,scalar_t__) ;
 int FUNC_4 (struct il_priv*,int ,scalar_t__) ;
 int FUNC_5 (struct il_priv*,int ,int ) ;
 int FUNC_6 (struct il_priv*,int ,int) ;
 int FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int) ;

int
FUNC_9(struct il_priv *VAR_20)
{
 int VAR_21 = 0;
 u16 VAR_22;

 FUNC_0("Init card's basic functions\n");







 FUNC_4(VAR_20, VAR_8,
     VAR_9);





 FUNC_4(VAR_20, VAR_8,
     VAR_10);


 FUNC_4(VAR_20, VAR_6, VAR_7);






 FUNC_4(VAR_20, VAR_16,
     VAR_17);
 if (VAR_20->cfg->set_l0s) {
  FUNC_7(VAR_20->pci_dev, VAR_18, &VAR_22);
  if (VAR_22 & VAR_19) {

   FUNC_4(VAR_20, VAR_11,
       VAR_12);
   FUNC_1("L1 Enabled; Disabling L0S\n");
  } else {

   FUNC_3(VAR_20, VAR_11,
         VAR_12);
   FUNC_1("L1 Disabled; Enabling L0S\n");
  }
 }


 if (VAR_20->cfg->pll_cfg_val)
  FUNC_4(VAR_20, VAR_5,
      VAR_20->cfg->pll_cfg_val);





 FUNC_4(VAR_20, VAR_13, VAR_14);






 VAR_21 =
     FUNC_2(VAR_20, VAR_13,
    VAR_15,
    VAR_15, 25000);
 if (VAR_21 < 0) {
  FUNC_0("Failed to init the card\n");
  goto out;
 }
 if (VAR_20->cfg->use_bsm)
  FUNC_6(VAR_20, VAR_0,
      VAR_2 | VAR_1);
 else
  FUNC_6(VAR_20, VAR_0, VAR_2);
 FUNC_8(20);


 FUNC_5(VAR_20, VAR_3,
    VAR_4);

out:
 return VAR_21;
}
