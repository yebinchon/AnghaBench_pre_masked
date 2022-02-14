
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct TYPE_4__ {int req_q_index; struct request_queue** RequestQueue; int ControllerInitialized; } ;
typedef TYPE_1__ DAC960_Controller_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct request_queue*) ;

__attribute__((used)) static void FUNC_1(DAC960_Controller_T *VAR_1)
{
 int VAR_2;

 if (!VAR_1->ControllerInitialized)
  return;


 for (VAR_2 = VAR_1->req_q_index; VAR_2 < VAR_0; VAR_2++) {
  struct request_queue *VAR_3 = VAR_1->RequestQueue[VAR_2];

  if (VAR_3 == ((void*)0))
   continue;

  if (!FUNC_0(VAR_1, VAR_3)) {
   VAR_1->req_q_index = VAR_2;
   return;
  }
 }

 if (VAR_1->req_q_index == 0)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->req_q_index; VAR_2++) {
  struct request_queue *VAR_4 = VAR_1->RequestQueue[VAR_2];

  if (VAR_4 == ((void*)0))
   continue;

  if (!FUNC_0(VAR_1, VAR_4)) {
   VAR_1->req_q_index = VAR_2;
   return;
  }
 }
}
