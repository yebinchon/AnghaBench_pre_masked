
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int thread; int sema; int stop_thread; } ;
typedef TYPE_1__ MMAL_GRAPH_PRIVATE_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(MMAL_GRAPH_PRIVATE_T *VAR_1)
{
   VAR_1->stop_thread = VAR_0;
   FUNC_0(&VAR_1->sema);
   FUNC_1(&VAR_1->thread, ((void*)0));
}
