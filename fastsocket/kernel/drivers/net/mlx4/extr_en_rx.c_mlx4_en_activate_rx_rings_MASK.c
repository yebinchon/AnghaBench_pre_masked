
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_en_rx_ring {int stride; int buf; int buf_size; int size; scalar_t__ actual_size; scalar_t__ size_mask; scalar_t__ log_stride; int cqn; scalar_t__ cons; scalar_t__ prod; } ;
struct mlx4_en_rx_desc {int dummy; } ;
struct mlx4_en_priv {int num_frags; int rx_ring_num; struct mlx4_en_rx_ring* rx_ring; TYPE_2__* rx_cq; } ;
struct TYPE_3__ {int cqn; } ;
struct TYPE_4__ {TYPE_1__ mcq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*) ;
 int FUNC_4 (struct mlx4_en_priv*) ;
 int FUNC_5 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*) ;
 int FUNC_6 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*) ;
 int FUNC_7 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,int) ;
 int FUNC_8 (struct mlx4_en_rx_ring*) ;
 int FUNC_9 (int) ;

int FUNC_10(struct mlx4_en_priv *VAR_2)
{
 struct mlx4_en_rx_ring *VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7 = FUNC_9(sizeof(struct mlx4_en_rx_desc) +
     VAR_0 * VAR_2->num_frags);

 for (VAR_5 = 0; VAR_5 < VAR_2->rx_ring_num; VAR_5++) {
  VAR_3 = &VAR_2->rx_ring[VAR_5];

  VAR_3->prod = 0;
  VAR_3->cons = 0;
  VAR_3->actual_size = 0;
  VAR_3->cqn = VAR_2->rx_cq[VAR_5].mcq.cqn;

  VAR_3->stride = VAR_7;
  if (VAR_3->stride <= VAR_1)
   VAR_3->buf += VAR_1;

  VAR_3->log_stride = FUNC_1(VAR_3->stride) - 1;
  VAR_3->buf_size = VAR_3->size * VAR_3->stride;

  FUNC_2(VAR_3->buf, 0, VAR_3->buf_size);
  FUNC_8(VAR_3);


  for (VAR_4 = 0; VAR_4 < VAR_3->size; VAR_4++)
   FUNC_7(VAR_2, VAR_3, VAR_4);


  VAR_6 = FUNC_6(VAR_2, VAR_3);
  if (VAR_6) {
   FUNC_0(VAR_2, "Failed initializing ring allocator\n");
   if (VAR_3->stride <= VAR_1)
    VAR_3->buf -= VAR_1;
   VAR_5--;
   goto err_allocator;
  }
 }
 VAR_6 = FUNC_4(VAR_2);
 if (VAR_6)
  goto err_buffers;

 for (VAR_5 = 0; VAR_5 < VAR_2->rx_ring_num; VAR_5++) {
  VAR_3 = &VAR_2->rx_ring[VAR_5];

  VAR_3->size_mask = VAR_3->actual_size - 1;
  FUNC_8(VAR_3);
 }

 return 0;

err_buffers:
 for (VAR_5 = 0; VAR_5 < VAR_2->rx_ring_num; VAR_5++)
  FUNC_5(VAR_2, &VAR_2->rx_ring[VAR_5]);

 VAR_5 = VAR_2->rx_ring_num - 1;
err_allocator:
 while (VAR_5 >= 0) {
  if (VAR_2->rx_ring[VAR_5].stride <= VAR_1)
   VAR_2->rx_ring[VAR_5].buf -= VAR_1;
  FUNC_3(VAR_2, &VAR_2->rx_ring[VAR_5]);
  VAR_5--;
 }
 return VAR_6;
}
