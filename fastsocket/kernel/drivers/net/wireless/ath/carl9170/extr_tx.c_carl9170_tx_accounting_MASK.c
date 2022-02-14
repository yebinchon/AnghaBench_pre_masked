
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ar9170 {int tx_stats_lock; int * queue_stop_timeout; TYPE_2__* hw; TYPE_1__* tx_stats; int tx_total_queued; } ;
struct TYPE_4__ {int queues; } ;
struct TYPE_3__ {scalar_t__ len; scalar_t__ limit; int count; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (struct ar9170*) ;
 int VAR_0 ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ar9170 *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3, VAR_4;
 bool VAR_5;

 FUNC_0(&VAR_1->tx_total_queued);

 VAR_3 = FUNC_3(VAR_2);
 FUNC_4(&VAR_1->tx_stats_lock);







 VAR_1->tx_stats[VAR_3].len++;
 VAR_1->tx_stats[VAR_3].count++;

 VAR_5 = FUNC_2(VAR_1);
 for (VAR_4 = 0; VAR_4 < VAR_1->hw->queues; VAR_4++) {
  if (VAR_5 || VAR_1->tx_stats[VAR_4].len >= VAR_1->tx_stats[VAR_4].limit) {
   FUNC_1(VAR_1->hw, VAR_4);
   VAR_1->queue_stop_timeout[VAR_4] = VAR_0;
  }
 }

 FUNC_5(&VAR_1->tx_stats_lock);
}
