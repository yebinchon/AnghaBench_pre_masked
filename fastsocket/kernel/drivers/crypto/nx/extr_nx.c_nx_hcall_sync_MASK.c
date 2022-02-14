
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vio_pfo_op {int hcall_err; } ;
struct vio_dev {int dev; } ;
struct nx_crypto_ctx {TYPE_1__* stats; } ;
struct TYPE_6__ {int pid; } ;
struct TYPE_5__ {struct vio_dev* viodev; } ;
struct TYPE_4__ {int last_error_pid; int last_error; int errors; int sync_ops; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 () ;
 TYPE_3__* VAR_1 ;
 int FUNC_3 (int *,char*,int,int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (struct vio_dev*,struct vio_pfo_op*) ;

int FUNC_5(struct nx_crypto_ctx *VAR_3,
    struct vio_pfo_op *VAR_4,
    u32 VAR_5)
{
 int VAR_6, VAR_7 = 10;
 struct vio_dev *VAR_8 = VAR_2.viodev;

 FUNC_0(&(VAR_3->stats->sync_ops));

 do {
  VAR_6 = FUNC_4(VAR_8, VAR_4);
 } while ((VAR_6 == -VAR_0 && !VAR_5 && VAR_7--) ||
          (VAR_6 == -VAR_0 && VAR_5 && FUNC_2()));

 if (VAR_6) {
  FUNC_3(&VAR_8->dev, "vio_h_cop_sync failed: rc: %d "
   "hcall rc: %ld\n", VAR_6, VAR_4->hcall_err);
  FUNC_0(&(VAR_3->stats->errors));
  FUNC_1(&(VAR_3->stats->last_error), VAR_4->hcall_err);
  FUNC_1(&(VAR_3->stats->last_error_pid), VAR_1->pid);
 }

 return VAR_6;
}
