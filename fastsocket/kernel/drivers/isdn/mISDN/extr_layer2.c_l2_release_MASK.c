
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int dummy; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct layer2*,int ,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct layer2 *VAR_4 = VAR_1->userdata;
 struct sk_buff *VAR_5 = VAR_3;

 FUNC_1(VAR_5, 0);
 FUNC_0(VAR_4, VAR_0, VAR_5);
}
