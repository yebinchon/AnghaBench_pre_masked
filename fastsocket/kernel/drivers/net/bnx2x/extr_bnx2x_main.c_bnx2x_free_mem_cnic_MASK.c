
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct host_hc_status_block_e2 {int dummy; } ;
struct host_hc_status_block_e1x {int dummy; } ;
struct TYPE_2__ {int e1x_sb; int e2_sb; } ;
struct bnx2x {int t2_mapping; int t2; int cnic_sb_mapping; TYPE_1__ cnic_sb; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct bnx2x*,int ) ;

void FUNC_3(struct bnx2x *VAR_2)
{
 FUNC_2(VAR_2, VAR_0);

 if (!FUNC_1(VAR_2))
  FUNC_0(VAR_2->cnic_sb.e2_sb, VAR_2->cnic_sb_mapping,
          sizeof(struct host_hc_status_block_e2));
 else
  FUNC_0(VAR_2->cnic_sb.e1x_sb, VAR_2->cnic_sb_mapping,
          sizeof(struct host_hc_status_block_e1x));

 FUNC_0(VAR_2->t2, VAR_2->t2_mapping, VAR_1);
}
