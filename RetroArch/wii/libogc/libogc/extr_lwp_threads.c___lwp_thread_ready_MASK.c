
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {int node; } ;
struct TYPE_9__ {TYPE_1__ object; int ready; int priomap; int cur_state; } ;
typedef TYPE_2__ lwp_cntrl ;
struct TYPE_10__ {scalar_t__ is_preemptible; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_7 (char*,TYPE_2__*) ;

void FUNC_8(lwp_cntrl *VAR_5)
{
 u32 VAR_6;
 lwp_cntrl *VAR_7;

 FUNC_0(VAR_6);



 VAR_5->cur_state = VAR_0;
 FUNC_3(&VAR_5->priomap);
 FUNC_4(VAR_5->ready,&VAR_5->object.node);
 FUNC_1(VAR_6);

 FUNC_5();
 VAR_7 = VAR_4;
 if(!(FUNC_6(VAR_7)) && VAR_3->is_preemptible)
  VAR_2 = VAR_1;

 FUNC_2(VAR_6);
}
