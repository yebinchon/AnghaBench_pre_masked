
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {unsigned int connection_num; unsigned int component_num; int sema; int * component; int * connection; } ;
struct TYPE_7__ {int (* pf_destroy ) (TYPE_1__*) ;} ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_GRAPH_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

MMAL_STATUS_T FUNC_6(MMAL_GRAPH_T *VAR_2)
{
   unsigned VAR_3;
   MMAL_GRAPH_PRIVATE_T *VAR_4 = (MMAL_GRAPH_PRIVATE_T *)VAR_2;

   if (!VAR_2)
      return VAR_0;

   FUNC_0("%p", VAR_2);


   if (VAR_2->pf_destroy)
      VAR_2->pf_destroy(VAR_2);

   for (VAR_3 = 0; VAR_3 < VAR_4->connection_num; VAR_3++)
      FUNC_2(VAR_4->connection[VAR_3]);

   for (VAR_3 = 0; VAR_3 < VAR_4->component_num; VAR_3++)
      FUNC_1(VAR_4->component[VAR_3]);

   FUNC_5(&VAR_4->sema);

   FUNC_4(VAR_2);
   return VAR_1;
}
