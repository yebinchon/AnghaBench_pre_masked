
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int lwp_queue ;
struct TYPE_4__ {int node; } ;
struct TYPE_5__ {TYPE_1__ object; int priomap; int cur_state; int * ready; } ;
typedef TYPE_2__ lwp_cntrl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ) ;

void FUNC_8(lwp_cntrl *VAR_1)
{
 u32 VAR_2,VAR_3;
 lwp_queue *VAR_4;

 VAR_4 = VAR_1->ready;

 FUNC_0(VAR_2);

 VAR_3 = VAR_1->cur_state;
 VAR_1->cur_state = FUNC_6(VAR_3,VAR_0);

 if(FUNC_7(VAR_3)) {
  if(FUNC_5(VAR_4)) {
   FUNC_4(VAR_4);
   FUNC_2(&VAR_1->priomap);
  } else {
   FUNC_3(&VAR_1->object.node);
  }
 }

 FUNC_1(VAR_2);
}
