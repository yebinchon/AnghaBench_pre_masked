
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_8__ {int node; } ;
struct TYPE_9__ {TYPE_1__ object; int ready; int priomap; int cur_state; scalar_t__ cur_prio; } ;
typedef TYPE_2__ lwp_cntrl ;
struct TYPE_10__ {scalar_t__ is_preemptible; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*,scalar_t__) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_3__* VAR_4 ;

void FUNC_11(lwp_cntrl *VAR_5,u32 VAR_6,u32 VAR_7)
{
 u32 VAR_8;

 FUNC_10(VAR_5);

 if(VAR_5->cur_prio!=VAR_6)
  FUNC_9(VAR_5,VAR_6);

 FUNC_0(VAR_8);

 VAR_5->cur_state = FUNC_3(VAR_5->cur_state,VAR_0);
 if(!FUNC_7(VAR_5->cur_state)) {
  FUNC_2(VAR_8);
  return;
 }

 FUNC_4(&VAR_5->priomap);
 if(VAR_7)
  FUNC_6(VAR_5->ready,&VAR_5->object.node);
 else
  FUNC_5(VAR_5->ready,&VAR_5->object.node);

 FUNC_1(VAR_8);

 FUNC_8();

 if(!(VAR_3==VAR_4)
  && VAR_3->is_preemptible)
  VAR_2 = VAR_1;

 FUNC_2(VAR_8);
}
