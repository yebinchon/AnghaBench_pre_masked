
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_27__ {scalar_t__ length; scalar_t__ alloc_size; int * type; int dts; int pts; int flags; scalar_t__ offset; scalar_t__ data; scalar_t__ cmd; } ;
struct TYPE_26__ {scalar_t__ status; } ;
struct TYPE_25__ {TYPE_4__** output; TYPE_4__** input; TYPE_1__* priv; } ;
struct TYPE_24__ {int format; } ;
struct TYPE_23__ {TYPE_3__* priv; int name; int format; } ;
struct TYPE_22__ {scalar_t__ (* pf_set_format ) (TYPE_4__*) ;TYPE_2__* module; } ;
struct TYPE_21__ {int queue; scalar_t__ needs_configuring; } ;
struct TYPE_20__ {TYPE_7__* module; } ;
typedef TYPE_4__ MMAL_PORT_T ;
typedef TYPE_5__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef TYPE_7__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_8__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*) ;
 scalar_t__ FUNC_4 (TYPE_6__*,scalar_t__) ;
 TYPE_5__* FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_8__*) ;
 TYPE_8__* FUNC_8 (int ) ;
 int FUNC_9 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_11(MMAL_COMPONENT_T *VAR_2)
{
   MMAL_COMPONENT_MODULE_T *VAR_3 = VAR_2->priv->module;
   MMAL_PORT_T *VAR_4 = VAR_2->input[0];
   MMAL_PORT_T *VAR_5 = VAR_2->output[0];
   MMAL_BUFFER_HEADER_T *VAR_6, *VAR_7;

   if (VAR_5->priv->module->needs_configuring)
      return 0;

   VAR_6 = FUNC_8(VAR_4->priv->module->queue);
   if (!VAR_6)
      return 0;


   if (VAR_6->cmd)
   {
      MMAL_EVENT_FORMAT_CHANGED_T *VAR_8 = FUNC_5(VAR_6);
      if (VAR_8)
      {
         VAR_3->status = FUNC_6(VAR_4->format, VAR_8->format);
         if (VAR_3->status == VAR_1)
            VAR_3->status = VAR_4->priv->pf_set_format(VAR_4);
         if (VAR_3->status != VAR_1)
         {
            FUNC_0("format not set on port %s %p (%i)", VAR_4->name, VAR_4, VAR_3->status);
            if (FUNC_4(VAR_2, VAR_3->status) != VAR_1)
               FUNC_0("unable to send an error event buffer");
         }
      }
      else
      {
         FUNC_0("discarding event %i on port %s %p", (int)VAR_6->cmd, VAR_4->name, VAR_4);
      }

      VAR_6->length = 0;
      FUNC_7(VAR_4, VAR_6);
      return 1;
   }


   if (VAR_3->status != VAR_1)
   {
      FUNC_9(VAR_4->priv->module->queue, VAR_6);
      return 0;
   }

   VAR_7 = FUNC_8(VAR_5->priv->module->queue);
   if (!VAR_7)
   {
      FUNC_9(VAR_4->priv->module->queue, VAR_6);
      return 0;
   }


   if (VAR_7->alloc_size < VAR_6->length)
   {
      VAR_3->status = VAR_0;
      if (FUNC_4(VAR_2, VAR_3->status) != VAR_1)
         FUNC_0("unable to send an error event buffer");
      return 0;
   }

   FUNC_2(VAR_7);
   FUNC_2(VAR_6);
   FUNC_1(VAR_7->data, VAR_6->data + VAR_6->offset, VAR_6->length);
   FUNC_3(VAR_6);
   FUNC_3(VAR_7);
   VAR_7->length = VAR_6->length;
   VAR_7->offset = 0;
   VAR_7->flags = VAR_6->flags;
   VAR_7->pts = VAR_6->pts;
   VAR_7->dts = VAR_6->dts;
   *VAR_7->type = *VAR_6->type;


   VAR_6->length = 0;
   FUNC_7(VAR_4, VAR_6);
   FUNC_7(VAR_5, VAR_7);
   return 1;
}
