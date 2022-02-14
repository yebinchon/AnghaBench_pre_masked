
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct p54_tx_queue_stats {scalar_t__ len; scalar_t__ limit; int count; } ;
struct p54_common {int tx_stats_lock; int hw; struct p54_tx_queue_stats* tx_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t const) ;
 size_t VAR_2 ;
 size_t const VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct p54_common *VAR_4,
           struct sk_buff *VAR_5,
           const u16 VAR_6)
{
 struct p54_tx_queue_stats *VAR_7;
 unsigned long VAR_8;

 if (FUNC_1(VAR_6 >= VAR_3))
  return -VAR_0;

 VAR_7 = &VAR_4->tx_stats[VAR_6];

 FUNC_3(&VAR_4->tx_stats_lock, VAR_8);
 if (FUNC_5(VAR_7->len >= VAR_7->limit && FUNC_0(VAR_6))) {
  FUNC_4(&VAR_4->tx_stats_lock, VAR_8);
  return -VAR_1;
 }

 VAR_7->len++;
 VAR_7->count++;

 if (FUNC_5(VAR_7->len == VAR_7->limit && FUNC_0(VAR_6))) {
  u16 VAR_9 = VAR_6 - VAR_2;
  FUNC_2(VAR_4->hw, VAR_9);
 }

 FUNC_4(&VAR_4->tx_stats_lock, VAR_8);
 return 0;
}
