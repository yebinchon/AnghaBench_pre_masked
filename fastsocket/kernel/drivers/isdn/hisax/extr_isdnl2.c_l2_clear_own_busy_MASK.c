
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flag; } ;
struct PStack {TYPE_1__ l2; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct PStack*,int ,int ,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_4, int VAR_5, void *VAR_6)
{
 struct PStack *VAR_7 = VAR_4->userdata;

 if(!FUNC_1(VAR_1, &VAR_7->l2.flag)) {
  FUNC_0(VAR_7, VAR_2, VAR_3, 0);
  FUNC_1(VAR_0, &VAR_7->l2.flag);
 }
}
