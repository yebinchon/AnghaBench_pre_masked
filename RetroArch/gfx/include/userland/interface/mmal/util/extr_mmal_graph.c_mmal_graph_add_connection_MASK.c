
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int name; } ;
struct TYPE_6__ {scalar_t__ connection_num; TYPE_2__** connection; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_1__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int *,int ,TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*) ;

MMAL_STATUS_T FUNC_3(MMAL_GRAPH_T *VAR_4, MMAL_CONNECTION_T *VAR_5)
{
   MMAL_GRAPH_PRIVATE_T *VAR_6 = (MMAL_GRAPH_PRIVATE_T *)VAR_4;

   FUNC_1("graph: %p, connection: %s(%p)", VAR_4, VAR_5 ? VAR_5->name: 0, VAR_5);

   if (!VAR_5)
      return VAR_1;

   if (VAR_6->connection_num >= VAR_0)
   {
      FUNC_0("no space for connection %s", VAR_5->name);
      return VAR_2;
   }

   FUNC_2(VAR_5);
   VAR_6->connection[VAR_6->connection_num++] = VAR_5;
   return VAR_3;
}
