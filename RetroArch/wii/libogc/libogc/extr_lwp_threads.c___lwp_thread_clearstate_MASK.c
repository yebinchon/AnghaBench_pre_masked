
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int node; } ;
struct TYPE_7__ {int cur_state; scalar_t__ cur_prio; TYPE_1__ object; int ready; int priomap; } ;
typedef TYPE_2__ lwp_cntrl ;
struct TYPE_8__ {scalar_t__ is_preemptible; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_7(lwp_cntrl *VAR_4,u32 VAR_5)
{
 u32 VAR_6,VAR_7;

 FUNC_0(VAR_6);

 VAR_7 = VAR_4->cur_state;
 if(VAR_7&VAR_5) {
  VAR_7 = VAR_4->cur_state = FUNC_3(VAR_7,VAR_5);
  if(FUNC_6(VAR_7)) {
   FUNC_4(&VAR_4->priomap);
   FUNC_5(VAR_4->ready,&VAR_4->object.node);
   FUNC_1(VAR_6);

   if(VAR_4->cur_prio<VAR_3->cur_prio) {
    VAR_3 = VAR_4;
    if(VAR_2->is_preemptible
     || VAR_4->cur_prio==0)
    VAR_1 = VAR_0;
   }
  }
 }

 FUNC_2(VAR_6);
}
