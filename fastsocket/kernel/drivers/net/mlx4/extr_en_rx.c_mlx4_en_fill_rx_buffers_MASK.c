
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_rx_ring {int actual_size; int prod; } ;
struct mlx4_en_priv {int rx_ring_num; struct mlx4_en_rx_ring* rx_ring; TYPE_1__* prof; } ;
struct TYPE_2__ {int rx_ring_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*,int,int) ;
 int FUNC_2 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,int) ;
 scalar_t__ FUNC_3 (struct mlx4_en_priv*,struct mlx4_en_rx_ring*,int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mlx4_en_priv *VAR_3)
{
 struct mlx4_en_rx_ring *VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3->prof->rx_ring_size; VAR_6++) {
  for (VAR_5 = 0; VAR_5 < VAR_3->rx_ring_num; VAR_5++) {
   VAR_4 = &VAR_3->rx_ring[VAR_5];

   if (FUNC_3(VAR_3, VAR_4,
          VAR_4->actual_size,
          VAR_1)) {
    if (VAR_4->actual_size < VAR_2) {
     FUNC_0(VAR_3, "Failed to allocate "
           "enough rx buffers\n");
     return -VAR_0;
    } else {
     VAR_7 = FUNC_4(VAR_4->actual_size);
     FUNC_1(VAR_3, "Only %d buffers allocated "
            "reducing ring size to %d",
      VAR_4->actual_size, VAR_7);
     goto reduce_rings;
    }
   }
   VAR_4->actual_size++;
   VAR_4->prod++;
  }
 }
 return 0;

reduce_rings:
 for (VAR_5 = 0; VAR_5 < VAR_3->rx_ring_num; VAR_5++) {
  VAR_4 = &VAR_3->rx_ring[VAR_5];
  while (VAR_4->actual_size > VAR_7) {
   VAR_4->actual_size--;
   VAR_4->prod--;
   FUNC_2(VAR_3, VAR_4, VAR_4->actual_size);
  }
 }

 return 0;
}
