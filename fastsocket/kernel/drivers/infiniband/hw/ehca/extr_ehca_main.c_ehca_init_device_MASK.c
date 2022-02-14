
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int uverbs_abi_ver; unsigned long long uverbs_cmd_mask; int num_comp_vectors; int post_srq_recv; int destroy_srq; int query_srq; int modify_srq; int create_srq; int * dma_ops; int mmap; int process_mad; int detach_mcast; int attach_mcast; int dealloc_fmr; int unmap_fmr; int map_phys_fmr; int alloc_fmr; int dealloc_mw; int bind_mw; int alloc_mw; int rereg_phys_mr; int dereg_mr; int query_mr; int reg_user_mr; int reg_phys_mr; int get_dma_mr; int req_notify_cq; int poll_cq; int resize_cq; int destroy_cq; int create_cq; int post_recv; int post_send; int destroy_qp; int query_qp; int modify_qp; int create_qp; int destroy_ah; int query_ah; int create_ah; int dealloc_pd; int alloc_pd; int dealloc_ucontext; int alloc_ucontext; int modify_port; int query_pkey; int query_gid; int query_port; int query_device; int * dma_device; int phys_port_cnt; int node_type; int owner; int name; } ;
struct ehca_shca {TYPE_2__ ib_device; int hca_cap; TYPE_1__* ofdev; int num_ports; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long long VAR_2 ;
 unsigned long long VAR_3 ;
 unsigned long long VAR_4 ;
 unsigned long long VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned long long VAR_8 ;
 unsigned long long VAR_9 ;
 unsigned long long VAR_10 ;
 unsigned long long VAR_11 ;
 unsigned long long VAR_12 ;
 unsigned long long VAR_13 ;
 unsigned long long VAR_14 ;
 unsigned long long VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 unsigned long long VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_1 (struct ehca_shca*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct ehca_shca *VAR_70)
{
 int VAR_71;

 VAR_71 = FUNC_1(VAR_70);
 if (VAR_71)
  return VAR_71;

 FUNC_2(VAR_70->ib_device.name, "ehca%d", VAR_1);
 VAR_70->ib_device.owner = VAR_23;

 VAR_70->ib_device.uverbs_abi_ver = 8;
 VAR_70->ib_device.uverbs_cmd_mask =
  (1ull << VAR_14) |
  (1ull << VAR_17) |
  (1ull << VAR_18) |
  (1ull << VAR_2) |
  (1ull << VAR_8) |
  (1ull << VAR_21) |
  (1ull << VAR_9) |
  (1ull << VAR_4) |
  (1ull << VAR_5) |
  (1ull << VAR_10) |
  (1ull << VAR_6) |
  (1ull << VAR_15) |
  (1ull << VAR_19) |
  (1ull << VAR_11) |
  (1ull << VAR_3) |
  (1ull << VAR_13);

 VAR_70->ib_device.node_type = VAR_22;
 VAR_70->ib_device.phys_port_cnt = VAR_70->num_ports;
 VAR_70->ib_device.num_comp_vectors = 1;
 VAR_70->ib_device.dma_device = &VAR_70->ofdev->dev;
 VAR_70->ib_device.query_device = VAR_57;
 VAR_70->ib_device.query_port = VAR_61;
 VAR_70->ib_device.query_gid = VAR_58;
 VAR_70->ib_device.query_pkey = VAR_60;

 VAR_70->ib_device.modify_port = VAR_48;
 VAR_70->ib_device.alloc_ucontext = VAR_27;
 VAR_70->ib_device.dealloc_ucontext = VAR_37;
 VAR_70->ib_device.alloc_pd = VAR_26;
 VAR_70->ib_device.dealloc_pd = VAR_36;
 VAR_70->ib_device.create_ah = VAR_30;

 VAR_70->ib_device.query_ah = VAR_56;
 VAR_70->ib_device.destroy_ah = VAR_39;
 VAR_70->ib_device.create_qp = VAR_32;
 VAR_70->ib_device.modify_qp = VAR_49;
 VAR_70->ib_device.query_qp = VAR_62;
 VAR_70->ib_device.destroy_qp = VAR_41;
 VAR_70->ib_device.post_send = VAR_53;
 VAR_70->ib_device.post_recv = VAR_52;
 VAR_70->ib_device.create_cq = VAR_31;
 VAR_70->ib_device.destroy_cq = VAR_40;
 VAR_70->ib_device.resize_cq = VAR_68;
 VAR_70->ib_device.poll_cq = VAR_51;

 VAR_70->ib_device.req_notify_cq = VAR_66;

 VAR_70->ib_device.get_dma_mr = VAR_45;
 VAR_70->ib_device.reg_phys_mr = VAR_64;
 VAR_70->ib_device.reg_user_mr = VAR_65;
 VAR_70->ib_device.query_mr = VAR_59;
 VAR_70->ib_device.dereg_mr = VAR_38;
 VAR_70->ib_device.rereg_phys_mr = VAR_67;
 VAR_70->ib_device.alloc_mw = VAR_25;
 VAR_70->ib_device.bind_mw = VAR_29;
 VAR_70->ib_device.dealloc_mw = VAR_35;
 VAR_70->ib_device.alloc_fmr = VAR_24;
 VAR_70->ib_device.map_phys_fmr = VAR_46;
 VAR_70->ib_device.unmap_fmr = VAR_69;
 VAR_70->ib_device.dealloc_fmr = VAR_34;
 VAR_70->ib_device.attach_mcast = VAR_28;
 VAR_70->ib_device.detach_mcast = VAR_43;
 VAR_70->ib_device.process_mad = VAR_55;
 VAR_70->ib_device.mmap = VAR_47;
 VAR_70->ib_device.dma_ops = &VAR_44;

 if (FUNC_0(VAR_0, VAR_70->hca_cap)) {
  VAR_70->ib_device.uverbs_cmd_mask |=
   (1ull << VAR_7) |
   (1ull << VAR_16) |
   (1ull << VAR_20) |
   (1ull << VAR_12);

  VAR_70->ib_device.create_srq = VAR_33;
  VAR_70->ib_device.modify_srq = VAR_50;
  VAR_70->ib_device.query_srq = VAR_63;
  VAR_70->ib_device.destroy_srq = VAR_42;
  VAR_70->ib_device.post_srq_recv = VAR_54;
 }

 return VAR_71;
}
