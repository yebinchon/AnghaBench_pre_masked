
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ codec; TYPE_3__* extradata; } ;
struct TYPE_10__ {scalar_t__ queue_out; scalar_t__ queue_in; TYPE_6__* codec_context; TYPE_6__* picture; } ;
struct TYPE_9__ {int output; scalar_t__ output_num; int input; scalar_t__ input_num; TYPE_1__* priv; } ;
struct TYPE_8__ {TYPE_3__* module; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_MODULE_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMAL_COMPONENT_T *VAR_1)
{
   MMAL_COMPONENT_MODULE_T *VAR_2 = VAR_1->priv->module;

   if (VAR_2->picture)
      FUNC_0(VAR_2->picture);
   if (VAR_2->codec_context)
   {
      if(VAR_2->codec_context->extradata) FUNC_4(VAR_2->codec_context->extradata);
      if(VAR_2->codec_context->codec) FUNC_1(VAR_2->codec_context);
      FUNC_0(VAR_2->codec_context);
   }

   if(VAR_2->queue_in) FUNC_3(VAR_2->queue_in);
   if(VAR_2->queue_out) FUNC_3(VAR_2->queue_out);
   FUNC_4(VAR_2);
   if(VAR_1->input_num) FUNC_2(VAR_1->input, 1);
   if(VAR_1->output_num) FUNC_2(VAR_1->output, 1);
   return VAR_0;
}
