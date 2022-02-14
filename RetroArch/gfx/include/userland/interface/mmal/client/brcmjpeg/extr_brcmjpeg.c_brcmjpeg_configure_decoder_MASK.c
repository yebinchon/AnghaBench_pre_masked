
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ output_handle; int pixel_format; } ;
struct TYPE_20__ {TYPE_1__* mmal; scalar_t__ slice_height; } ;
struct TYPE_19__ {int buffer_num; TYPE_5__* format; scalar_t__ is_enabled; } ;
struct TYPE_18__ {TYPE_4__* es; scalar_t__ encoding; } ;
struct TYPE_15__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_16__ {scalar_t__ height; scalar_t__ width; TYPE_2__ crop; } ;
struct TYPE_17__ {TYPE_3__ video; } ;
struct TYPE_14__ {TYPE_6__** output; void* status; } ;
typedef void* MMAL_STATUS_T ;
typedef TYPE_6__ MMAL_PORT_T ;
typedef scalar_t__ MMAL_FOURCC_T ;
typedef TYPE_7__ BRCMJPEG_T ;
typedef int BRCMJPEG_STATUS_T ;
typedef TYPE_8__ BRCMJPEG_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int ) ;
 void* FUNC_3 (TYPE_6__*) ;
 void* FUNC_4 (TYPE_6__*) ;
 void* FUNC_5 (TYPE_6__*,int ) ;

__attribute__((used)) static BRCMJPEG_STATUS_T FUNC_6(BRCMJPEG_T *VAR_10,
   BRCMJPEG_REQUEST_T *VAR_11)
{
   MMAL_STATUS_T VAR_12 = VAR_6;
   MMAL_FOURCC_T VAR_13 = FUNC_2(VAR_11->pixel_format);
   MMAL_PORT_T *VAR_14;
   BRCMJPEG_STATUS_T VAR_15 = VAR_0;

   if (VAR_13 != VAR_3 &&
       VAR_13 != VAR_4 &&
       VAR_13 != VAR_5)
      VAR_12 = VAR_2;
   FUNC_0(VAR_12, VAR_9, "format not supported");

   VAR_10->slice_height = 0;
   VAR_10->mmal->status = VAR_6;
   VAR_14 = VAR_10->mmal->output[0];



   if (VAR_14->is_enabled)
   {
       VAR_12 = FUNC_4(VAR_14);
       FUNC_0(VAR_12, VAR_1, "failed to disable output port");
   }



   VAR_14->format->encoding = VAR_13;
   VAR_14->format->es->video.width =
      VAR_14->format->es->video.crop.width = 0;
   VAR_14->format->es->video.height =
      VAR_14->format->es->video.crop.height = 0;
   VAR_12 = FUNC_3(VAR_14);
   FUNC_0(VAR_12, VAR_9, "failed to commit output port format");

   VAR_14->buffer_num = 1;
   if (VAR_11->output_handle)
      VAR_12 = FUNC_5(VAR_14, VAR_8);
   else
      VAR_12 = FUNC_5(VAR_14, VAR_7);
   FUNC_0(VAR_12, VAR_1, "failed to enable output port");

   FUNC_1("decoder configured (%4.4s:%ux%u|%ux%u)", (char *)&VAR_14->format->encoding,
         VAR_14->format->es->video.crop.width, VAR_14->format->es->video.crop.height,
         VAR_14->format->es->video.width, VAR_14->format->es->video.height);
   return VAR_0;

 error:
   return VAR_15;
}
