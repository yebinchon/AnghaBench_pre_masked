
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {scalar_t__ map; int buf; } ;
struct TYPE_15__ {TYPE_1__ direct; } ;
struct TYPE_14__ {TYPE_6__ buf; } ;
struct TYPE_16__ {TYPE_2__* uar; } ;
struct TYPE_13__ {int event; } ;
struct mlx4_en_tx_ring {int size; int size_mask; int stride; int qpn; int bf_enabled; int * tx_info; int * bounce_buf; int buf_size; TYPE_5__ wqres; int hwtstamp_tx_type; TYPE_8__ bf; TYPE_4__ qp; int buf; } ;
struct mlx4_en_tx_info {int dummy; } ;
struct TYPE_12__ {int tx_type; } ;
struct mlx4_en_priv {TYPE_3__ hwtstamp_config; struct mlx4_en_dev* mdev; } ;
struct TYPE_11__ {int map; } ;
struct mlx4_en_dev {int dev; int uar_map; TYPE_2__ priv_uar; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,struct mlx4_en_priv*,char*,...) ;
 int FUNC_2 (struct mlx4_en_priv*,char*,...) ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_5__*,int ,int) ;
 int FUNC_7 (int ,TYPE_8__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int VAR_8 ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (int ,TYPE_5__*,int ) ;
 int FUNC_11 (int ,int,TYPE_4__*) ;
 int FUNC_12 (int *) ;
 int * FUNC_13 (int) ;

int FUNC_14(struct mlx4_en_priv *VAR_9,
      struct mlx4_en_tx_ring *VAR_10, int VAR_11, u32 VAR_12,
      u16 VAR_13)
{
 struct mlx4_en_dev *VAR_14 = VAR_9->mdev;
 int VAR_15;
 int VAR_16;

 VAR_10->size = VAR_12;
 VAR_10->size_mask = VAR_12 - 1;
 VAR_10->stride = VAR_13;

 VAR_7 = FUNC_5(VAR_7, VAR_4);

 VAR_15 = VAR_12 * sizeof(struct mlx4_en_tx_info);
 VAR_10->tx_info = FUNC_13(VAR_15);
 if (!VAR_10->tx_info) {
  FUNC_2(VAR_9, "Failed allocating tx_info ring\n");
  return -VAR_1;
 }
 FUNC_1(VAR_0, VAR_9, "Allocated tx_info ring at addr:%p size:%d\n",
   VAR_10->tx_info, VAR_15);

 VAR_10->bounce_buf = FUNC_4(VAR_3, VAR_2);
 if (!VAR_10->bounce_buf) {
  FUNC_2(VAR_9, "Failed allocating bounce buffer\n");
  VAR_16 = -VAR_1;
  goto err_tx;
 }
 VAR_10->buf_size = FUNC_0(VAR_12 * VAR_10->stride, VAR_5);

 VAR_16 = FUNC_6(VAR_14->dev, &VAR_10->wqres, VAR_10->buf_size,
     2 * VAR_6);
 if (VAR_16) {
  FUNC_2(VAR_9, "Failed allocating hwq resources\n");
  goto err_bounce;
 }

 VAR_16 = FUNC_8(&VAR_10->wqres.buf);
 if (VAR_16) {
  FUNC_2(VAR_9, "Failed to map TX buffer\n");
  goto err_hwq_res;
 }

 VAR_10->buf = VAR_10->wqres.buf.direct.buf;

 FUNC_1(VAR_0, VAR_9, "Allocated TX ring (addr:%p) - buf:%p size:%d "
        "buf_size:%d dma:%llx\n", VAR_10, VAR_10->buf, VAR_10->size,
        VAR_10->buf_size, (unsigned long long) VAR_10->wqres.buf.direct.map);

 VAR_10->qpn = VAR_11;
 VAR_16 = FUNC_11(VAR_14->dev, VAR_10->qpn, &VAR_10->qp);
 if (VAR_16) {
  FUNC_2(VAR_9, "Failed allocating qp %d\n", VAR_10->qpn);
  goto err_map;
 }
 VAR_10->qp.event = VAR_8;

 VAR_16 = FUNC_7(VAR_14->dev, &VAR_10->bf);
 if (VAR_16) {
  FUNC_1(VAR_0, VAR_9, "working without blueflame (%d)", VAR_16);
  VAR_10->bf.uar = &VAR_14->priv_uar;
  VAR_10->bf.uar->map = VAR_14->uar_map;
  VAR_10->bf_enabled = 0;
 } else
  VAR_10->bf_enabled = 1;

 VAR_10->hwtstamp_tx_type = VAR_9->hwtstamp_config.tx_type;

 return 0;

err_map:
 FUNC_9(&VAR_10->wqres.buf);
err_hwq_res:
 FUNC_10(VAR_14->dev, &VAR_10->wqres, VAR_10->buf_size);
err_bounce:
 FUNC_3(VAR_10->bounce_buf);
 VAR_10->bounce_buf = ((void*)0);
err_tx:
 FUNC_12(VAR_10->tx_info);
 VAR_10->tx_info = ((void*)0);
 return VAR_16;
}
