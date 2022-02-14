
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_19__ {int eEncoding; } ;
struct TYPE_26__ {scalar_t__ eCompressionFormat; scalar_t__ nFrameHeight; scalar_t__ nSliceHeight; int nStride; void* nFrameWidth; int eColorFormat; } ;
struct TYPE_21__ {scalar_t__ eCompressionFormat; scalar_t__ nFrameHeight; scalar_t__ nSliceHeight; int xFramerate; int nStride; void* nFrameWidth; int nBitrate; int eColorFormat; } ;
struct TYPE_27__ {TYPE_1__ audio; TYPE_8__ image; TYPE_3__ video; } ;
struct TYPE_25__ {void* encoding; TYPE_6__* es; int bitrate; scalar_t__ encoding_variant; int type; } ;
struct TYPE_20__ {scalar_t__ height; void* width; } ;
struct TYPE_22__ {int den; int num; } ;
struct TYPE_23__ {scalar_t__ height; TYPE_2__ crop; void* width; TYPE_4__ frame_rate; } ;
struct TYPE_24__ {TYPE_5__ video; } ;
struct TYPE_18__ {int format_changed; int no_cropping; TYPE_11__* mmal; } ;
struct TYPE_17__ {scalar_t__ buffer_size_min; scalar_t__ buffer_size; int buffer_num; TYPE_7__* format; } ;
struct TYPE_16__ {scalar_t__ eDomain; scalar_t__ nBufferSize; int nBufferCountActual; TYPE_9__ format; } ;
typedef TYPE_10__ OMX_PARAM_PORTDEFINITIONTYPE ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_11__ MMAL_PORT_T ;
typedef TYPE_12__ MMALOMX_PORT_T ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (void*,int ) ;
 scalar_t__ FUNC_1 (TYPE_11__*) ;
 void* FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 void* FUNC_5 (scalar_t__) ;
 void* FUNC_6 (scalar_t__) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_7(MMALOMX_PORT_T *VAR_8,
   OMX_PARAM_PORTDEFINITIONTYPE *VAR_9)
{
   MMAL_PORT_T *VAR_10 = VAR_8->mmal;
   uint32_t VAR_11 = VAR_10->buffer_size_min;
   MMAL_STATUS_T VAR_12;

   VAR_10->format->type = FUNC_4(VAR_9->eDomain);
   VAR_10->format->encoding_variant = 0;

   if(VAR_9->eDomain == VAR_6)
   {
      if (VAR_9->format.video.eCompressionFormat != VAR_7)
         VAR_10->format->encoding = FUNC_6(VAR_9->format.video.eCompressionFormat);
      else
         VAR_10->format->encoding = FUNC_3(VAR_9->format.video.eColorFormat);

      VAR_10->format->bitrate = VAR_9->format.video.nBitrate;
      VAR_10->format->es->video.width = VAR_9->format.video.nFrameWidth;
      if (!VAR_8->no_cropping)
         VAR_10->format->es->video.crop.width = VAR_10->format->es->video.width;
      if (FUNC_0(VAR_10->format->encoding, VAR_9->format.video.nStride))
         VAR_10->format->es->video.width =
            FUNC_0(VAR_10->format->encoding, VAR_9->format.video.nStride);
      VAR_10->format->es->video.height = VAR_9->format.video.nFrameHeight;
      if (!VAR_8->no_cropping)
         VAR_10->format->es->video.crop.height = VAR_10->format->es->video.height;
      if (VAR_9->format.video.nSliceHeight > VAR_9->format.video.nFrameHeight)
         VAR_10->format->es->video.height = VAR_9->format.video.nSliceHeight;
      VAR_10->format->es->video.frame_rate.num = VAR_9->format.video.xFramerate;
      VAR_10->format->es->video.frame_rate.den = (1<<16);
   }
   else if(VAR_9->eDomain == VAR_5)
   {
      if (VAR_9->format.image.eCompressionFormat != VAR_3)
         VAR_10->format->encoding = FUNC_5(VAR_9->format.image.eCompressionFormat);
      else
         VAR_10->format->encoding = FUNC_3(VAR_9->format.image.eColorFormat);

      VAR_10->format->es->video.width = VAR_9->format.image.nFrameWidth;
      if (!VAR_8->no_cropping)
         VAR_10->format->es->video.crop.width = VAR_10->format->es->video.width;
      if (FUNC_0(VAR_10->format->encoding, VAR_9->format.image.nStride))
         VAR_10->format->es->video.width =
            FUNC_0(VAR_10->format->encoding, VAR_9->format.image.nStride);
      VAR_10->format->es->video.height = VAR_9->format.image.nFrameHeight;
      if (!VAR_8->no_cropping)
         VAR_10->format->es->video.crop.height = VAR_10->format->es->video.height;
      if (VAR_9->format.image.nSliceHeight > VAR_9->format.image.nFrameHeight)
         VAR_10->format->es->video.height = VAR_9->format.image.nSliceHeight;
   }
   else if(VAR_9->eDomain == VAR_4)
   {
      VAR_10->format->encoding = FUNC_2(VAR_9->format.audio.eEncoding);
   }
   else
   {
      VAR_10->format->encoding = VAR_0;
   }

   VAR_10->buffer_num = VAR_9->nBufferCountActual;
   VAR_10->buffer_size = VAR_9->nBufferSize;
   if (VAR_10->buffer_size < VAR_10->buffer_size_min)
      VAR_10->buffer_size = VAR_10->buffer_size_min;

   VAR_12 = FUNC_1(VAR_10);
   if (VAR_12 != VAR_2)
      return VAR_12;


   VAR_8->format_changed = VAR_1;



   if (VAR_10->buffer_size_min != VAR_11)
      VAR_10->buffer_size = VAR_10->buffer_size_min;

   return VAR_2;
}
