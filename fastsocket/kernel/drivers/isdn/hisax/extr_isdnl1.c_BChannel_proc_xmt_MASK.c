
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* l2l1 ) (struct PStack*,int,int *) ;} ;
struct TYPE_3__ {int (* l1l2 ) (struct PStack*,int,int *) ;int Flags; } ;
struct PStack {TYPE_2__ l2; TYPE_1__ l1; } ;
struct BCState {int squeue; int Flag; int cs; struct PStack* st; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct PStack*,int,int *) ;
 int FUNC_3 (struct PStack*,int,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct BCState *VAR_6)
{
 struct PStack *VAR_7 = VAR_6->st;

 if (FUNC_5(VAR_1, &VAR_6->Flag)) {
  FUNC_0(VAR_6->cs, "BC_BUSY Error");
  return;
 }

 if (FUNC_4(VAR_3, &VAR_7->l1.Flags))
  VAR_7->l1.l1l2(VAR_7, VAR_5 | VAR_2, ((void*)0));
 if (!FUNC_5(VAR_0, &VAR_6->Flag)) {
  if (!FUNC_5(VAR_1, &VAR_6->Flag) &&
      FUNC_1(&VAR_6->squeue)) {
   VAR_7->l2.l2l1(VAR_7, VAR_4 | VAR_2, ((void*)0));
  }
 }
}
