
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ pfn; } ;
struct TYPE_12__ {TYPE_3__* slave_state; } ;
struct TYPE_13__ {TYPE_4__ master; } ;
struct TYPE_10__ {TYPE_1__* eq; } ;
struct mlx4_priv {TYPE_7__ driver_uar; int kar; TYPE_5__ mfunc; TYPE_2__ eq_table; } ;
struct TYPE_14__ {size_t num_comp_vectors; int num_ports; int* pkey_table_len; int * port_ib_mtu; void** ib_port_def_cap; } ;
struct mlx4_dev {int flags; int num_slaves; TYPE_6__ caps; } ;
typedef int phys_addr_t ;
typedef void* __be32 ;
struct TYPE_11__ {void** ib_cap_mask; } ;
struct TYPE_9__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,int,int) ;
 int FUNC_4 (struct mlx4_dev*) ;
 int FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*) ;
 int FUNC_7 (struct mlx4_dev*) ;
 int FUNC_8 (struct mlx4_dev*) ;
 int FUNC_9 (struct mlx4_dev*) ;
 int FUNC_10 (struct mlx4_dev*) ;
 int FUNC_11 (struct mlx4_dev*) ;
 int FUNC_12 (struct mlx4_dev*) ;
 int FUNC_13 (struct mlx4_dev*) ;
 int FUNC_14 (struct mlx4_dev*) ;
 int FUNC_15 (struct mlx4_dev*) ;
 int FUNC_16 (struct mlx4_dev*,char*) ;
 int FUNC_17 (struct mlx4_dev*,char*,...) ;
 int FUNC_18 (struct mlx4_dev*,int,void**) ;
 int FUNC_19 (struct mlx4_dev*) ;
 int FUNC_20 (struct mlx4_dev*) ;
 int FUNC_21 (struct mlx4_dev*) ;
 int FUNC_22 (struct mlx4_dev*) ;
 int FUNC_23 (struct mlx4_dev*) ;
 int FUNC_24 (struct mlx4_dev*) ;
 int FUNC_25 (struct mlx4_dev*) ;
 int FUNC_26 (struct mlx4_dev*) ;
 int FUNC_27 (struct mlx4_dev*) ;
 int FUNC_28 (struct mlx4_dev*) ;
 scalar_t__ FUNC_29 (struct mlx4_dev*) ;
 scalar_t__ FUNC_30 (struct mlx4_dev*) ;
 int FUNC_31 (struct mlx4_dev*) ;
 int FUNC_32 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_33 (struct mlx4_dev*) ;
 int FUNC_34 (struct mlx4_dev*,TYPE_7__*) ;
 int FUNC_35 (struct mlx4_dev*,TYPE_7__*) ;
 int FUNC_36 (struct mlx4_dev*,char*,...) ;

