
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* robustMxList; } ;
typedef TYPE_1__ ptw32_thread_t ;
struct TYPE_8__ {struct TYPE_8__* prev; struct TYPE_8__* next; } ;
typedef TYPE_2__ ptw32_robust_node_t ;
struct TYPE_9__ {scalar_t__ p; } ;
typedef TYPE_3__ pthread_t ;
typedef TYPE_4__* pthread_mutex_t ;
struct TYPE_10__ {TYPE_3__ ownerThread; TYPE_2__* robustNode; } ;



void
FUNC_0(pthread_mutex_t* VAR_0, pthread_t VAR_1)
{
  ptw32_robust_node_t** VAR_2;
  pthread_mutex_t VAR_3 = *VAR_0;
  ptw32_thread_t* VAR_4 = (ptw32_thread_t*)VAR_1.p;
  ptw32_robust_node_t* VAR_5 = VAR_3->robustNode;

  VAR_2 = &VAR_4->robustMxList;
  VAR_3->ownerThread = VAR_1;
  if (((void*)0) == *VAR_2)
    {
      VAR_5->prev = ((void*)0);
      VAR_5->next = ((void*)0);
      *VAR_2 = VAR_5;
    }
  else
    {
      VAR_5->prev = ((void*)0);
      VAR_5->next = *VAR_2;
      (*VAR_2)->prev = VAR_5;
      *VAR_2 = VAR_5;
    }
}
