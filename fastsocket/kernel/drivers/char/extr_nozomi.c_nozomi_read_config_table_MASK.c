
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_5__ {scalar_t__ enabled; int diag_dl; int mdm_dl; int mdm_ul; } ;
struct TYPE_7__ {scalar_t__ signature; scalar_t__ version; TYPE_1__ toggle; } ;
struct nozomi {int last_ier; int reg_fcr; TYPE_4__* port; TYPE_3__ config_table; TYPE_2__* pdev; int state; int reg_ier; scalar_t__ base_addr; } ;
struct ctrl_ul {int dummy; } ;
struct ctrl_dl {int dummy; } ;
struct config_table {int dummy; } ;
struct TYPE_8__ {int * ul_addr; int ctrl_ul; int ctrl_dl; int fifo_ul; int toggle_dl; int toggle_ul; } ;
struct TYPE_6__ {int dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int *,char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (struct nozomi*) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (scalar_t__*,scalar_t__,int) ;
 int FUNC_7 (struct nozomi*) ;
 int FUNC_8 (int ,scalar_t__*,int) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int FUNC_10(struct nozomi *VAR_14)
{
 FUNC_6((u32 *) &VAR_14->config_table, VAR_14->base_addr + 0,
      sizeof(struct config_table));

 if (VAR_14->config_table.signature != VAR_2) {
  FUNC_1(&VAR_14->pdev->dev, "ConfigTable Bad! 0x%08X != 0x%08X\n",
   VAR_14->config_table.signature, VAR_2);
  return 0;
 }

 if ((VAR_14->config_table.version == 0)
     || (VAR_14->config_table.toggle.enabled == VAR_13)) {
  int VAR_15;
  FUNC_0("Second phase, configuring card");

  FUNC_7(VAR_14);

  VAR_14->port[VAR_12].toggle_ul = VAR_14->config_table.toggle.mdm_ul;
  VAR_14->port[VAR_12].toggle_dl = VAR_14->config_table.toggle.mdm_dl;
  VAR_14->port[VAR_11].toggle_dl = VAR_14->config_table.toggle.diag_dl;
  FUNC_0("toggle ports: MDM UL:%d MDM DL:%d, DIAG DL:%d",
     VAR_14->port[VAR_12].toggle_ul,
     VAR_14->port[VAR_12].toggle_dl, VAR_14->port[VAR_11].toggle_dl);

  FUNC_3(VAR_14);

  for (VAR_15 = VAR_12; VAR_15 < VAR_7; VAR_15++) {
   VAR_14->port[VAR_15].fifo_ul =
       FUNC_4(VAR_5, VAR_6, ((void*)0));
   FUNC_5(&VAR_14->port[VAR_15].ctrl_dl, 0, sizeof(struct ctrl_dl));
   FUNC_5(&VAR_14->port[VAR_15].ctrl_ul, 0, sizeof(struct ctrl_ul));
  }


  VAR_14->last_ier = VAR_14->last_ier | VAR_3;
  FUNC_9(VAR_14->last_ier, VAR_14->reg_ier);

  VAR_14->state = VAR_10;
  FUNC_2(&VAR_14->pdev->dev, "Initialization OK!\n");
  return 1;
 }

 if ((VAR_14->config_table.version > 0)
     && (VAR_14->config_table.toggle.enabled != VAR_13)) {
  u32 VAR_16 = 0;
  FUNC_0("First phase: pushing upload buffers, clearing download");

  FUNC_2(&VAR_14->pdev->dev, "Version of card: %d\n",
    VAR_14->config_table.version);


  FUNC_7(VAR_14);







  FUNC_8(VAR_14->port[VAR_12].ul_addr[VAR_0],
   (u32 *) &VAR_16, 4);
  FUNC_8(VAR_14->port[VAR_12].ul_addr[VAR_1],
   (u32 *) &VAR_16, 4);

  FUNC_9(VAR_9 | VAR_4 | VAR_8, VAR_14->reg_fcr);

  FUNC_0("First phase done");
 }

 return 1;
}
