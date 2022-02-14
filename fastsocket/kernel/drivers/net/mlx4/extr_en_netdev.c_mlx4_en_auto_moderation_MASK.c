
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {unsigned long sample_interval; int rx_ring_num; unsigned long* last_moder_packets; unsigned long* last_moder_bytes; unsigned long pkt_rate_low; int rx_usecs_low; unsigned long pkt_rate_high; int rx_usecs_high; int* last_moder_time; scalar_t__ last_moder_jiffies; int rx_frames; struct mlx4_en_cq* rx_cq; int stats_lock; TYPE_1__* rx_ring; int adaptive_rx_coal; } ;
struct mlx4_en_cq {int moder_time; int moder_cnt; } ;
struct TYPE_2__ {unsigned long packets; unsigned long bytes; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct mlx4_en_priv*,char*,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct mlx4_en_priv *VAR_4)
{
 unsigned long VAR_5 = (unsigned long) (VAR_3 - VAR_4->last_moder_jiffies);
 struct mlx4_en_cq *VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10;
 unsigned long VAR_11;
 unsigned long VAR_12;
 int VAR_13;
 int VAR_14, VAR_15;

 if (!VAR_4->adaptive_rx_coal || VAR_5 < VAR_4->sample_interval * VAR_0)
  return;

 for (VAR_14 = 0; VAR_14 < VAR_4->rx_ring_num; VAR_14++) {
  FUNC_2(&VAR_4->stats_lock);
  VAR_10 = VAR_4->rx_ring[VAR_14].packets;
  VAR_11 = VAR_4->rx_ring[VAR_14].bytes;
  FUNC_3(&VAR_4->stats_lock);

  VAR_12 = ((unsigned long) (VAR_10 -
    VAR_4->last_moder_packets[VAR_14]));
  VAR_7 = VAR_12;
  VAR_8 = VAR_7 * VAR_0 / VAR_5;
  VAR_9 = VAR_7 ? ((unsigned long) (VAR_11 -
    VAR_4->last_moder_bytes[VAR_14])) / VAR_7 : 0;



  if (VAR_8 > (VAR_2 / VAR_4->rx_ring_num) &&
      VAR_9 > VAR_1) {
   if (VAR_8 < VAR_4->pkt_rate_low)
    VAR_13 = VAR_4->rx_usecs_low;
   else if (VAR_8 > VAR_4->pkt_rate_high)
    VAR_13 = VAR_4->rx_usecs_high;
   else
    VAR_13 = (VAR_8 - VAR_4->pkt_rate_low) *
     (VAR_4->rx_usecs_high - VAR_4->rx_usecs_low) /
     (VAR_4->pkt_rate_high - VAR_4->pkt_rate_low) +
     VAR_4->rx_usecs_low;
  } else {
   VAR_13 = VAR_4->rx_usecs_low;
  }

  if (VAR_13 != VAR_4->last_moder_time[VAR_14]) {
   VAR_4->last_moder_time[VAR_14] = VAR_13;
   VAR_6 = &VAR_4->rx_cq[VAR_14];
   VAR_6->moder_time = VAR_13;
   VAR_6->moder_cnt = VAR_4->rx_frames;
   VAR_15 = FUNC_1(VAR_4, VAR_6);
   if (VAR_15)
    FUNC_0(VAR_4, "Failed modifying moderation for cq:%d\n",
           VAR_14);
  }
  VAR_4->last_moder_packets[VAR_14] = VAR_10;
  VAR_4->last_moder_bytes[VAR_14] = VAR_11;
 }

 VAR_4->last_moder_jiffies = VAR_3;
}
