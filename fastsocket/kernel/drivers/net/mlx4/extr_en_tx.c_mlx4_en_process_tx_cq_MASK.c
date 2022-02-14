
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;
struct mlx4_en_tx_ring {int size_mask; int cons; int last_nr_txbb; int size; TYPE_1__* tx_info; } ;
struct TYPE_4__ {int wake_queue; } ;
struct mlx4_en_priv {int cqe_factor; TYPE_2__ port_stats; int port_up; struct mlx4_en_tx_ring* tx_ring; } ;
struct mlx4_cq {int cons_index; } ;
struct mlx4_en_cq {size_t ring; int size; struct mlx4_cqe* buf; struct mlx4_cq mcq; } ;
struct mlx4_cqe {int owner_sr_opcode; int wqe_index; } ;
struct TYPE_3__ {scalar_t__ ts_requested; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mlx4_cq*) ;
 int FUNC_3 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,int,int,int ) ;
 int FUNC_4 (struct mlx4_cqe*) ;
 int FUNC_5 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,int,int) ;
 int FUNC_6 (struct net_device*,size_t) ;
 struct mlx4_en_priv* FUNC_7 (struct net_device*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_1, struct mlx4_en_cq *VAR_2)
{
 struct mlx4_en_priv *VAR_3 = FUNC_7(VAR_1);
 struct mlx4_cq *VAR_4 = &VAR_2->mcq;
 struct mlx4_en_tx_ring *VAR_5 = &VAR_3->tx_ring[VAR_2->ring];
 struct mlx4_cqe *VAR_6;
 u16 VAR_7;
 u16 VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = 0;
 u32 VAR_12 = 0;
 u32 VAR_13 = VAR_4->cons_index;
 int VAR_14 = VAR_2->size;
 u32 VAR_15 = VAR_5->size_mask;
 struct mlx4_cqe *VAR_16 = VAR_2->buf;
 int VAR_17 = VAR_3->cqe_factor;
 u64 VAR_18 = 0;

 if (!VAR_3->port_up)
  return;

 VAR_7 = VAR_13 & VAR_15;
 VAR_6 = &VAR_16[(VAR_7 << VAR_17) + VAR_17];
 VAR_9 = VAR_5->cons & VAR_15;
 VAR_10 = VAR_9;


 while (FUNC_0(VAR_6->owner_sr_opcode & VAR_0,
   VAR_13 & VAR_14)) {




  FUNC_10();


  VAR_8 = FUNC_1(VAR_6->wqe_index) & VAR_15;

  do {
   VAR_11 += VAR_5->last_nr_txbb;
   VAR_9 = (VAR_9 + VAR_5->last_nr_txbb) & VAR_15;
   if (VAR_5->tx_info[VAR_9].ts_requested)
    VAR_18 = FUNC_4(VAR_6);


   VAR_5->last_nr_txbb = FUNC_3(
     VAR_3, VAR_5, VAR_9,
     !!((VAR_5->cons + VAR_11) &
     VAR_5->size), VAR_18);

   FUNC_5(VAR_3, VAR_5, VAR_10,
       !!((VAR_5->cons + VAR_12) &
      VAR_5->size));
   VAR_10 = VAR_9;
   VAR_12 = VAR_11;
  } while (VAR_9 != VAR_8);

  ++VAR_13;
  VAR_7 = VAR_13 & VAR_15;
  VAR_6 = &VAR_16[(VAR_7 << VAR_17) + VAR_17];
 }






 VAR_4->cons_index = VAR_13;
 FUNC_2(VAR_4);
 FUNC_11();
 VAR_5->cons += VAR_11;





 if (FUNC_8(FUNC_6(VAR_1, VAR_2->ring)) &&
     VAR_11 > 0) {
  FUNC_9(FUNC_6(VAR_1, VAR_2->ring));
  VAR_3->port_stats.wake_queue++;
 }
}
