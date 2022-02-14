
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int* data; } ;
struct Layer2 {unsigned int vs; unsigned int va; int (* l2l1 ) (struct PStack*,int,int *) ;int i_queue; int t203; int T203; int l2m; int flag; } ;
struct TYPE_2__ {int (* layer ) (struct PStack*,int,void*) ;} ;
struct PStack {struct Layer2 l2; TYPE_1__ ma; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ,int *,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int*,struct PStack*) ;
 scalar_t__ FUNC_4 (int*,struct PStack*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct Layer2*) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct PStack*) ;
 int FUNC_8 (struct PStack*,unsigned int) ;
 int FUNC_9 (struct Layer2*) ;
 int FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (struct PStack*,unsigned int) ;
 int FUNC_12 (struct FsmInst*) ;
 int FUNC_13 (struct PStack*,int) ;
 int FUNC_14 (struct Layer2*) ;
 int FUNC_15 (struct PStack*,unsigned int) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct PStack*,int) ;
 int FUNC_19 (struct PStack*,int,void*) ;
 int FUNC_20 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_21 (int ,int *) ;

__attribute__((used)) static void
FUNC_22(struct FsmInst *VAR_10, int VAR_11, void *VAR_12)
{
 struct PStack *VAR_13 = VAR_10->userdata;
 struct sk_buff *VAR_14 = VAR_12;
 int VAR_15, VAR_16, VAR_17 = VAR_9;
 unsigned int VAR_18;
 struct Layer2 *VAR_19 = &VAR_13->l2;

 VAR_16 = *VAR_14->data & 0x2;
 if (FUNC_21(VAR_2, &VAR_19->flag))
  VAR_16 = !VAR_16;

 FUNC_16(VAR_14, FUNC_9(VAR_19));
 if (FUNC_4(VAR_14->data, VAR_13)) {
  FUNC_14(VAR_19);
  VAR_17 = VAR_8;
 } else
  FUNC_5(VAR_19);
 if (FUNC_3(VAR_14->data, VAR_13))
  VAR_17 = VAR_6;

 if (FUNC_21(VAR_1, &VAR_19->flag)) {
  VAR_15 = (VAR_14->data[1] & 0x1) == 0x1;
  VAR_18 = VAR_14->data[1] >> 1;
 } else {
  VAR_15 = (VAR_14->data[0] & 0x10);
  VAR_18 = (VAR_14->data[0] >> 5) & 0x7;
 }
 FUNC_6(VAR_14);

 if (VAR_15) {
  if (VAR_16)
   VAR_13->ma.layer(VAR_13, VAR_4 | VAR_3, (void *) 'A');
  else
   FUNC_7(VAR_13);
 }
 if (FUNC_11(VAR_13, VAR_18)) {
  if (VAR_17 == VAR_6) {
   FUNC_15(VAR_13, VAR_18);
   FUNC_8(VAR_13, VAR_18);
   FUNC_18(VAR_13, 10);
   if (FUNC_0(&VAR_13->l2.t203, VAR_13->l2.T203,
     VAR_0, ((void*)0), 6))
    FUNC_10(&VAR_13->l2.l2m, "Restart T203 ST7 REJ");
  } else if ((VAR_18 == VAR_19->vs) && (VAR_17 == VAR_9)) {
   FUNC_15(VAR_13, VAR_18);
   FUNC_18(VAR_13, 11);
   FUNC_2(&VAR_13->l2.t203, VAR_13->l2.T203,
     VAR_0, ((void*)0), 7);
  } else if ((VAR_19->va != VAR_18) || (VAR_17 == VAR_8)) {
   FUNC_15(VAR_13, VAR_18);
   if(VAR_17 != VAR_9) FUNC_1(&VAR_13->l2.t203, 9);
   FUNC_13(VAR_13, 12);
  }
  if (!FUNC_17(&VAR_13->l2.i_queue) && (VAR_17 == VAR_9))
   VAR_13->l2.l2l1(VAR_13, VAR_5 | VAR_7, ((void*)0));
 } else
  FUNC_12(VAR_10);
}
