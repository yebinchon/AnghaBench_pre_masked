
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sem; } ;
struct TYPE_10__ {TYPE_1__ waitpool; } ;
struct TYPE_9__ {struct TYPE_9__* inuse; } ;
typedef TYPE_2__ MMAL_WAITER_T ;
typedef TYPE_3__ MMAL_CLIENT_T ;


 int FUNC_0 (char*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(MMAL_CLIENT_T *VAR_0, MMAL_WAITER_T *VAR_1)
{
   FUNC_0("at %p", VAR_1);
   FUNC_1(VAR_1);
   FUNC_1(VAR_1->inuse);
   VAR_1->inuse = 0;
   FUNC_2(&VAR_0->waitpool.sem);
}
