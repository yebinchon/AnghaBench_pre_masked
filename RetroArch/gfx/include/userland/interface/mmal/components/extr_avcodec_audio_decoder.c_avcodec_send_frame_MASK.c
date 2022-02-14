
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int alloc_size; int length; scalar_t__ pts; scalar_t__ dts; int data; scalar_t__ flags; } ;
struct TYPE_13__ {int channels; int sample_rate; scalar_t__ sample_fmt; int output_size; int bits_per_sample; scalar_t__ pts; int output; scalar_t__ last_pts; int samples_since_last_pts; int queue_out; TYPE_2__* codec_context; } ;
struct TYPE_12__ {TYPE_1__* priv; } ;
struct TYPE_11__ {int channels; int sample_rate; scalar_t__ sample_fmt; } ;
struct TYPE_10__ {TYPE_4__* module; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_3__ MMAL_COMPONENT_T ;
typedef TYPE_4__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_5__ MMAL_BUFFER_HEADER_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int *,TYPE_5__*) ;
 TYPE_5__* FUNC_3 (int ) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_4(MMAL_COMPONENT_T *VAR_3, MMAL_PORT_T *VAR_4)
{
   MMAL_COMPONENT_MODULE_T *VAR_5 = VAR_3->priv->module;
   MMAL_BUFFER_HEADER_T *VAR_6;
   int VAR_7, VAR_8;


   if (VAR_5->codec_context->channels != VAR_5->channels ||
       VAR_5->codec_context->sample_rate != VAR_5->sample_rate ||
       VAR_5->codec_context->sample_fmt != VAR_5->sample_fmt)
   {
      FUNC_0(VAR_3, VAR_4);
      return VAR_0;
   }

   VAR_6 = FUNC_3(VAR_5->queue_out);
   if (!VAR_6)
      return VAR_0;

   VAR_7 = VAR_5->output_size;
   if (VAR_7 > (int)VAR_6->alloc_size)
      VAR_7 = VAR_6->alloc_size;

   VAR_8 = VAR_7 / VAR_5->channels * 8 / VAR_5->bits_per_sample;
   VAR_7 = VAR_8 * VAR_5->channels * VAR_5->bits_per_sample / 8;
   VAR_6->length = VAR_7;
   VAR_6->pts = VAR_5->pts;
   VAR_6->flags = 0;
   FUNC_1(VAR_6->data, VAR_5->output, VAR_7);
   VAR_5->output_size -= VAR_7;
   VAR_5->output += VAR_7;

   if (VAR_5->pts != VAR_2)
   {
      VAR_5->last_pts = VAR_5->pts;
      VAR_5->samples_since_last_pts = 0;
   }
   VAR_5->pts = VAR_2;
   VAR_5->samples_since_last_pts += VAR_8;

   if (VAR_6->pts == VAR_2)
      VAR_6->pts = VAR_5->last_pts + VAR_5->samples_since_last_pts * 1000000 / VAR_5->sample_rate;

   VAR_6->dts = VAR_6->pts;
   FUNC_2(VAR_4, VAR_6);
   return VAR_1;
}
