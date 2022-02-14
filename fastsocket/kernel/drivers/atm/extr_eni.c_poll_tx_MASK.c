
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct eni_tx {int backlog; scalar_t__ send; } ;
struct atm_dev {int dummy; } ;
typedef enum enq_res { ____Placeholder_enq_res } enq_res ;
struct TYPE_2__ {struct eni_tx* tx; } ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (struct atm_dev*) ;
 int VAR_0 ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_5(struct atm_dev *VAR_4)
{
 struct eni_tx *VAR_5;
 struct sk_buff *VAR_6;
 enum enq_res VAR_7;
 int VAR_8;

 FUNC_0(">poll_tx\n");
 for (VAR_8 = VAR_0-1; VAR_8 >= 0; VAR_8--) {
  VAR_5 = &FUNC_1(VAR_4)->tx[VAR_8];
  if (VAR_5->send)
   while ((VAR_6 = FUNC_3(&VAR_5->backlog))) {
    VAR_7 = FUNC_2(VAR_6);
    if (VAR_7 == VAR_2) continue;
    FUNC_0("re-queuing TX PDU\n");
    FUNC_4(&VAR_5->backlog,VAR_6);
VAR_3++;
    if (VAR_7 == VAR_1) return;
    break;
   }
 }
}
