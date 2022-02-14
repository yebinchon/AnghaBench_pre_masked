
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int * running_index; int * index_values; } ;
struct host_hc_status_block_e2 {TYPE_4__ sb; } ;
struct host_hc_status_block_e1x {TYPE_4__ sb; } ;
struct TYPE_7__ {int * status_idx_ptr; int * hw_prod_idx_ptr; scalar_t__ sw_prod_idx; scalar_t__ io_addr; } ;
struct TYPE_6__ {struct host_hc_status_block_e2* gen; } ;
struct TYPE_5__ {int * status_idx_ptr; int * hw_prod_idx_ptr; scalar_t__ sw_prod_idx; scalar_t__ io_addr; } ;
struct cnic_local {TYPE_3__ kcq2; TYPE_2__ status_blk; TYPE_1__ kcq1; int pfid; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bnx2x*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 struct bnx2x* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct cnic_dev *VAR_5)
{
 struct cnic_local *VAR_6 = VAR_5->cnic_priv;
 struct bnx2x *VAR_7 = FUNC_3(VAR_5->netdev);
 u32 VAR_8 = VAR_6->pfid;

 VAR_6->kcq1.io_addr = VAR_0 +
      FUNC_1(VAR_8, 0);
 VAR_6->kcq1.sw_prod_idx = 0;

 if (FUNC_0(VAR_7)) {
  struct host_hc_status_block_e2 *VAR_9 = VAR_6->status_blk.gen;

  VAR_6->kcq1.hw_prod_idx_ptr =
   &VAR_9->sb.index_values[VAR_3];
  VAR_6->kcq1.status_idx_ptr =
   &VAR_9->sb.running_index[VAR_4];
 } else {
  struct host_hc_status_block_e1x *VAR_10 = VAR_6->status_blk.gen;

  VAR_6->kcq1.hw_prod_idx_ptr =
   &VAR_10->sb.index_values[VAR_3];
  VAR_6->kcq1.status_idx_ptr =
   &VAR_10->sb.running_index[VAR_4];
 }

 if (FUNC_0(VAR_7)) {
  struct host_hc_status_block_e2 *VAR_11 = VAR_6->status_blk.gen;

  VAR_6->kcq2.io_addr = VAR_1 +
     FUNC_2(VAR_8);
  VAR_6->kcq2.sw_prod_idx = 0;
  VAR_6->kcq2.hw_prod_idx_ptr =
   &VAR_11->sb.index_values[VAR_2];
  VAR_6->kcq2.status_idx_ptr =
   &VAR_11->sb.running_index[VAR_4];
 }
}
