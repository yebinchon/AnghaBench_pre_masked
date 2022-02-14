
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_t ;
struct stackshot_thread_waitinfo {int dummy; } ;
struct TYPE_2__ {int (* pthread_find_owner ) (int ,struct stackshot_thread_waitinfo*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,struct stackshot_thread_waitinfo*) ;

void
FUNC_1(thread_t VAR_1, struct stackshot_thread_waitinfo *VAR_2)
{
 if (VAR_0->pthread_find_owner)
  VAR_0->pthread_find_owner(VAR_1, VAR_2);
}
