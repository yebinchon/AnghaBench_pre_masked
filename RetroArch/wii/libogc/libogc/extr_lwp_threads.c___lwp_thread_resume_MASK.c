
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_6__ {int node; } ;
struct TYPE_7__ {scalar_t__ suspendcnt; scalar_t__ cur_state; scalar_t__ cur_prio; TYPE_1__ object; int ready; int priomap; } ;
typedef TYPE_2__ lwp_cntrl ;
struct TYPE_8__ {scalar_t__ is_preemptible; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 TYPE_4__* VAR_3 ;
 TYPE_2__* VAR_4 ;

void FUNC_7(lwp_cntrl *VAR_5,u32 VAR_6)
{
 u32 VAR_7,VAR_8;

 FUNC_0(VAR_7);

 if(VAR_6==VAR_1)
  VAR_5->suspendcnt = 0;
 else
  VAR_5->suspendcnt--;

 if(VAR_5->suspendcnt>0) {
  FUNC_2(VAR_7);
  return;
 }

 VAR_8 = VAR_5->cur_state;
 if(VAR_8&VAR_0) {
  VAR_8 = VAR_5->cur_state = FUNC_3(VAR_5->cur_state,VAR_0);
  if(FUNC_6(VAR_8)) {
   FUNC_4(&VAR_5->priomap);
   FUNC_5(VAR_5->ready,&VAR_5->object.node);
   FUNC_1(VAR_7);
   if(VAR_5->cur_prio<VAR_4->cur_prio) {
    VAR_4 = VAR_5;
    if(VAR_3->is_preemptible
     || VAR_5->cur_prio==0)
    VAR_2 = VAR_1;
   }
  }
 }
 FUNC_2(VAR_7);
}
