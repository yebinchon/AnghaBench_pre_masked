
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ar9170 {int tx_schedule; int tx_janitor; TYPE_1__* hw; int * tx_status; int tx_total_pending; int * tx_pending; } ;
struct TYPE_2__ {unsigned int queues; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar9170*) ;
 unsigned int FUNC_1 (struct ar9170*,unsigned int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ar9170*,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct ar9170*,int *) ;
 int FUNC_6 (struct ar9170*,struct sk_buff*) ;
 int FUNC_7 (struct ar9170*) ;
 int FUNC_8 (struct ar9170*,struct sk_buff*) ;
 int FUNC_9 (TYPE_1__*,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static void FUNC_14(struct ar9170 *VAR_1)
{
 struct sk_buff *VAR_2;
 unsigned int VAR_3, VAR_4;
 bool VAR_5 = 0;

 VAR_1->tx_schedule = 0;

 if (FUNC_13(!FUNC_0(VAR_1)))
  return;

 FUNC_7(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_1->hw->queues; VAR_3++) {
  while (!FUNC_11(&VAR_1->tx_pending[VAR_3])) {
   VAR_2 = FUNC_5(VAR_1, &VAR_1->tx_pending[VAR_3]);
   if (FUNC_13(!VAR_2))
    break;

   if (FUNC_13(FUNC_6(VAR_1, VAR_2)))
    continue;

   FUNC_3(VAR_1, VAR_2);

   FUNC_2(&VAR_1->tx_total_pending);

   VAR_4 = FUNC_1(VAR_1, VAR_3);




   FUNC_12(&VAR_1->tx_status[VAR_4], VAR_2);
   FUNC_4(VAR_2);

   FUNC_8(VAR_1, VAR_2);
   VAR_5 = 1;
  }
 }

 if (!VAR_5)
  return;

 FUNC_9(VAR_1->hw, &VAR_1->tx_janitor,
  FUNC_10(VAR_0));
}
