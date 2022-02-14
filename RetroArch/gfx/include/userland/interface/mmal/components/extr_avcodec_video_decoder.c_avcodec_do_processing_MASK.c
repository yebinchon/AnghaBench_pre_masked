
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;


struct TYPE_22__ {int size; scalar_t__ data; } ;
struct TYPE_21__ {int length; int flags; scalar_t__ alloc_size; scalar_t__ dts; scalar_t__ offset; scalar_t__ data; int pts; } ;
struct TYPE_20__ {scalar_t__ pts; int queue_in; scalar_t__ picture_available; TYPE_13__* picture; TYPE_12__* codec_context; scalar_t__ output_needs_configuring; } ;
struct TYPE_19__ {int ** output; int ** input; TYPE_1__* priv; } ;
struct TYPE_18__ {TYPE_3__* module; } ;
struct TYPE_17__ {scalar_t__ reordered_opaque; } ;
struct TYPE_16__ {int reordered_opaque; } ;
typedef int MMAL_PORT_T ;
typedef TYPE_2__ MMAL_COMPONENT_T ;
typedef TYPE_3__ MMAL_COMPONENT_MODULE_T ;
typedef TYPE_4__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;
typedef TYPE_5__ AVPacket ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_12__*,TYPE_13__*,scalar_t__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_8 (int ) ;
 int FUNC_9 (int ,TYPE_4__*) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_10(MMAL_COMPONENT_T *VAR_4)
{
   MMAL_COMPONENT_MODULE_T *VAR_5 = VAR_4->priv->module;
   MMAL_PORT_T *VAR_6 = VAR_4->input[0];
   MMAL_PORT_T *VAR_7 = VAR_4->output[0];
   MMAL_BUFFER_HEADER_T *VAR_8;
   AVPacket VAR_9;
   int VAR_10 = 0;

   if (VAR_5->output_needs_configuring)
      return 0;

   if (VAR_5->picture_available &&
       FUNC_5(VAR_4, VAR_7) != VAR_2)
      return 0;

   VAR_5->picture_available = 0;


   VAR_8 = FUNC_8(VAR_5->queue_in);
   if (!VAR_8)
      return 0;



   if (!VAR_8->length && !(VAR_8->flags & VAR_1))
      goto end;


   if (VAR_8->length && !VAR_8->offset)
   {
      if(VAR_8->length + VAR_0 <= VAR_8->alloc_size)
         FUNC_6(VAR_8->data + VAR_8->length, 0, VAR_0);
      else
         FUNC_1("could not pad buffer");
   }


   VAR_5->codec_context->reordered_opaque = VAR_8->pts;
   FUNC_2(&VAR_9);
   VAR_9.data = VAR_8->length ? VAR_8->data + VAR_8->offset : 0;
   VAR_9.size = VAR_8->length;
   VAR_10 = FUNC_3(VAR_5->codec_context, VAR_5->picture,
                                &VAR_5->picture_available, &VAR_9);


   if (VAR_10 < 0 || VAR_10 > (int)VAR_8->length)
   {
      FUNC_0("decoding failed (%i), discarding buffer", VAR_10);
      VAR_10 = VAR_8->length;
   }

   if (VAR_5->picture_available)
   {
      VAR_5->pts = VAR_5->picture->reordered_opaque;
      if (VAR_5->pts == VAR_3)
         VAR_5->pts = VAR_8->dts;
   }

 end:
   VAR_8->offset += VAR_10;
   VAR_8->length -= VAR_10;

   if (VAR_8->length)
   {
      FUNC_9(VAR_5->queue_in, VAR_8);
      return 1;
   }


   if ((VAR_8->flags & VAR_1) &&
       VAR_5->picture_available)
   {
      FUNC_9(VAR_5->queue_in, VAR_8);
      return 1;
   }


   if ((VAR_8->flags & VAR_1) &&
       FUNC_4(VAR_4, VAR_7) != VAR_2)
   {
      FUNC_9(VAR_5->queue_in, VAR_8);
      return 0;
   }

   VAR_8->offset = 0;
   FUNC_7(VAR_6, VAR_8);
   return 1;
}
