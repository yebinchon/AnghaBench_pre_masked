
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct bfusb_data {int state; int transmit_q; int pending_tx; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,struct bfusb_data*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct bfusb_data*,struct sk_buff*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *) ;
 struct sk_buff* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct bfusb_data *VAR_3)
{
 struct sk_buff *VAR_4;

 FUNC_0("bfusb %p", VAR_3);

 if (FUNC_7(VAR_1, &VAR_3->state)) {
  FUNC_4(VAR_2, &VAR_3->state);
  return;
 }

 do {
  FUNC_3(VAR_2, &VAR_3->state);

  while ((FUNC_1(&VAR_3->pending_tx) < VAR_0) &&
    (VAR_4 = FUNC_5(&VAR_3->transmit_q))) {
   if (FUNC_2(VAR_3, VAR_4) < 0) {
    FUNC_6(&VAR_3->transmit_q, VAR_4);
    break;
   }
  }

 } while (FUNC_8(VAR_2, &VAR_3->state));

 FUNC_3(VAR_1, &VAR_3->state);
}
