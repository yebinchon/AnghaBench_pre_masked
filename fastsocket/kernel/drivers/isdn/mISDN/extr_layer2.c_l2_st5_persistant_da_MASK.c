
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {scalar_t__ tm; int ui_queue; int i_queue; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*) ;
 int FUNC_2 (struct layer2*,int ,int ) ;
 int FUNC_3 (struct FsmInst*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct layer2*) ;
 int FUNC_6 (struct layer2*,int) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_2, int VAR_3, void *VAR_4)
{
 struct layer2 *VAR_5 = VAR_2->userdata;
 struct sk_buff *VAR_6 = VAR_4;

 FUNC_4(&VAR_5->i_queue);
 FUNC_4(&VAR_5->ui_queue);
 FUNC_1(VAR_5);
 FUNC_6(VAR_5, 19);
 FUNC_5(VAR_5);
 FUNC_3(VAR_2, VAR_1);
 if (VAR_5->tm)
  FUNC_2(VAR_5, VAR_0, 0);
 FUNC_0(VAR_6);
}
