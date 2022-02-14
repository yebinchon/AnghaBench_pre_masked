
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ (* pf_format_commit ) (TYPE_5__*,TYPE_3__*) ;} ;
struct TYPE_20__ {unsigned int output_num; TYPE_5__ graph; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_2__* component; int name; int buffer_size; int buffer_num; int format; } ;
struct TYPE_18__ {TYPE_3__** output; TYPE_1__* priv; } ;
struct TYPE_17__ {TYPE_4__* module; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_3__ MMAL_PORT_T ;
typedef TYPE_4__ MMAL_GRAPH_PRIVATE_T ;


 int FUNC_0 (char*,int ,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_1 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_3__*,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (TYPE_5__*,TYPE_3__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(MMAL_PORT_T *VAR_5)
{
   MMAL_GRAPH_PRIVATE_T *VAR_6 = VAR_5->component->priv->module;
   MMAL_STATUS_T VAR_7;
   MMAL_PORT_T *VAR_8;
   unsigned int VAR_9;


   if (VAR_6->graph.pf_format_commit)
   {
      VAR_7 = VAR_6->graph.pf_format_commit(&VAR_6->graph, VAR_5);
      if (VAR_7 == VAR_4)
         goto end;
      if (VAR_7 != VAR_1)
         return VAR_7;
   }

   VAR_8 = FUNC_1(VAR_6, VAR_5);
   if (!VAR_8)
      return VAR_0;


   VAR_7 = FUNC_4(VAR_8->format, VAR_5->format);
   if (VAR_7 != VAR_4)
      return VAR_7;
   VAR_8->buffer_num = VAR_5->buffer_num;
   VAR_8->buffer_size = VAR_5->buffer_size;


   VAR_7 = FUNC_5(VAR_8);
   if (VAR_7 != VAR_4)
      return VAR_7;


   VAR_7 = FUNC_2(VAR_6, VAR_8);
   if (VAR_7 != VAR_4)
   {
      FUNC_0("couldn't propagate format commit of port %s(%p)", VAR_8->name, VAR_8);
      return VAR_7;
   }

 end:

   VAR_7 = FUNC_3(VAR_6, VAR_5, VAR_2);
   if (VAR_7 != VAR_4)
      return VAR_7;


   if (VAR_5->type == VAR_3)
   {
      for (VAR_9 = 0; VAR_9 < VAR_6->output_num; VAR_9++)
      {
         VAR_7 = FUNC_3(VAR_6, VAR_5->component->output[VAR_9], VAR_2);
         if (VAR_7 != VAR_4)
            return VAR_7;
      }
   }

   return VAR_4;
}
