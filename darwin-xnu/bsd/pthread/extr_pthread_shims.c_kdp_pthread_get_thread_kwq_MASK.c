
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
struct TYPE_2__ {void* (* pthread_get_thread_kwq ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 void* FUNC_0 (int ) ;

void *
FUNC_1(thread_t VAR_1)
{
 if (VAR_0->pthread_get_thread_kwq)
  return VAR_0->pthread_get_thread_kwq(VAR_1);

 return ((void*)0);
}
