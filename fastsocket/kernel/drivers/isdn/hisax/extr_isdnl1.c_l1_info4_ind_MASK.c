
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
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct FsmInst*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(struct FsmInst *VAR_10, int VAR_11, void *VAR_12)
{
 struct PStack *VAR_13 = VAR_10->userdata;






  FUNC_0(VAR_10, VAR_8);
 VAR_13->l1.l1hw(VAR_13, VAR_6 | VAR_7, ((void*)0));
 if (FUNC_4(VAR_3, &VAR_13->l1.Flags))
  FUNC_1(&VAR_13->l1.timer, 4);
 if (!FUNC_6(VAR_1, &VAR_13->l1.Flags)) {
  if (FUNC_4(VAR_4, &VAR_13->l1.Flags))
   FUNC_1(&VAR_13->l1.timer, 3);
  FUNC_2(&VAR_13->l1.timer, 110, VAR_0, ((void*)0), 2);
  FUNC_5(VAR_2, &VAR_13->l1.Flags);
 }
}
