
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* head; TYPE_2__* tail; } ;
struct TYPE_7__ {TYPE_1__ waiters; } ;
typedef TYPE_3__ VCOS_EVENT_FLAGS_T ;
struct TYPE_6__ {int * next; } ;



__attribute__((used)) static int FUNC_0(VCOS_EVENT_FLAGS_T *VAR_0)
{
   int VAR_1;

   if (VAR_0->waiters.head == ((void*)0))
   {
      VAR_1 = (VAR_0->waiters.tail == ((void*)0));
   }
   else
   {
      VAR_1 = (VAR_0->waiters.tail != ((void*)0));
   }




   if (VAR_0->waiters.head && (VAR_0->waiters.head == VAR_0->waiters.tail))
   {
      VAR_1 = (VAR_0->waiters.head->next == ((void*)0));
   }
   return VAR_1;
}
