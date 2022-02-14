
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_17__ {unsigned int port_num; TYPE_10__** port; } ;
struct TYPE_16__ {unsigned int connection_num; TYPE_1__** connection; } ;
struct TYPE_15__ {scalar_t__ type; int name; TYPE_4__* component; } ;
struct TYPE_14__ {TYPE_2__* in; scalar_t__ queue; TYPE_10__* out; } ;
struct TYPE_13__ {scalar_t__ type; int is_enabled; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;
typedef int MMAL_BUFFER_HEADER_T ;


 int FUNC_0 (char*,TYPE_3__*,int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_10__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int * FUNC_4 (scalar_t__) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_GRAPH_PRIVATE_T *VAR_2,
   MMAL_PORT_T *VAR_3)
{
   MMAL_COMPONENT_T *VAR_4 = VAR_3->component;
   MMAL_STATUS_T VAR_5;
   unsigned int VAR_6, VAR_7;

   FUNC_0("graph: %p, port %s(%p)", VAR_2, VAR_3->name, VAR_3);

   VAR_5 = FUNC_3(VAR_3);
   if (VAR_5 != VAR_1)
      return VAR_5;

   if (VAR_3->type == VAR_0)
      return VAR_1;



   for (VAR_6 = 0; VAR_6 < VAR_4->port_num; VAR_6++)
   {
      if (VAR_4->port[VAR_6]->type != VAR_0)
         continue;
      if (!VAR_4->port[VAR_6]->is_enabled)
         continue;


      for (VAR_7 = 0; VAR_7 < VAR_2->connection_num; VAR_7++)
         if (VAR_2->connection[VAR_7]->out == VAR_4->port[VAR_6])
            break;

      if (VAR_7 == VAR_2->connection_num)
         continue;

      if (!FUNC_1(VAR_2, VAR_3, VAR_4->port[VAR_6]))
         continue;


      if (VAR_2->connection[VAR_7]->queue)
      {
         MMAL_BUFFER_HEADER_T *VAR_8 = FUNC_4(VAR_2->connection[VAR_7]->queue);
         while(VAR_8)
         {
            FUNC_2(VAR_8);
            VAR_8 = FUNC_4(VAR_2->connection[VAR_7]->queue);
         }
      }

      VAR_5 = FUNC_5(VAR_2, VAR_2->connection[VAR_7]->in);
      if (VAR_5 != VAR_1)
         break;
   }

   return VAR_5;
}
