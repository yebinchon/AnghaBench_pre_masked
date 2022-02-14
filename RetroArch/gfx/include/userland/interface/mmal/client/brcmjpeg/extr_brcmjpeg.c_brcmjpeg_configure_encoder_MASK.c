
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ buffer_width; scalar_t__ width; scalar_t__ buffer_height; scalar_t__ height; int quality; scalar_t__ input_handle; int pixel_format; } ;
struct TYPE_21__ {int slice_height; TYPE_1__* mmal; } ;
struct TYPE_20__ {int buffer_num; TYPE_5__* format; scalar_t__ is_enabled; int buffer_size_min; int buffer_size; } ;
struct TYPE_19__ {scalar_t__ encoding; TYPE_4__* es; } ;
struct TYPE_16__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_17__ {scalar_t__ width; scalar_t__ height; TYPE_2__ crop; } ;
struct TYPE_18__ {TYPE_3__ video; } ;
struct TYPE_15__ {TYPE_6__** output; TYPE_6__** input; void* status; } ;
typedef void* MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef scalar_t__ MMAL_FOURCC_T ;
typedef scalar_t__ MMAL_BOOL_T ;
typedef TYPE_7__ BRCMJPEG_T ;
typedef int BRCMJPEG_STATUS_T ;
typedef TYPE_8__ BRCMJPEG_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,scalar_t__,scalar_t__,scalar_t__,int,int) ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int ,int ) ;
 void* FUNC_5 (TYPE_6__*) ;
 void* FUNC_6 (TYPE_6__*,int ) ;

__attribute__((used)) static BRCMJPEG_STATUS_T FUNC_7(BRCMJPEG_T *VAR_15,
   BRCMJPEG_REQUEST_T *VAR_16)
{
   MMAL_STATUS_T VAR_17 = VAR_11;
   MMAL_FOURCC_T VAR_18 = FUNC_2(VAR_16->pixel_format);
   MMAL_PORT_T *VAR_19;
   BRCMJPEG_STATUS_T VAR_20 = VAR_0;
   MMAL_BOOL_T VAR_21 = VAR_9;

   if (VAR_18 == VAR_8)
      VAR_17 = VAR_3;
   FUNC_0(VAR_17, VAR_2, "format not supported (%i)",
      VAR_16->pixel_format);

   if (!VAR_16->buffer_width)
      VAR_16->buffer_width = VAR_16->width;
   if (!VAR_16->buffer_height)
      VAR_16->buffer_height = VAR_16->height;
   if (VAR_16->buffer_width < VAR_16->width || VAR_16->buffer_height < VAR_16->height)
      VAR_17 = VAR_3;
   FUNC_0(VAR_17, VAR_2, "invalid buffer width/height "
      "(%i<=%i %i<=%i)", VAR_16->buffer_width, VAR_16->width, VAR_16->buffer_height,
      VAR_16->height);

   VAR_15->slice_height = 0;
   VAR_15->mmal->status = VAR_11;
   VAR_19 = VAR_15->mmal->input[0];



   if (VAR_19->is_enabled)
   {
      VAR_17 = FUNC_5(VAR_19);
      FUNC_0(VAR_17, VAR_1, "failed to disable input port");
   }

   VAR_19->format->encoding = VAR_18;
   VAR_19->format->es->video.width =
      VAR_19->format->es->video.crop.width = VAR_16->width;
   VAR_19->format->es->video.height =
      VAR_19->format->es->video.crop.height = VAR_16->height;
   VAR_19->buffer_num = 1;

   if (!VAR_16->input_handle &&
         (VAR_19->format->encoding == VAR_4 ||
          VAR_19->format->encoding == VAR_6))
   {
      if (VAR_19->format->encoding == VAR_4)
         VAR_19->format->encoding = VAR_5;
      else if (VAR_19->format->encoding == VAR_6)
         VAR_19->format->encoding = VAR_7;
      VAR_21 = VAR_12;
      VAR_19->buffer_num = 3;
   }

   VAR_17 = FUNC_3(VAR_19);
   FUNC_0(VAR_17, VAR_2, "failed to commit input port format");

   VAR_15->slice_height = VAR_21 ? 16 : VAR_19->format->es->video.height;
   VAR_19->buffer_size = VAR_19->buffer_size_min;

   if (VAR_16->input_handle)
      VAR_17 = FUNC_6(VAR_19, VAR_14);
   else
      VAR_17 = FUNC_6(VAR_19, VAR_13);
   FUNC_0(VAR_17, VAR_1, "failed to enable input port");

   FUNC_4(VAR_15->mmal->output[0],
      VAR_10, VAR_16->quality);

   if (!VAR_15->mmal->output[0]->is_enabled)
   {
      VAR_17 = FUNC_6(VAR_15->mmal->output[0], 0);
      FUNC_0(VAR_17, VAR_1, "failed to enable output port");
   }

   FUNC_1("encoder configured (%4.4s:%ux%u|%ux%u slice: %u)",
      (char *)&VAR_19->format->encoding,
      VAR_19->format->es->video.crop.width, VAR_19->format->es->video.crop.height,
      VAR_19->format->es->video.width, VAR_19->format->es->video.height,
      VAR_15->slice_height);
   return VAR_0;

 error:
   return VAR_20;
}
