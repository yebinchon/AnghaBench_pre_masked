
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* in; TYPE_1__* out; } ;
struct TYPE_16__ {unsigned int port_num; TYPE_1__** port; } ;
struct TYPE_15__ {unsigned int connection_num; TYPE_5__** connection; } ;
struct TYPE_14__ {scalar_t__ type; scalar_t__ is_enabled; int name; TYPE_3__* component; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef scalar_t__ MMAL_PORT_TYPE_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef TYPE_2__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef scalar_t__ MMAL_BOOL_T ;


 int FUNC_0 (char*,TYPE_2__*,int ,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_GRAPH_PRIVATE_T *VAR_3,
   MMAL_PORT_T *VAR_4, MMAL_BOOL_T VAR_5)
{
   MMAL_COMPONENT_T *VAR_6 = VAR_4->component;
   MMAL_STATUS_T VAR_7 = VAR_2;
   MMAL_PORT_TYPE_T VAR_8 = VAR_4->type;
   unsigned int VAR_9, VAR_10;

   FUNC_0("graph: %p, port %s(%p)", VAR_3, VAR_4->name, VAR_4);

   if (VAR_4->type == VAR_1)
      VAR_8 = VAR_0;
   if (VAR_4->type == VAR_0)
      VAR_8 = VAR_1;



   for (VAR_9 = 0; VAR_9 < VAR_6->port_num; VAR_9++)
   {
      if (VAR_6->port[VAR_9]->type != VAR_8)
         continue;

      if ((VAR_6->port[VAR_9]->is_enabled && VAR_5) ||
          (!VAR_6->port[VAR_9]->is_enabled && !VAR_5))
         continue;


      for (VAR_10 = 0; VAR_10 < VAR_3->connection_num; VAR_10++)
         if (VAR_3->connection[VAR_10]->out == VAR_6->port[VAR_9] ||
             VAR_3->connection[VAR_10]->in == VAR_6->port[VAR_9])
            break;

      if (VAR_10 == VAR_3->connection_num)
         continue;

      if (!FUNC_1(VAR_3, VAR_4, VAR_6->port[VAR_9]))
            continue;

      if (VAR_5)
      {
         VAR_7 = FUNC_3(VAR_3->connection[VAR_10]);
         if (VAR_7 != VAR_2)
            break;

         FUNC_4(VAR_3->connection[VAR_10]->out);
         FUNC_4(VAR_3->connection[VAR_10]->in);
      }

      VAR_7 = FUNC_5(VAR_3, VAR_3->connection[VAR_10]->in == VAR_6->port[VAR_9] ?
         VAR_3->connection[VAR_10]->out : VAR_3->connection[VAR_10]->in, VAR_5);
      if (VAR_7 != VAR_2)
         break;

      if (!VAR_5)
      {
         VAR_7 = FUNC_2(VAR_3->connection[VAR_10]);
         if (VAR_7 != VAR_2)
            break;
      }
   }

   return VAR_7;
}
