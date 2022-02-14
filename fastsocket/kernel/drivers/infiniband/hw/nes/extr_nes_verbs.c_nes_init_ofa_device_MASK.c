
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct nes_vnic {struct nes_device* nesdev; } ;
struct TYPE_5__ {int * parent; } ;
struct TYPE_8__ {unsigned long long uverbs_cmd_mask; int phys_port_cnt; int num_comp_vectors; TYPE_3__* iwcm; int post_recv; int post_send; int req_notify_cq; int process_mad; int detach_mcast; int attach_mcast; int free_fast_reg_page_list; int alloc_fast_reg_page_list; int alloc_fast_reg_mr; int bind_mw; int dealloc_mw; int alloc_mw; int dereg_mr; int reg_user_mr; int reg_phys_mr; int get_dma_mr; int poll_cq; int destroy_cq; int create_cq; int destroy_qp; int query_qp; int modify_qp; int create_qp; int destroy_ah; int create_ah; int dealloc_pd; int alloc_pd; int mmap; int dealloc_ucontext; int alloc_ucontext; int query_gid; int query_pkey; int query_port; int query_device; TYPE_1__ dev; int * dma_device; int node_guid; int node_type; int owner; int name; } ;
struct nes_ib_device {TYPE_4__ ibdev; } ;
struct nes_device {TYPE_2__* pcidev; } ;
struct TYPE_7__ {int destroy_listen; int create_listen; int reject; int accept; int connect; int get_qp; int rem_ref; int add_ref; } ;
struct TYPE_6__ {int dev; } ;


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
 unsigned long long VAR_22 ;
 unsigned long long VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*) ;
 TYPE_3__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int) ;
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
 struct nes_vnic* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,char*,int ) ;

struct nes_ib_device *FUNC_7(struct net_device *VAR_68)
{
 struct nes_ib_device *VAR_69;
 struct nes_vnic *VAR_70 = FUNC_5(VAR_68);
 struct nes_device *VAR_71 = VAR_70->nesdev;

 VAR_69 = (struct nes_ib_device *)FUNC_0(sizeof(struct nes_ib_device));
 if (VAR_69 == ((void*)0)) {
  return ((void*)0);
 }
 FUNC_6(VAR_69->ibdev.name, "nes%d", VAR_1);
 VAR_69->ibdev.owner = VAR_25;

 VAR_69->ibdev.node_type = VAR_24;
 FUNC_4(&VAR_69->ibdev.node_guid, 0, sizeof(VAR_69->ibdev.node_guid));
 FUNC_3(&VAR_69->ibdev.node_guid, VAR_68->dev_addr, 6);

 VAR_69->ibdev.uverbs_cmd_mask =
   (1ull << VAR_15) |
   (1ull << VAR_20) |
   (1ull << VAR_21) |
   (1ull << VAR_3) |
   (1ull << VAR_10) |
   (1ull << VAR_22) |
   (1ull << VAR_11) |
   (1ull << VAR_6) |
   (1ull << VAR_7) |
   (1ull << VAR_13) |
   (1ull << VAR_5) |
   (1ull << VAR_12) |
   (1ull << VAR_23) |
   (1ull << VAR_8) |
   (1ull << VAR_16) |
   (1ull << VAR_17) |
   (1ull << VAR_14) |
   (1ull << VAR_2) |
   (1ull << VAR_4) |
   (1ull << VAR_9) |
   (1ull << VAR_18) |
   (1ull << VAR_19);

 VAR_69->ibdev.phys_port_cnt = 1;
 VAR_69->ibdev.num_comp_vectors = 1;
 VAR_69->ibdev.dma_device = &VAR_71->pcidev->dev;
 VAR_69->ibdev.dev.parent = &VAR_71->pcidev->dev;
 VAR_69->ibdev.query_device = VAR_58;
 VAR_69->ibdev.query_port = VAR_61;
 VAR_69->ibdev.query_pkey = VAR_60;
 VAR_69->ibdev.query_gid = VAR_59;
 VAR_69->ibdev.alloc_ucontext = VAR_32;
 VAR_69->ibdev.dealloc_ucontext = VAR_41;
 VAR_69->ibdev.mmap = VAR_50;
 VAR_69->ibdev.alloc_pd = VAR_31;
 VAR_69->ibdev.dealloc_pd = VAR_40;
 VAR_69->ibdev.create_ah = VAR_35;
 VAR_69->ibdev.destroy_ah = VAR_43;
 VAR_69->ibdev.create_qp = VAR_38;
 VAR_69->ibdev.modify_qp = VAR_51;
 VAR_69->ibdev.query_qp = VAR_62;
 VAR_69->ibdev.destroy_qp = VAR_46;
 VAR_69->ibdev.create_cq = VAR_36;
 VAR_69->ibdev.destroy_cq = VAR_44;
 VAR_69->ibdev.poll_cq = VAR_54;
 VAR_69->ibdev.get_dma_mr = VAR_48;
 VAR_69->ibdev.reg_phys_mr = VAR_63;
 VAR_69->ibdev.reg_user_mr = VAR_64;
 VAR_69->ibdev.dereg_mr = VAR_42;
 VAR_69->ibdev.alloc_mw = VAR_30;
 VAR_69->ibdev.dealloc_mw = VAR_39;
 VAR_69->ibdev.bind_mw = VAR_33;

 VAR_69->ibdev.alloc_fast_reg_mr = VAR_28;
 VAR_69->ibdev.alloc_fast_reg_page_list = VAR_29;
 VAR_69->ibdev.free_fast_reg_page_list = VAR_47;

 VAR_69->ibdev.attach_mcast = VAR_52;
 VAR_69->ibdev.detach_mcast = VAR_53;
 VAR_69->ibdev.process_mad = VAR_57;

 VAR_69->ibdev.req_notify_cq = VAR_67;
 VAR_69->ibdev.post_send = VAR_56;
 VAR_69->ibdev.post_recv = VAR_55;

 VAR_69->ibdev.iwcm = FUNC_2(sizeof(*VAR_69->ibdev.iwcm), VAR_0);
 if (VAR_69->ibdev.iwcm == ((void*)0)) {
  FUNC_1(&VAR_69->ibdev);
  return ((void*)0);
 }
 VAR_69->ibdev.iwcm->add_ref = VAR_27;
 VAR_69->ibdev.iwcm->rem_ref = VAR_66;
 VAR_69->ibdev.iwcm->get_qp = VAR_49;
 VAR_69->ibdev.iwcm->connect = VAR_34;
 VAR_69->ibdev.iwcm->accept = VAR_26;
 VAR_69->ibdev.iwcm->reject = VAR_65;
 VAR_69->ibdev.iwcm->create_listen = VAR_37;
 VAR_69->ibdev.iwcm->destroy_listen = VAR_45;

 return VAR_69;
}
