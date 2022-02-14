
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef int lwp_thrqueue ;
struct TYPE_5__ {int node; } ;
struct TYPE_6__ {int timer; TYPE_1__ object; int cur_state; } ;
typedef TYPE_2__ lwp_cntrl ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(lwp_thrqueue *VAR_0,lwp_cntrl *VAR_1)
{
 u32 VAR_2;

 FUNC_0(VAR_2);
 if(!FUNC_3(VAR_1->cur_state)) {
  FUNC_1(VAR_2);
  return;
 }

 FUNC_2(&VAR_1->object.node);
 if(!FUNC_6(&VAR_1->timer)) {
  FUNC_1(VAR_2);
 } else {
  FUNC_5(&VAR_1->timer);
  FUNC_1(VAR_2);
  FUNC_7(&VAR_1->timer);
 }
 FUNC_4(VAR_1);
}
