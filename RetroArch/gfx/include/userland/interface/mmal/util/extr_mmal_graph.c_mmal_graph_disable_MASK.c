
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int connection_num; int * connection; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_1__ MMAL_GRAPH_PRIVATE_T ;


 int FUNC_0 (char*,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;

MMAL_STATUS_T FUNC_3(MMAL_GRAPH_T *VAR_1)
{
   MMAL_GRAPH_PRIVATE_T *VAR_2 = (MMAL_GRAPH_PRIVATE_T *)VAR_1;
   MMAL_STATUS_T VAR_3 = VAR_0;
   unsigned int VAR_4;

   FUNC_0("graph: %p", VAR_1);

   FUNC_1(VAR_2);


   for (VAR_4 = 0; VAR_4 < VAR_2->connection_num; VAR_4++)
   {
      VAR_3 = FUNC_2(VAR_2->connection[VAR_4]);
      if (VAR_3 != VAR_0)
         break;
   }

   return VAR_3;
}
