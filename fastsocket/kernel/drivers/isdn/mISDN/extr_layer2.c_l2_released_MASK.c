
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {scalar_t__ tm; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*,struct sk_buff*) ;
 int FUNC_2 (struct FsmInst*,int,void*) ;
 int FUNC_3 (struct layer2*,int ,int ) ;
 int FUNC_4 (struct layer2*,int ) ;
 int FUNC_5 (struct FsmInst*,int ) ;
 int FUNC_6 (struct layer2*,int) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct layer2 *VAR_6 = VAR_3->userdata;
 struct sk_buff *VAR_7 = VAR_5;

 if (!FUNC_1(VAR_6, VAR_7)) {
  FUNC_2(VAR_3, VAR_4, VAR_5);
  return;
 }
 FUNC_0(VAR_7);
 FUNC_6(VAR_6, 6);
 FUNC_4(VAR_6, VAR_0);
 FUNC_5(VAR_3, VAR_2);
 if (VAR_6->tm)
  FUNC_3(VAR_6, VAR_1, 0);
}
