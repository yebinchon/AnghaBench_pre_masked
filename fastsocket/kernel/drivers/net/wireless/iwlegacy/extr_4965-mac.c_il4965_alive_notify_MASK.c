
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {int max_txq_num; } ;
struct TYPE_3__ {int dma; } ;
struct il_priv {scalar_t__ scd_base_addr; int lock; int * txq; scalar_t__ txq_ctx_active_msk; int * queue_stop_count; int * queue_stopped; TYPE_2__ hw_params; TYPE_1__ scd_bc_tbls; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (int) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (int *,int ) ;
 int* VAR_21 ;
 int FUNC_8 (struct il_priv*,int ,int ) ;
 int FUNC_9 (struct il_priv*,int *,int,int ) ;
 int FUNC_10 (struct il_priv*,int ) ;
 scalar_t__ FUNC_11 (struct il_priv*,int ) ;
 scalar_t__ FUNC_12 (struct il_priv*,int ) ;
 int FUNC_13 (struct il_priv*,int) ;
 int FUNC_14 (struct il_priv*,int ,int) ;
 int FUNC_15 (struct il_priv*,int ,int) ;
 int FUNC_16 (struct il_priv*,scalar_t__,int) ;
 int FUNC_17 (int *,int ,int) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_20(struct il_priv *VAR_22)
{
 u32 VAR_23;
 unsigned long VAR_24;
 int VAR_25, VAR_26;
 u32 VAR_27;

 FUNC_18(&VAR_22->lock, VAR_24);


 VAR_22->scd_base_addr = FUNC_12(VAR_22, VAR_14);
 VAR_23 = VAR_22->scd_base_addr + VAR_6;
 for (; VAR_23 < VAR_22->scd_base_addr + VAR_16; VAR_23 += 4)
  FUNC_16(VAR_22, VAR_23, 0);
 for (; VAR_23 < VAR_22->scd_base_addr + VAR_15; VAR_23 += 4)
  FUNC_16(VAR_22, VAR_23, 0);
 for (;
      VAR_23 <
      VAR_22->scd_base_addr +
      FUNC_5(VAR_22->hw_params.max_txq_num);
      VAR_23 += 4)
  FUNC_16(VAR_22, VAR_23, 0);


 FUNC_15(VAR_22, VAR_7, VAR_22->scd_bc_tbls.dma >> 10);


 for (VAR_26 = 0; VAR_26 < VAR_0; VAR_26++)
  FUNC_14(VAR_22, FUNC_2(VAR_26),
        VAR_1 |
        VAR_2);


 VAR_27 = FUNC_11(VAR_22, VAR_3);
 FUNC_14(VAR_22, VAR_3,
       VAR_27 | VAR_4);


 FUNC_15(VAR_22, VAR_9, 0);


 for (VAR_25 = 0; VAR_25 < VAR_22->hw_params.max_txq_num; VAR_25++) {


  FUNC_15(VAR_22, FUNC_4(VAR_25), 0);
  FUNC_14(VAR_22, VAR_5, 0 | (VAR_25 << 8));


  FUNC_16(VAR_22,
      VAR_22->scd_base_addr +
      FUNC_3(VAR_25),
      (VAR_20 <<
       VAR_11) &
      VAR_10);


  FUNC_16(VAR_22,
      VAR_22->scd_base_addr +
      FUNC_3(VAR_25) +
      sizeof(u32),
      (VAR_19 <<
       VAR_13) &
      VAR_12);

 }
 FUNC_15(VAR_22, VAR_8,
     (1 << VAR_22->hw_params.max_txq_num) - 1);


 FUNC_10(VAR_22, FUNC_6(0, 6));

 FUNC_8(VAR_22, VAR_17, 0);


 FUNC_17(&VAR_22->queue_stopped[0], 0, sizeof(VAR_22->queue_stopped));
 for (VAR_25 = 0; VAR_25 < 4; VAR_25++)
  FUNC_7(&VAR_22->queue_stop_count[VAR_25], 0);


 VAR_22->txq_ctx_active_msk = 0;

 FUNC_1(FUNC_0(VAR_21) != 7);

 for (VAR_25 = 0; VAR_25 < FUNC_0(VAR_21); VAR_25++) {
  int VAR_28 = VAR_21[VAR_25];

  FUNC_13(VAR_22, VAR_25);

  if (VAR_28 == VAR_18)
   continue;

  FUNC_9(VAR_22, &VAR_22->txq[VAR_25], VAR_28, 0);
 }

 FUNC_19(&VAR_22->lock, VAR_24);

 return 0;
}
