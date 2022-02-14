
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ rc; int T203; int t203; int flag; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int *,int) ;
 int FUNC_1 (struct FsmInst*,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (struct PStack*) ;

__attribute__((used)) static void
FUNC_4(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct PStack *VAR_7 = VAR_4->userdata;

 if (FUNC_2(VAR_2, &VAR_7->l2.flag) &&
  FUNC_2(VAR_1, &VAR_7->l2.flag)) {
  FUNC_0(&VAR_7->l2.t203, VAR_7->l2.T203, VAR_0, ((void*)0), 9);
  return;
 }
 FUNC_1(VAR_4, VAR_3);
 FUNC_3(VAR_7);
 VAR_7->l2.rc = 0;
}
