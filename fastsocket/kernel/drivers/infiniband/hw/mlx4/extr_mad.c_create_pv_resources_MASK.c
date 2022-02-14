
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mlx4_ib_demux_pv_ctx {scalar_t__ state; scalar_t__ slave; int has_smi; int * cq; int * pd; int * mr; TYPE_3__* qp; int * wq; int work; struct ib_device* ib_dev; int port; } ;
struct ib_device {int dummy; } ;
struct TYPE_6__ {TYPE_1__* demux; } ;
struct TYPE_8__ {TYPE_2__ sriov; int dev; } ;
struct TYPE_7__ {int * qp; } ;
struct TYPE_5__ {int * wq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx4_ib_demux_pv_ctx*,int ,int) ;
 int * FUNC_4 (struct ib_device*) ;
 int * FUNC_5 (struct ib_device*,int ,int *,struct mlx4_ib_demux_pv_ctx*,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct mlx4_ib_demux_pv_ctx*,int ,int) ;
 int FUNC_13 (struct mlx4_ib_demux_pv_ctx*,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (char*,...) ;
 scalar_t__ FUNC_16 (struct ib_device*,int ) ;
 TYPE_4__* FUNC_17 (struct ib_device*) ;

__attribute__((used)) static int FUNC_18(struct ib_device *VAR_13, int VAR_14, int VAR_15,
          int VAR_16, struct mlx4_ib_demux_pv_ctx *VAR_17)
{
 int VAR_18, VAR_19;

 if (VAR_17->state != VAR_1)
  return -VAR_3;

 VAR_17->state = VAR_2;

 if (VAR_17->slave == FUNC_14(FUNC_17(VAR_17->ib_dev)->dev) &&
     FUNC_16(VAR_13, VAR_17->port) == VAR_6)
  VAR_17->has_smi = 1;

 if (VAR_17->has_smi) {
  VAR_18 = FUNC_12(VAR_17, VAR_8, VAR_16);
  if (VAR_18) {
   FUNC_15("Failed allocating qp0 tunnel bufs (%d)\n", VAR_18);
   goto err_out;
  }
 }

 VAR_18 = FUNC_12(VAR_17, VAR_7, VAR_16);
 if (VAR_18) {
  FUNC_15("Failed allocating qp1 tunnel bufs (%d)\n", VAR_18);
  goto err_out_qp0;
 }

 VAR_19 = 2 * VAR_9;
 if (VAR_17->has_smi)
  VAR_19 *= 2;

 VAR_17->cq = FUNC_5(VAR_17->ib_dev, VAR_11,
          ((void*)0), VAR_17, VAR_19, 0);
 if (FUNC_1(VAR_17->cq)) {
  VAR_18 = FUNC_2(VAR_17->cq);
  FUNC_15("Couldn't create tunnel CQ (%d)\n", VAR_18);
  goto err_buf;
 }

 VAR_17->pd = FUNC_4(VAR_17->ib_dev);
 if (FUNC_1(VAR_17->pd)) {
  VAR_18 = FUNC_2(VAR_17->pd);
  FUNC_15("Couldn't create tunnel PD (%d)\n", VAR_18);
  goto err_cq;
 }

 VAR_17->mr = FUNC_10(VAR_17->pd, VAR_4);
 if (FUNC_1(VAR_17->mr)) {
  VAR_18 = FUNC_2(VAR_17->mr);
  FUNC_15("Couldn't get tunnel DMA MR (%d)\n", VAR_18);
  goto err_pd;
 }

 if (VAR_17->has_smi) {
  VAR_18 = FUNC_3(VAR_17, VAR_8, VAR_16);
  if (VAR_18) {
   FUNC_15("Couldn't create %s QP0 (%d)\n",
          VAR_16 ? "tunnel for" : "", VAR_18);
   goto err_mr;
  }
 }

 VAR_18 = FUNC_3(VAR_17, VAR_7, VAR_16);
 if (VAR_18) {
  FUNC_15("Couldn't create %s QP1 (%d)\n",
         VAR_16 ? "tunnel for" : "", VAR_18);
  goto err_qp0;
 }

 if (VAR_16)
  FUNC_0(&VAR_17->work, VAR_12);
 else
  FUNC_0(&VAR_17->work, VAR_10);

 VAR_17->wq = FUNC_17(VAR_13)->sriov.demux[VAR_15 - 1].wq;

 VAR_18 = FUNC_11(VAR_17->cq, VAR_5);
 if (VAR_18) {
  FUNC_15("Couldn't arm tunnel cq (%d)\n", VAR_18);
  goto err_wq;
 }
 VAR_17->state = VAR_0;
 return 0;

err_wq:
 VAR_17->wq = ((void*)0);
 FUNC_9(VAR_17->qp[1].qp);
 VAR_17->qp[1].qp = ((void*)0);


err_qp0:
 if (VAR_17->has_smi)
  FUNC_9(VAR_17->qp[0].qp);
 VAR_17->qp[0].qp = ((void*)0);

err_mr:
 FUNC_7(VAR_17->mr);
 VAR_17->mr = ((void*)0);

err_pd:
 FUNC_6(VAR_17->pd);
 VAR_17->pd = ((void*)0);

err_cq:
 FUNC_8(VAR_17->cq);
 VAR_17->cq = ((void*)0);

err_buf:
 FUNC_13(VAR_17, VAR_7, VAR_16);

err_out_qp0:
 if (VAR_17->has_smi)
  FUNC_13(VAR_17, VAR_8, VAR_16);
err_out:
 VAR_17->state = VAR_1;
 return VAR_18;
}
