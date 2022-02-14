
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pthread_mutexattr_t ;
struct TYPE_4__ {scalar_t__ lock; struct TYPE_4__* postponed_next; } ;
typedef TYPE_1__ malloc_mutex_t ;


 int FUNC_0 (scalar_t__*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__*,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__*,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;

bool
FUNC_7(malloc_mutex_t *VAR_5)
{
 pthread_mutexattr_t VAR_6;

 if (FUNC_5(&VAR_6) != 0)
  return (1);
 FUNC_6(&VAR_6, VAR_0);
 if (FUNC_3(&VAR_5->lock, &VAR_6) != 0) {
  FUNC_4(&VAR_6);
  return (1);
 }
 FUNC_4(&VAR_6);

 return (0);
}
