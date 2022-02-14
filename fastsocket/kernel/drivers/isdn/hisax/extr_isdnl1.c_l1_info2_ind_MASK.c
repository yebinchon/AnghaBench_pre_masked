
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* l1hw ) (struct PStack*,int,int *) ;int Flags; } ;
struct PStack {TYPE_1__ l1; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void
FUNC_3(struct FsmInst *VAR_5, int VAR_6, void *VAR_7)
{
 struct PStack *VAR_8 = VAR_5->userdata;






  FUNC_0(VAR_5, VAR_3);
 VAR_8->l1.l1hw(VAR_8, VAR_1 | VAR_2, ((void*)0));
}
