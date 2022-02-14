
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_eth_dev {int starting_cid; int drv_state; int iscsi_l2_cid; int fcoe_init_cid; scalar_t__ ctx_tbl_offset; } ;
struct bnx2x {struct cnic_eth_dev cnic_eth_dev; } ;


 int FUNC_0 (struct bnx2x*) ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct bnx2x*) ;
 int FUNC_5 (struct bnx2x*) ;

void FUNC_6(struct bnx2x *VAR_2)
{
 struct cnic_eth_dev *VAR_3 = &VAR_2->cnic_eth_dev;

 VAR_3->ctx_tbl_offset = FUNC_3(FUNC_2(VAR_2)) +
        FUNC_5(VAR_2);
 VAR_3->starting_cid = FUNC_5(VAR_2) * VAR_1;
 VAR_3->fcoe_init_cid = FUNC_0(VAR_2);
 VAR_3->iscsi_l2_cid = FUNC_1(VAR_2);

 if (FUNC_4(VAR_2))
  VAR_3->drv_state |= VAR_0;
}
