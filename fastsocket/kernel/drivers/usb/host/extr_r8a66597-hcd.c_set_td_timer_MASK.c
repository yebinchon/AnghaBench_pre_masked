
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r8a66597_td {size_t pipenum; TYPE_1__* urb; } ;
struct r8a66597 {int timeout_map; int * td_timer; int * pipe_queue; } ;
struct TYPE_2__ {int pipe; } ;


 int FUNC_0 (int) ;


 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct r8a66597 *VAR_1, struct r8a66597_td *VAR_2)
{
 unsigned long VAR_3;

 FUNC_0(!VAR_2);

 if (!FUNC_1(&VAR_1->pipe_queue[VAR_2->pipenum]) &&
     !FUNC_4(VAR_2->urb->pipe) && FUNC_5(VAR_2->urb->pipe)) {
  VAR_1->timeout_map |= 1 << VAR_2->pipenum;
  switch (FUNC_6(VAR_2->urb->pipe)) {
  case 129:
  case 128:
   VAR_3 = 30;
   break;
  default:
   VAR_3 = 300;
   break;
  }

  FUNC_2(&VAR_1->td_timer[VAR_2->pipenum],
     VAR_0 + FUNC_3(VAR_3));
 }
}
