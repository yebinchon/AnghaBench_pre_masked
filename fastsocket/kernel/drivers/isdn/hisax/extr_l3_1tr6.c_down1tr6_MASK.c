
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int setup; } ;
struct l3_process {int callref; int state; TYPE_1__ para; struct Channel* chan; } ;
struct TYPE_6__ {int debug; } ;
struct PStack {TYPE_2__ l3; } ;
struct Channel {int setup; struct l3_process* proc; } ;
typedef int setup_parm ;
struct TYPE_7__ {int primitive; int state; int (* rout ) (struct l3_process*,int,void*) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_1 (struct PStack*,char*) ;
 int FUNC_2 (struct PStack*,int,int *) ;
 int FUNC_3 (int *,int *,int) ;
 struct l3_process* FUNC_4 (struct PStack*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,char*,int,int) ;
 int FUNC_7 (struct l3_process*,int,void*) ;

__attribute__((used)) static void
FUNC_8(struct PStack *VAR_5, int VAR_6, void *VAR_7)
{
 int VAR_8, VAR_9;
 struct l3_process *VAR_10;
 struct Channel *VAR_11;
 char VAR_12[80];

 if ((VAR_1 | VAR_3)== VAR_6) {
  FUNC_2(VAR_5, VAR_6, ((void*)0));
  return;
 } else if ((VAR_0 | VAR_3) == VAR_6) {
  VAR_11 = VAR_7;
  VAR_9 = FUNC_5();
  VAR_9 |= 0x80;
  if (!(VAR_10 = FUNC_4(VAR_5, VAR_9))) {
   return;
  } else {
   VAR_10->chan = VAR_11;
   VAR_11->proc = VAR_10;
   FUNC_3(&VAR_10->para.setup, &VAR_11->setup, sizeof(setup_parm));
   VAR_10->callref = VAR_9;
  }
 } else {
  VAR_10 = VAR_7;
 }

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++)
  if ((VAR_6 == VAR_4[VAR_8].primitive) &&
      ((1 << VAR_10->state) & VAR_4[VAR_8].state))
   break;
 if (VAR_8 == FUNC_0(VAR_4)) {
  if (VAR_5->l3.debug & VAR_2) {
   FUNC_6(VAR_12, "down1tr6 state %d prim %d unhandled",
    VAR_10->state, VAR_6);
   FUNC_1(VAR_5, VAR_12);
  }
 } else {
  if (VAR_5->l3.debug & VAR_2) {
   FUNC_6(VAR_12, "down1tr6 state %d prim %d",
    VAR_10->state, VAR_6);
   FUNC_1(VAR_5, VAR_12);
  }
  VAR_4[VAR_8].rout(VAR_10, VAR_6, VAR_7);
 }
}
