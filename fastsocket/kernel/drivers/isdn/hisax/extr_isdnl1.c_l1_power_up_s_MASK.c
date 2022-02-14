
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int Flags; int timer; int (* l1hw ) (struct PStack*,int,int *) ;} ;
struct PStack {TYPE_1__ l1; } ;
struct FsmInst {struct PStack* userdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int ,int ,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct PStack*,int,int *) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(struct FsmInst *VAR_8, int VAR_9, void *VAR_10)
{
 struct PStack *VAR_11 = VAR_8->userdata;

 if (FUNC_4(VAR_1, &VAR_11->l1.Flags)) {
  FUNC_0(VAR_8, VAR_6);
  VAR_11->l1.l1hw(VAR_11, VAR_3 | VAR_4, ((void*)0));
  FUNC_1(&VAR_11->l1.timer, VAR_7, VAR_0, ((void*)0), 2);
  FUNC_3(VAR_2, &VAR_11->l1.Flags);
 } else
  FUNC_0(VAR_8, VAR_5);
}
