
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* robustMxList; } ;
typedef TYPE_3__ ptw32_thread_t ;
struct TYPE_11__ {struct TYPE_11__* next; TYPE_2__* prev; } ;
typedef TYPE_4__ ptw32_robust_node_t ;
typedef TYPE_5__* pthread_mutex_t ;
struct TYPE_8__ {TYPE_3__* p; } ;
struct TYPE_12__ {TYPE_1__ ownerThread; TYPE_4__* robustNode; } ;
struct TYPE_9__ {TYPE_4__* next; } ;



void
FUNC_0(pthread_mutex_t* VAR_0, ptw32_thread_t* VAR_1)
{
  ptw32_robust_node_t** VAR_2;
  pthread_mutex_t VAR_3 = *VAR_0;
  ptw32_robust_node_t* VAR_4 = VAR_3->robustNode;

  VAR_2 = &(((ptw32_thread_t*)VAR_3->ownerThread.p)->robustMxList);
  VAR_3->ownerThread.p = VAR_1;
  if (VAR_4->next != ((void*)0))
    {
      VAR_4->next->prev = VAR_4->prev;
    }
  if (VAR_4->prev != ((void*)0))
    {
      VAR_4->prev->next = VAR_4->next;
    }
  if (*VAR_2 == VAR_4)
    {
      *VAR_2 = VAR_4->next;
    }
}