__attribute__((used)) static int FUNC_37(struct mlx4_dev *VAR_7)
{
 struct mlx4_priv *VAR_8 = FUNC_33(VAR_7);
 int VAR_9;
 int VAR_10;
 __be32 VAR_11;

 VAR_9 = FUNC_27(VAR_7);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to initialize "
    "user access region table, aborting.\n");
  return VAR_9;
 }

 VAR_9 = FUNC_34(VAR_7, &VAR_8->driver_uar);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to allocate driver access region, "
    "aborting.\n");
  goto err_uar_table_free;
 }

 VAR_8->kar = FUNC_0((phys_addr_t) VAR_8->driver_uar.pfn << VAR_5, VAR_6);
 if (!VAR_8->kar) {
  FUNC_17(VAR_7, "Couldn't map kernel access region, "
    "aborting.\n");
  VAR_9 = -VAR_1;
  goto err_uar_free;
 }

 VAR_9 = FUNC_24(VAR_7);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to initialize "
    "protection domain table, aborting.\n");
  goto err_kar_unmap;
 }

 VAR_9 = FUNC_28(VAR_7);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to initialize "
    "reliable connection domain table, aborting.\n");
  goto err_pd_table_free;
 }

 VAR_9 = FUNC_23(VAR_7);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to initialize "
    "memory region table, aborting.\n");
  goto err_xrcd_table_free;
 }

 VAR_9 = FUNC_21(VAR_7);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to initialize "
    "event queue table, aborting.\n");
  goto err_mr_table_free;
 }

 VAR_9 = FUNC_14(VAR_7);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to switch to event-driven "
    "firmware commands, aborting.\n");
  goto err_eq_table_free;
 }

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9) {
  if (VAR_7->flags & VAR_4) {
   FUNC_36(VAR_7, "NOP command failed to generate MSI-X "
      "interrupt IRQ %d).\n",
      VAR_8->eq_table.eq[VAR_7->caps.num_comp_vectors].irq);
   FUNC_36(VAR_7, "Trying again without MSI-X.\n");
  } else {
   FUNC_17(VAR_7, "NOP command failed to generate interrupt "
     "(IRQ %d), aborting.\n",
     VAR_8->eq_table.eq[VAR_7->caps.num_comp_vectors].irq);
   FUNC_17(VAR_7, "BIOS or ACPI interrupt routing problem?\n");
  }

  goto err_cmd_poll;
 }

 FUNC_16(VAR_7, "NOP command IRQ test passed\n");

 VAR_9 = FUNC_20(VAR_7);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to initialize "
    "completion queue table, aborting.\n");
  goto err_cmd_poll;
 }

 VAR_9 = FUNC_26(VAR_7);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to initialize "
    "shared receive queue table, aborting.\n");
  goto err_cq_table_free;
 }

 VAR_9 = FUNC_25(VAR_7);
 if (VAR_9) {
  FUNC_17(VAR_7, "Failed to initialize "
    "queue pair table, aborting.\n");
  goto err_srq_table_free;
 }

 if (!FUNC_31(VAR_7)) {
  VAR_9 = FUNC_22(VAR_7);
  if (VAR_9) {
   FUNC_17(VAR_7, "Failed to initialize "
     "multicast group table, aborting.\n");
   goto err_qp_table_free;
  }
 }

 VAR_9 = FUNC_19(VAR_7);
 if (VAR_9 && VAR_9 != -VAR_0) {
  FUNC_17(VAR_7, "Failed to initialize counters table, aborting.\n");
  goto err_mcg_table_free;
 }

 if (!FUNC_31(VAR_7)) {
  for (VAR_10 = 1; VAR_10 <= VAR_7->caps.num_ports; VAR_10++) {
   VAR_11 = 0;
   VAR_9 = FUNC_18(VAR_7, VAR_10,
          &VAR_11);
   if (VAR_9)
    FUNC_36(VAR_7, "failed to get port %d default "
       "ib capabilities (%d). Continuing "
       "with caps = 0\n", VAR_10, VAR_9);
   VAR_7->caps.ib_port_def_cap[VAR_10] = VAR_11;


   if (FUNC_29(VAR_7)) {
    int VAR_12;
    for (VAR_12 = 0; VAR_12 < VAR_7->num_slaves; VAR_12++) {
     if (VAR_12 == FUNC_32(VAR_7))
      continue;
     VAR_8->mfunc.master.slave_state[VAR_12].ib_cap_mask[VAR_10] =
       VAR_11;
    }
   }

   if (FUNC_30(VAR_7))
    VAR_7->caps.port_ib_mtu[VAR_10] = VAR_2;
   else
    VAR_7->caps.port_ib_mtu[VAR_10] = VAR_3;

   VAR_9 = FUNC_3(VAR_7, VAR_10, FUNC_29(VAR_7) ?
         VAR_7->caps.pkey_table_len[VAR_10] : -1);
   if (VAR_9) {
    FUNC_17(VAR_7, "Failed to set port %d, aborting\n",
     VAR_10);
    goto err_counters_table_free;
   }
  }
 }

 return 0;

err_counters_table_free:
 FUNC_4(VAR_7);

err_mcg_table_free:
 FUNC_7(VAR_7);

err_qp_table_free:
 FUNC_10(VAR_7);

err_srq_table_free:
 FUNC_11(VAR_7);

err_cq_table_free:
 FUNC_5(VAR_7);

err_cmd_poll:
 FUNC_15(VAR_7);

err_eq_table_free:
 FUNC_6(VAR_7);

err_mr_table_free:
 FUNC_8(VAR_7);

err_xrcd_table_free:
 FUNC_13(VAR_7);

err_pd_table_free:
 FUNC_9(VAR_7);

err_kar_unmap:
 FUNC_1(VAR_8->kar);

err_uar_free:
 FUNC_35(VAR_7, &VAR_8->driver_uar);

err_uar_table_free:
 FUNC_12(VAR_7);
 return VAR_9;
}
