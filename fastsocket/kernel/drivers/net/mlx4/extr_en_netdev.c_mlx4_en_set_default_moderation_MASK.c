
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {int rx_ring_num; int tx_ring_num; int adaptive_rx_coal; scalar_t__ last_moder_tx_packets; scalar_t__ last_moder_jiffies; int sample_interval; int rx_usecs_high; int pkt_rate_high; int rx_usecs_low; int pkt_rate_low; int tx_usecs; int tx_frames; struct mlx4_en_cq* tx_cq; scalar_t__* last_moder_bytes; scalar_t__* last_moder_packets; int * last_moder_time; int rx_usecs; int rx_frames; struct mlx4_en_cq* rx_cq; TYPE_1__* dev; } ;
struct mlx4_en_cq {int moder_time; int moder_cnt; } ;
struct TYPE_2__ {int mtu; } ;


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
 int VAR_10 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx4_en_priv *VAR_11)
{
 struct mlx4_en_cq *VAR_12;
 int VAR_13;







 VAR_11->rx_frames = VAR_2;
 VAR_11->rx_usecs = VAR_3;
 VAR_11->tx_frames = VAR_9;
 VAR_11->tx_usecs = VAR_10;
 FUNC_0(VAR_0, VAR_11, "Default coalesing params for mtu:%d - rx_frames:%d rx_usecs:%d\n",
        VAR_11->dev->mtu, VAR_11->rx_frames, VAR_11->rx_usecs);


 for (VAR_13 = 0; VAR_13 < VAR_11->rx_ring_num; VAR_13++) {
  VAR_12 = &VAR_11->rx_cq[VAR_13];
  VAR_12->moder_cnt = VAR_11->rx_frames;
  VAR_12->moder_time = VAR_11->rx_usecs;
  VAR_11->last_moder_time[VAR_13] = VAR_1;
  VAR_11->last_moder_packets[VAR_13] = 0;
  VAR_11->last_moder_bytes[VAR_13] = 0;
 }

 for (VAR_13 = 0; VAR_13 < VAR_11->tx_ring_num; VAR_13++) {
  VAR_12 = &VAR_11->tx_cq[VAR_13];
  VAR_12->moder_cnt = VAR_11->tx_frames;
  VAR_12->moder_time = VAR_11->tx_usecs;
 }


 VAR_11->pkt_rate_low = VAR_7;
 VAR_11->rx_usecs_low = VAR_5;
 VAR_11->pkt_rate_high = VAR_6;
 VAR_11->rx_usecs_high = VAR_4;
 VAR_11->sample_interval = VAR_8;
 VAR_11->adaptive_rx_coal = 1;
 VAR_11->last_moder_jiffies = 0;
 VAR_11->last_moder_tx_packets = 0;
}
