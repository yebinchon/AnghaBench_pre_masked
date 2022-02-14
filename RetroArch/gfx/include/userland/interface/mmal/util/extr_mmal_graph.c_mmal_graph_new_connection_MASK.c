
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ connection_num; int ** connection; } ;
struct TYPE_9__ {scalar_t__ type; int name; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_GRAPH_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;
typedef int MMAL_CONNECTION_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int *,int ,TYPE_1__*,int ,TYPE_1__*,int,int **) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int **,TYPE_1__*,TYPE_1__*,scalar_t__) ;

MMAL_STATUS_T FUNC_4(MMAL_GRAPH_T *VAR_7, MMAL_PORT_T *VAR_8, MMAL_PORT_T *VAR_9,
   uint32_t VAR_10, MMAL_CONNECTION_T **VAR_11)
{
   MMAL_GRAPH_PRIVATE_T *VAR_12 = (MMAL_GRAPH_PRIVATE_T *)VAR_7;
   MMAL_CONNECTION_T *VAR_13;
   MMAL_STATUS_T VAR_14;

   if (!VAR_8 || !VAR_9)
      return VAR_1;
   if (VAR_8->type == VAR_3 && VAR_9->type != VAR_3)
      return VAR_1;
   if (VAR_8->type != VAR_3 &&
       (VAR_8->type != VAR_5 || VAR_9->type != VAR_4))
      return VAR_1;

   FUNC_1("graph: %p, out: %s(%p), in: %s(%p), flags %x, connection: %p",
             VAR_7, VAR_8->name, VAR_8, VAR_9->name, VAR_9, (int)VAR_10, VAR_11);

   if (VAR_12->connection_num >= VAR_0)
   {
      FUNC_0("no space for connection %s/%s", VAR_8->name, VAR_9->name);
      return VAR_2;
   }

   VAR_14 = FUNC_3(&VAR_13, VAR_8, VAR_9, VAR_10);
   if (VAR_14 != VAR_6)
      return VAR_14;

   VAR_12->connection[VAR_12->connection_num++] = VAR_13;
   if (VAR_11)
   {
      FUNC_2(VAR_13);
      *VAR_11 = VAR_13;
   }

   return VAR_6;
}
