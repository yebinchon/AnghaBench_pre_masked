
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int dummy; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct layer2*,struct sk_buff*) ;
 int FUNC_1 (struct layer2*,int ,void*) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_1, int VAR_2, void *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_3;
 struct layer2 *VAR_5 = VAR_1->userdata;

 if (FUNC_0(VAR_5, VAR_4))
  FUNC_1(VAR_5, VAR_0, (void *) 'C');
 else
  FUNC_1(VAR_5, VAR_0, (void *) 'D');

}
