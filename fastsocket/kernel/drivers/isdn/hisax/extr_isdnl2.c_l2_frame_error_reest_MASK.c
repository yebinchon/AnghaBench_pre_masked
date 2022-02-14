
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flag; } ;
struct TYPE_3__ {int (* layer ) (struct PStack*,int,void*) ;} ;
struct PStack {TYPE_2__ l2; TYPE_1__ ma; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct FsmInst*) ;
 int FUNC_1 (struct PStack*,int,void*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_3, int VAR_4, void *VAR_5)
{
 struct PStack *VAR_6 = VAR_3->userdata;

 VAR_6->ma.layer(VAR_6, VAR_2 | VAR_1, VAR_5);
 FUNC_0(VAR_3);
 FUNC_2(VAR_0, &VAR_6->l2.flag);
}
