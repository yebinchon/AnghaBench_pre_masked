
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct PStack {int dummy; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct PStack*,struct sk_buff*) ;
 int FUNC_2 (struct PStack*,int ) ;
 int FUNC_3 (struct PStack*,int) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct PStack *VAR_5 = VAR_2->userdata;
 struct sk_buff *VAR_6 = VAR_4;

 if (FUNC_1(VAR_5, VAR_6)) {
  FUNC_3(VAR_5, 8);
  FUNC_2(VAR_5, VAR_0);
  FUNC_0(VAR_2, VAR_1);
 }
}
