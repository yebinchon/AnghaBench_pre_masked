
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VCOS_STATUS_T ;
struct TYPE_4__ {scalar_t__ tail; scalar_t__ head; } ;
struct TYPE_5__ {TYPE_1__ waiters; scalar_t__ events; int lock; } ;
typedef TYPE_2__ VCOS_EVENT_FLAGS_T ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*) ;

VCOS_STATUS_T FUNC_1(VCOS_EVENT_FLAGS_T *VAR_1, const char *VAR_2)
{
   VCOS_STATUS_T VAR_3;
   if ((VAR_3=FUNC_0(&VAR_1->lock, VAR_2)) != VAR_0)
   {
      return VAR_3;
   }

   VAR_1->events = 0;
   VAR_1->waiters.head = VAR_1->waiters.tail = 0;
   return VAR_3;
}
