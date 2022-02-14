
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct proc {int dummy; } ;
typedef int caddr_t ;
struct TYPE_7__ {struct proc* handler_proc; scalar_t__ handler_tid; } ;
struct TYPE_6__ {int flags; TYPE_1__* vp; scalar_t__ token; scalar_t__ vid; } ;
struct TYPE_5__ {int v_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_7 ;
 TYPE_4__* VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 TYPE_3__* VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct proc *VAR_12)
{
 int VAR_13, VAR_14 = 0;

 for (VAR_13 = 0; VAR_13 < VAR_1; VAR_13++) {
  if (VAR_12 == VAR_8[VAR_13].handler_proc) {
   VAR_14 |= FUNC_2(VAR_13);
   VAR_8[VAR_13].handler_tid = 0;
   VAR_8[VAR_13].handler_proc = ((void*)0);
  }
 }

 if (VAR_14 == 0) {
  return;
 }

 FUNC_0(&VAR_7);
 if (VAR_14 & VAR_5) {

  VAR_11 = 0;
 }




 for(VAR_13=0; VAR_13 < VAR_0; VAR_13++) {
  if (VAR_10[VAR_13].flags & (VAR_3 | VAR_4)) {

   if ( VAR_10[VAR_13].flags & VAR_14 ) {

    if (VAR_10[VAR_13].vp && (VAR_10[VAR_13].vp->v_flag & VAR_6)) {
     FUNC_3(VAR_10[VAR_13].vp);
     VAR_10[VAR_13].vp->v_flag &= ~VAR_6;
     FUNC_4(VAR_10[VAR_13].vp);
    }
    VAR_10[VAR_13].vp = ((void*)0);
    VAR_10[VAR_13].vid = 0;
    VAR_10[VAR_13].flags = VAR_2;
    VAR_10[VAR_13].token = 0;

    FUNC_5((caddr_t)&(VAR_10[VAR_13].vp));
   }
  }
 }

 FUNC_5((caddr_t)&VAR_9);
 FUNC_1(&VAR_7);
}
