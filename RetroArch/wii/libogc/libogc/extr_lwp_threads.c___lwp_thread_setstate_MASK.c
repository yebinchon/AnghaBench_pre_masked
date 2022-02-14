
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int lwp_queue ;
struct TYPE_7__ {int node; } ;
struct TYPE_8__ {int cur_state; TYPE_1__ object; int priomap; int * ready; } ;
typedef TYPE_2__ lwp_cntrl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (TYPE_2__*) ;
 scalar_t__ FUNC_11 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_12 (char*,int ,int ,TYPE_2__*,int ) ;

void FUNC_13(lwp_cntrl *VAR_3,u32 VAR_4)
{
 u32 VAR_5;
 lwp_queue *VAR_6;

 VAR_6 = VAR_3->ready;



 FUNC_0(VAR_5);
 if(!FUNC_8(VAR_3->cur_state)) {
  VAR_3->cur_state = FUNC_3(VAR_3->cur_state,VAR_4);
  FUNC_2(VAR_5);
  return;
 }

 VAR_3->cur_state = VAR_4;
 if(FUNC_7(VAR_6)) {
  FUNC_6(VAR_6);
  FUNC_4(&VAR_3->priomap);
 } else
  FUNC_5(&VAR_3->object.node);
 FUNC_1(VAR_5);

 if(FUNC_11(VAR_3))
  FUNC_9();
 if(FUNC_10(VAR_3))
  VAR_1 = VAR_0;



 FUNC_2(VAR_5);
}
