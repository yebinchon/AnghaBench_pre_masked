
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct Layer2 {int (* l2l1 ) (struct PStack*,int,int *) ;int i_queue; int T203; int t203; int flag; } ;
struct PStack {struct Layer2 l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 scalar_t__ FUNC_2 (int*,struct PStack*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct PStack*) ;
 int FUNC_4 (struct Layer2*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct PStack*) ;
 int FUNC_7 (struct PStack*,unsigned int) ;
 int FUNC_8 (struct Layer2*) ;
 scalar_t__ FUNC_9 (struct PStack*,unsigned int) ;
 int FUNC_10 (struct FsmInst*) ;
 int FUNC_11 (struct PStack*,int) ;
 int FUNC_12 (struct Layer2*) ;
 int FUNC_13 (struct PStack*,unsigned int) ;
 int FUNC_14 (struct sk_buff*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct PStack*,int) ;
 int FUNC_17 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_18 (int ,int *) ;

__attribute__((used)) static void
FUNC_19(struct FsmInst *VAR_6, int VAR_7, void *VAR_8)
{
 struct PStack *VAR_9 = VAR_6->userdata;
 struct sk_buff *VAR_10 = VAR_8;
 int VAR_11, VAR_12, VAR_13 = 0;
 unsigned int VAR_14;
 struct Layer2 *VAR_15 = &VAR_9->l2;

 VAR_12 = *VAR_10->data & 0x2;
 if (FUNC_18(VAR_2, &VAR_15->flag))
  VAR_12 = !VAR_12;

 FUNC_14(VAR_10, FUNC_8(VAR_15));

 if (FUNC_2(VAR_10->data, VAR_9)) {
  FUNC_12(VAR_15);
  VAR_13 = 1;
 } else
  FUNC_4(VAR_15);

 if (FUNC_18(VAR_1, &VAR_15->flag)) {
  VAR_11 = (VAR_10->data[1] & 0x1) == 0x1;
  VAR_14 = VAR_10->data[1] >> 1;
 } else {
  VAR_11 = (VAR_10->data[0] & 0x10);
  VAR_14 = (VAR_10->data[0] >> 5) & 0x7;
 }
 FUNC_5(VAR_10);

 if (VAR_12 && VAR_11) {
  if (FUNC_9(VAR_9, VAR_14)) {
   if (VAR_13) {
    FUNC_11(VAR_9, 15);
   } else {
    FUNC_16(VAR_9, 16);
    FUNC_0(&VAR_15->t203, VAR_15->T203,
         VAR_0, ((void*)0), 5);
    FUNC_13(VAR_9, VAR_14);
   }
   FUNC_7(VAR_9, VAR_14);
   FUNC_1(VAR_6, VAR_5);
   if (!FUNC_15(&VAR_15->i_queue) && FUNC_3(VAR_9))
    VAR_9->l2.l2l1(VAR_9, VAR_3 | VAR_4, ((void*)0));
  } else
   FUNC_10(VAR_6);
 } else {
  if (!VAR_12 && VAR_11)
   FUNC_6(VAR_9);
  if (FUNC_9(VAR_9, VAR_14)) {
   FUNC_13(VAR_9, VAR_14);
  } else
   FUNC_10(VAR_6);
 }
}
