
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct PStack {int dummy; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct PStack*,struct sk_buff*) ;
 int FUNC_1 (struct PStack*,int,int ) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct PStack *VAR_5 = VAR_2->userdata;
 struct sk_buff *VAR_6 = VAR_4;

 FUNC_1(VAR_5, VAR_0 | FUNC_0(VAR_5, VAR_6), VAR_1);
}
