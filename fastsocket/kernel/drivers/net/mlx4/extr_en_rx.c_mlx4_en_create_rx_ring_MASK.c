
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int buf; } ;
struct TYPE_9__ {TYPE_1__ direct; } ;
struct TYPE_8__ {TYPE_4__ buf; } ;
struct mlx4_en_rx_ring {int size; int size_mask; int stride; int * rx_info; scalar_t__ buf_size; TYPE_3__ wqres; int hwtstamp_rx_filter; int buf; scalar_t__ log_stride; scalar_t__ cons; scalar_t__ prod; } ;
struct mlx4_en_rx_alloc {int dummy; } ;
struct TYPE_7__ {int rx_filter; } ;
struct mlx4_en_priv {TYPE_2__ hwtstamp_config; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int *,int) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_3__*,scalar_t__,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int ,TYPE_3__*,scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int) ;

int FUNC_9(struct mlx4_en_priv *VAR_5,
      struct mlx4_en_rx_ring *VAR_6, u32 VAR_7, u16 VAR_8)
{
 struct mlx4_en_dev *VAR_9 = VAR_5->mdev;
 int VAR_10 = -VAR_1;
 int VAR_11;

 VAR_6->prod = 0;
 VAR_6->cons = 0;
 VAR_6->size = VAR_7;
 VAR_6->size_mask = VAR_7 - 1;
 VAR_6->stride = VAR_8;
 VAR_6->log_stride = FUNC_2(VAR_6->stride) - 1;
 VAR_6->buf_size = VAR_6->size * VAR_6->stride + VAR_4;

 VAR_11 = VAR_7 * FUNC_6(VAR_2 *
     sizeof(struct mlx4_en_rx_alloc));
 VAR_6->rx_info = FUNC_8(VAR_11);
 if (!VAR_6->rx_info) {
  FUNC_1(VAR_5, "Failed allocating rx_info ring\n");
  return -VAR_1;
 }
 FUNC_0(VAR_0, VAR_5, "Allocated rx_info ring at addr:%p size:%d\n",
   VAR_6->rx_info, VAR_11);

 VAR_10 = FUNC_3(VAR_9->dev, &VAR_6->wqres,
     VAR_6->buf_size, 2 * VAR_3);
 if (VAR_10)
  goto err_ring;

 VAR_10 = FUNC_4(&VAR_6->wqres.buf);
 if (VAR_10) {
  FUNC_1(VAR_5, "Failed to map RX buffer\n");
  goto err_hwq;
 }
 VAR_6->buf = VAR_6->wqres.buf.direct.buf;

 VAR_6->hwtstamp_rx_filter = VAR_5->hwtstamp_config.rx_filter;

 return 0;

err_hwq:
 FUNC_5(VAR_9->dev, &VAR_6->wqres, VAR_6->buf_size);
err_ring:
 FUNC_7(VAR_6->rx_info);
 VAR_6->rx_info = ((void*)0);
 return VAR_10;
}
