
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nes_vnic {TYPE_1__* netdev; struct nes_ib_device* nesibdev; struct nes_device* nesdev; } ;
struct nes_ib_device {int max_pd; int max_mr; int max_cq; int max_qp; } ;
struct nes_device {TYPE_2__* nesadapter; } ;
struct ib_device_attr {int max_mr_size; int max_sge_rd; int max_qp_rd_atom; int max_qp_init_rd_atom; int max_map_per_fmr; int atomic_cap; int max_pd; int max_mw; int max_mr; int max_cqe; int max_cq; int max_sge; scalar_t__ max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int device_cap_flags; int fw_ver; int sys_image_guid; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int max_irrq_wr; int max_cqe; int max_sge; scalar_t__ max_qp_wr; int hw_rev; int vendor_part_id; int vendor_id; int device_cap_flags; int firmware_version; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (struct ib_device_attr*,int ,int) ;
 struct nes_vnic* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_1, struct ib_device_attr *VAR_2)
{
 struct nes_vnic *VAR_3 = FUNC_2(VAR_1);
 struct nes_device *VAR_4 = VAR_3->nesdev;
 struct nes_ib_device *VAR_5 = VAR_3->nesibdev;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 FUNC_0(&VAR_2->sys_image_guid, VAR_3->netdev->dev_addr, 6);

 VAR_2->fw_ver = VAR_4->nesadapter->firmware_version;
 VAR_2->device_cap_flags = VAR_4->nesadapter->device_cap_flags;
 VAR_2->vendor_id = VAR_4->nesadapter->vendor_id;
 VAR_2->vendor_part_id = VAR_4->nesadapter->vendor_part_id;
 VAR_2->hw_ver = VAR_4->nesadapter->hw_rev;
 VAR_2->max_mr_size = 0x80000000;
 VAR_2->max_qp = VAR_5->max_qp;
 VAR_2->max_qp_wr = VAR_4->nesadapter->max_qp_wr - 2;
 VAR_2->max_sge = VAR_4->nesadapter->max_sge;
 VAR_2->max_cq = VAR_5->max_cq;
 VAR_2->max_cqe = VAR_4->nesadapter->max_cqe;
 VAR_2->max_mr = VAR_5->max_mr;
 VAR_2->max_mw = VAR_5->max_mr;
 VAR_2->max_pd = VAR_5->max_pd;
 VAR_2->max_sge_rd = 1;
 switch (VAR_4->nesadapter->max_irrq_wr) {
  case 0:
   VAR_2->max_qp_rd_atom = 2;
   break;
  case 1:
   VAR_2->max_qp_rd_atom = 8;
   break;
  case 2:
   VAR_2->max_qp_rd_atom = 32;
   break;
  case 3:
   VAR_2->max_qp_rd_atom = 64;
   break;
  default:
   VAR_2->max_qp_rd_atom = 0;
 }
 VAR_2->max_qp_init_rd_atom = VAR_2->max_qp_rd_atom;
 VAR_2->atomic_cap = VAR_0;
 VAR_2->max_map_per_fmr = 1;

 return 0;
}
