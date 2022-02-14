
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* l1l2 ) (struct PStack*,int,int *) ;} ;
struct PStack {TYPE_1__ l1; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct PStack*,int,int *) ;

__attribute__((used)) static void
FUNC_2(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct PStack *VAR_6 = VAR_3->userdata;

 FUNC_0(VAR_3, VAR_2);
 VAR_6->l1.l1l2(VAR_6, VAR_1 | VAR_0, ((void*)0));
}
