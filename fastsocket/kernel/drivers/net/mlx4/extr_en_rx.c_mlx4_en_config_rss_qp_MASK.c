
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct mlx4_qp_context {int param3; int db_rec_addr; } ;
struct mlx4_qp {int event; } ;
struct TYPE_8__ {int dma; } ;
struct TYPE_10__ {int mtt; TYPE_1__ db; } ;
struct mlx4_en_rx_ring {TYPE_3__ wqres; scalar_t__ fcs_del; int cqn; int stride; int actual_size; } ;
struct mlx4_en_priv {struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {TYPE_4__* dev; } ;
typedef enum mlx4_qp_state { ____Placeholder_mlx4_qp_state } mlx4_qp_state ;
struct TYPE_9__ {int flags; } ;
struct TYPE_11__ {TYPE_2__ caps; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_3 (struct mlx4_qp_context*) ;
 struct mlx4_qp_context* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx4_qp_context*,int ,int) ;
 int FUNC_6 (struct mlx4_en_priv*,int ,int ,int ,int ,int,int ,int,struct mlx4_qp_context*) ;
 int VAR_4 ;
 int FUNC_7 (struct mlx4_en_rx_ring*) ;
 int FUNC_8 (TYPE_4__*,int,struct mlx4_qp*) ;
 int FUNC_9 (TYPE_4__*,struct mlx4_qp*) ;
 int FUNC_10 (TYPE_4__*,struct mlx4_qp*) ;
 int FUNC_11 (TYPE_4__*,int *,struct mlx4_qp_context*,struct mlx4_qp*,int*) ;

__attribute__((used)) static int FUNC_12(struct mlx4_en_priv *VAR_5, int VAR_6,
     struct mlx4_en_rx_ring *VAR_7,
     enum mlx4_qp_state *VAR_8,
     struct mlx4_qp *VAR_9)
{
 struct mlx4_en_dev *VAR_10 = VAR_5->mdev;
 struct mlx4_qp_context *VAR_11;
 int VAR_12 = 0;

 VAR_11 = FUNC_4(sizeof *VAR_11 , VAR_2);
 if (!VAR_11) {
  FUNC_2(VAR_5, "Failed to allocate qp context\n");
  return -VAR_0;
 }

 VAR_12 = FUNC_8(VAR_10->dev, VAR_6, VAR_9);
 if (VAR_12) {
  FUNC_2(VAR_5, "Failed to allocate qp #%x\n", VAR_6);
  goto out;
 }
 VAR_9->event = VAR_4;

 FUNC_5(VAR_11, 0, sizeof *VAR_11);
 FUNC_6(VAR_5, VAR_7->actual_size, VAR_7->stride, 0, 0,
    VAR_6, VAR_7->cqn, -1, VAR_11);
 VAR_11->db_rec_addr = FUNC_1(VAR_7->wqres.db.dma);


 if (VAR_10->dev->caps.flags & VAR_3) {
  VAR_11->param3 |= FUNC_0(1 << 29);
  VAR_7->fcs_del = VAR_1;
 } else
  VAR_7->fcs_del = 0;

 VAR_12 = FUNC_11(VAR_10->dev, &VAR_7->wqres.mtt, VAR_11, VAR_9, VAR_8);
 if (VAR_12) {
  FUNC_10(VAR_10->dev, VAR_9);
  FUNC_9(VAR_10->dev, VAR_9);
 }
 FUNC_7(VAR_7);
out:
 FUNC_3(VAR_11);
 return VAR_12;
}
