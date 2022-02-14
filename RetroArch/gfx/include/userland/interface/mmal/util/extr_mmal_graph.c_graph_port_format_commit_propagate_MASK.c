
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {unsigned int output_num; TYPE_2__** output; } ;
struct TYPE_16__ {unsigned int connection_num; TYPE_1__** connection; } ;
struct TYPE_15__ {scalar_t__ type; int format; scalar_t__ is_enabled; int name; TYPE_4__* component; } ;
struct TYPE_14__ {TYPE_2__* out; TYPE_2__* in; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_PORT_T ;
typedef TYPE_3__ MMAL_GRAPH_PRIVATE_T ;
typedef TYPE_4__ MMAL_COMPONENT_T ;


 int FUNC_0 (char*,TYPE_3__*,int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_GRAPH_PRIVATE_T *VAR_3,
   MMAL_PORT_T *VAR_4)
{
   MMAL_COMPONENT_T *VAR_5 = VAR_4->component;
   MMAL_STATUS_T VAR_6 = VAR_2;
   unsigned int VAR_7, VAR_8;

   FUNC_0("graph: %p, port %s(%p)", VAR_3, VAR_4->name, VAR_4);

   if (VAR_4->type == VAR_1 || VAR_4->type == VAR_0)
      return VAR_2;



   for (VAR_7 = 0; VAR_7 < VAR_5->output_num; VAR_7++)
   {
      MMAL_PORT_T *VAR_9, *VAR_10;

      if (VAR_5->output[VAR_7]->is_enabled)
         continue;


      for (VAR_8 = 0; VAR_8 < VAR_3->connection_num; VAR_8++)
         if (VAR_3->connection[VAR_8]->out == VAR_5->output[VAR_7])
            break;

      if (VAR_8 == VAR_3->connection_num)
         continue;

      if (!FUNC_1(VAR_3, VAR_4, VAR_5->output[VAR_7]))
         continue;

      VAR_9 = VAR_3->connection[VAR_8]->in;
      VAR_10 = VAR_3->connection[VAR_8]->out;


      VAR_6 = FUNC_2(VAR_9->format, VAR_10->format);
      if (VAR_6 != VAR_2)
         break;
      VAR_6 = FUNC_4(VAR_9);
      if (VAR_6 != VAR_2)
         break;

      FUNC_3(VAR_10);
      FUNC_3(VAR_9);

      VAR_6 = FUNC_5(VAR_3, VAR_9);
      if (VAR_6 != VAR_2)
         break;
   }

   return VAR_6;
}
