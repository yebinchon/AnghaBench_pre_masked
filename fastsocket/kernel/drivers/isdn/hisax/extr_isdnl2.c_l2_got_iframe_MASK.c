
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct Layer2 {int vr; unsigned int vs; unsigned int va; int flag; int (* l2l1 ) (struct PStack*,int,int *) ;int i_queue; int T203; int t203; int (* l2l3 ) (struct PStack*,int,struct sk_buff*) ;} ;
struct PStack {struct Layer2 l2; } ;
struct FsmInst {scalar_t__ state; struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct PStack*,int ,int ,int) ;
 int FUNC_3 (struct PStack*) ;
 int FUNC_4 (struct Layer2*) ;
 int FUNC_5 (struct Layer2*,int ) ;
 scalar_t__ FUNC_6 (struct PStack*,unsigned int) ;
 int FUNC_7 (struct FsmInst*) ;
 int FUNC_8 (struct PStack*,int) ;
 int FUNC_9 (struct PStack*,unsigned int) ;
 int FUNC_10 (struct sk_buff*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct PStack*,int) ;
 int FUNC_13 (struct PStack*,int,struct sk_buff*) ;
 int FUNC_14 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;

__attribute__((used)) static void
FUNC_18(struct FsmInst *VAR_14, int VAR_15, void *VAR_16)
{
 struct PStack *VAR_17 = VAR_14->userdata;
 struct sk_buff *VAR_18 = VAR_16;
 struct Layer2 *VAR_19 = &(VAR_17->l2);
 int VAR_20, VAR_21, VAR_22;
 unsigned int VAR_23;

 VAR_22 = FUNC_4(VAR_19);
 if (FUNC_17(VAR_3, &VAR_19->flag)) {
  VAR_20 = ((VAR_18->data[VAR_22 + 1] & 0x1) == 0x1);
  VAR_21 = VAR_18->data[VAR_22] >> 1;
  VAR_23 = (VAR_18->data[VAR_22 + 1] >> 1) & 0x7f;
 } else {
  VAR_20 = (VAR_18->data[VAR_22] & 0x10);
  VAR_21 = (VAR_18->data[VAR_22] >> 1) & 0x7;
  VAR_23 = (VAR_18->data[VAR_22] >> 5) & 0x7;
 }
 if (FUNC_17(VAR_4, &VAR_19->flag)) {
  FUNC_1(VAR_18);
  if(VAR_20) FUNC_3(VAR_17);
 } else if (VAR_19->vr == VAR_21) {
  (VAR_19->vr)++;
  if(FUNC_17(VAR_3, &VAR_19->flag))
   VAR_19->vr %= 128;
  else
   VAR_19->vr %= 8;
  FUNC_15(VAR_6, &VAR_19->flag);

  if (VAR_20)
   FUNC_3(VAR_17);
  else
   FUNC_16(VAR_2, &VAR_19->flag);
  FUNC_10(VAR_18, FUNC_5(VAR_19, 0));
  VAR_17->l2.l2l3(VAR_17, VAR_0 | VAR_7, VAR_18);
 } else {

  FUNC_1(VAR_18);
  if (FUNC_16(VAR_6, &VAR_19->flag)) {
   if (VAR_20)
    FUNC_3(VAR_17);
  } else {
   FUNC_2(VAR_17, VAR_9, VAR_12, VAR_20);
   FUNC_15(VAR_2, &VAR_19->flag);
  }
 }

 if (FUNC_6(VAR_17, VAR_23)) {
  if (!FUNC_17(VAR_5, &VAR_17->l2.flag) && (VAR_14->state == VAR_13)) {
   if (VAR_23 == VAR_17->l2.vs) {
    FUNC_12(VAR_17, 13);
    FUNC_0(&VAR_17->l2.t203, VAR_17->l2.T203,
      VAR_1, ((void*)0), 7);
   } else if (VAR_23 != VAR_17->l2.va)
    FUNC_8(VAR_17, 14);
  }
  FUNC_9(VAR_17, VAR_23);
 } else {
  FUNC_7(VAR_14);
  return;
 }

 if (!FUNC_11(&VAR_17->l2.i_queue) && (VAR_14->state == VAR_13))
  VAR_17->l2.l2l1(VAR_17, VAR_8 | VAR_10, ((void*)0));
 if (FUNC_15(VAR_2, &VAR_17->l2.flag))
  FUNC_2(VAR_17, VAR_11, VAR_12, 0);
}
