
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfpf_init_tlv {scalar_t__ sb_addr; int stats_addr; int spq_addr; } ;
struct bnx2x_virtf {int op_rc; int fw_stat_map; int spq_map; } ;
struct bnx2x_vf_mbx {TYPE_2__* msg; } ;
struct bnx2x {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {struct vfpf_init_tlv init; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int FUNC_0 (struct bnx2x*,struct bnx2x_virtf*,int *) ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*) ;

__attribute__((used)) static void FUNC_2(struct bnx2x *VAR_0, struct bnx2x_virtf *VAR_1,
         struct bnx2x_vf_mbx *VAR_2)
{
 struct vfpf_init_tlv *VAR_3 = &VAR_2->msg->req.init;


 VAR_1->spq_map = VAR_3->spq_addr;
 VAR_1->fw_stat_map = VAR_3->stats_addr;
 VAR_1->op_rc = FUNC_0(VAR_0, VAR_1, (dma_addr_t *)VAR_3->sb_addr);


 FUNC_1(VAR_0, VAR_1);
}
