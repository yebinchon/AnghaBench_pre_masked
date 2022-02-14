
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct status_block {scalar_t__ status_completion_producer_index; } ;
struct TYPE_4__ {struct status_block* gen; TYPE_1__* bnx2; } ;
struct cnic_local {int status_blk_num; TYPE_2__ status_blk; int cnic_irq_task; int last_status_idx; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int drv_state; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct TYPE_3__ {scalar_t__ status_completion_producer_index; int status_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct cnic_dev*,int) ;
 int FUNC_1 (struct cnic_dev*,int,int) ;
 int VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (struct cnic_dev*) ;
 int FUNC_4 (struct cnic_dev*) ;
 int VAR_11 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *,int ,unsigned long) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct cnic_dev *VAR_12)
{
 struct cnic_local *VAR_13 = VAR_12->cnic_priv;
 struct cnic_eth_dev *VAR_14 = VAR_13->ethdev;

 if (VAR_14->drv_state & VAR_9) {
  int VAR_15, VAR_16 = 0;
  int VAR_17 = VAR_13->status_blk_num;
  u32 VAR_18 = ((VAR_17 - 1) * VAR_8) +
      VAR_6;

  FUNC_1(VAR_12, VAR_18, VAR_7);

  FUNC_1(VAR_12, VAR_18 + VAR_4, (2 << 16) | 8);
  FUNC_1(VAR_12, VAR_18 + VAR_5, (64 << 16) | 220);
  FUNC_1(VAR_12, VAR_18 + VAR_0, (64 << 16) | 220);

  VAR_13->last_status_idx = VAR_13->status_blk.bnx2->status_idx;
  FUNC_6(&VAR_13->cnic_irq_task, VAR_11,
        (unsigned long) VAR_12);
  VAR_15 = FUNC_4(VAR_12);
  if (VAR_15)
   return VAR_15;

  while (VAR_13->status_blk.bnx2->status_completion_producer_index &&
         VAR_16 < 10) {
   FUNC_1(VAR_12, VAR_1,
    1 << (11 + VAR_17));
   FUNC_7(10);
   VAR_16++;
   FUNC_2();
  }
  if (VAR_13->status_blk.bnx2->status_completion_producer_index) {
   FUNC_3(VAR_12);
   goto failed;
  }

 } else {
  struct status_block *VAR_19 = VAR_13->status_blk.gen;
  u32 VAR_20 = FUNC_0(VAR_12, VAR_2);
  int VAR_21 = 0;

  while (VAR_19->status_completion_producer_index && VAR_21 < 10) {
   FUNC_1(VAR_12, VAR_2,
    VAR_20 | VAR_3);
   FUNC_7(10);
   VAR_21++;
   FUNC_2();
  }
  if (VAR_19->status_completion_producer_index)
   goto failed;

 }
 return 0;

failed:
 FUNC_5(VAR_12->netdev, "KCQ index not resetting to 0\n");
 return -VAR_10;
}
