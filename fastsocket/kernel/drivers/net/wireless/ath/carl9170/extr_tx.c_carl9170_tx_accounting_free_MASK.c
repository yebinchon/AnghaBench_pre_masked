
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ar9170 {unsigned long* queue_stop_timeout; unsigned long* max_queue_stop_timeout; int tx_flush; int tx_total_queued; int tx_stats_lock; TYPE_2__* hw; TYPE_1__* tx_stats; } ;
struct TYPE_5__ {unsigned int queues; } ;
struct TYPE_4__ {scalar_t__ len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*,unsigned int) ;
 int FUNC_3 (TYPE_2__*,unsigned int) ;
 int FUNC_4 (struct ar9170*) ;
 unsigned long VAR_1 ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ar9170 *VAR_2, struct sk_buff *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_5(VAR_3);

 FUNC_6(&VAR_2->tx_stats_lock);

 VAR_2->tx_stats[VAR_4].len--;

 if (!FUNC_4(VAR_2)) {
  unsigned int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2->hw->queues; VAR_5++) {
   if (VAR_2->tx_stats[VAR_5].len >= VAR_0)
    continue;

   if (FUNC_2(VAR_2->hw, VAR_5)) {
    unsigned long VAR_6;

    VAR_6 = VAR_1 - VAR_2->queue_stop_timeout[VAR_5];
    if (VAR_6 > VAR_2->max_queue_stop_timeout[VAR_5])
     VAR_2->max_queue_stop_timeout[VAR_5] = VAR_6;
   }

   FUNC_3(VAR_2->hw, VAR_5);
  }
 }

 FUNC_7(&VAR_2->tx_stats_lock);

 if (FUNC_0(&VAR_2->tx_total_queued))
  FUNC_1(&VAR_2->tx_flush);
}
