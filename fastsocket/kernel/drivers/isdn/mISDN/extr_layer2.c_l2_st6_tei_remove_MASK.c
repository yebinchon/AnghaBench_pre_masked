
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct layer2 {int tei; int ui_queue; } ;
struct FsmInst {struct layer2* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct layer2*,int ,int ,int *) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct layer2*,int) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct layer2 *VAR_6 = VAR_3->userdata;

 FUNC_2(&VAR_6->ui_queue);
 VAR_6->tei = VAR_1;
 FUNC_3(VAR_6, 18);
 FUNC_0(VAR_6, VAR_0, 0, ((void*)0));
 FUNC_1(VAR_3, VAR_2);
}
