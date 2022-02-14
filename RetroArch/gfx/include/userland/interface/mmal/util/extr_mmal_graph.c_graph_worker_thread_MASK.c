
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ stop_thread; int sema; } ;
typedef TYPE_1__ MMAL_GRAPH_PRIVATE_T ;


 int FUNC_0 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void* FUNC_3(void* VAR_0)
{
   MMAL_GRAPH_PRIVATE_T *VAR_1 = (MMAL_GRAPH_PRIVATE_T *)VAR_0;

   while (1)
   {
      FUNC_2(&VAR_1->sema);
      if (VAR_1->stop_thread)
         break;
      while(FUNC_1(VAR_1));
   }

   FUNC_0("worker thread exit %p", VAR_1);

   return 0;
}
