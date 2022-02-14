
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct il_tx_queue {int swq_id; } ;
struct il_priv {int hw; int * queue_stop_count; int queue_stopped; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct il_priv *VAR_0, struct il_tx_queue *VAR_1)
{
 u8 VAR_2 = VAR_1->swq_id;
 u8 VAR_3 = VAR_2 & 3;
 u8 VAR_4 = (VAR_2 >> 2) & 0x1f;

 if (!FUNC_2(VAR_4, VAR_0->queue_stopped))
  if (FUNC_0(&VAR_0->queue_stop_count[VAR_3]) > 0)
   FUNC_1(VAR_0->hw, VAR_3);
}
