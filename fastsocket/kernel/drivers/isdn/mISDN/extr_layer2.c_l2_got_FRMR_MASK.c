
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int* data; } ;
struct layer2 {int flag; } ;
struct FsmInst {scalar_t__ state; struct layer2* userdata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct FsmInst*) ;
 scalar_t__ FUNC_3 (struct layer2*) ;
 int FUNC_4 (struct layer2*,int ,void*) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct layer2 *VAR_6 = VAR_3->userdata;
 struct sk_buff *VAR_7 = VAR_5;

 FUNC_5(VAR_7, FUNC_3(VAR_6) + 1);

 if (!(VAR_7->data[0] & 1) || ((VAR_7->data[0] & 3) == 1) ||
     (FUNC_0(VAR_7->data) && (VAR_3->state == VAR_2))) {
  FUNC_4(VAR_6, VAR_1, (void *) 'K');
  FUNC_2(VAR_3);
  FUNC_6(VAR_0, &VAR_6->flag);
 }
 FUNC_1(VAR_7);
}
