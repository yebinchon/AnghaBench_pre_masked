
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct host_hc_status_block_e2 {int dummy; } ;
struct host_hc_status_block_e1x {int dummy; } ;
struct TYPE_4__ {int * addr_drv_info_to_mcp; } ;
struct TYPE_6__ {int e1x_sb; int e2_sb; } ;
struct bnx2x {TYPE_2__* slowpath; TYPE_1__ cnic_eth_dev; int t2_mapping; int t2; int cnic_sb_mapping; TYPE_3__ cnic_sb; } ;
struct TYPE_5__ {int drv_info_to_mcp; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (struct bnx2x*) ;
 scalar_t__ FUNC_3 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*,int ) ;

int FUNC_6(struct bnx2x *VAR_3)
{
 if (!FUNC_2(VAR_3))

  FUNC_1(VAR_3->cnic_sb.e2_sb, &VAR_3->cnic_sb_mapping,
    sizeof(struct host_hc_status_block_e2));
 else
  FUNC_1(VAR_3->cnic_sb.e1x_sb,
    &VAR_3->cnic_sb_mapping,
    sizeof(struct
           host_hc_status_block_e1x));

 if (FUNC_3(VAR_3) && !VAR_3->t2)

  FUNC_1(VAR_3->t2, &VAR_3->t2_mapping, VAR_2);


 VAR_3->cnic_eth_dev.addr_drv_info_to_mcp =
  &VAR_3->slowpath->drv_info_to_mcp;

 if (FUNC_5(VAR_3, VAR_1))
  goto alloc_mem_err;

 return 0;

alloc_mem_err:
 FUNC_4(VAR_3);
 FUNC_0("Can't allocate memory\n");
 return -VAR_0;
}
