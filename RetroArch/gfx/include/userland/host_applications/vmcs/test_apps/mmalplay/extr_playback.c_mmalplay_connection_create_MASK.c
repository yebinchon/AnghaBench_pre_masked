
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_22__ {scalar_t__ height; scalar_t__ width; } ;
struct TYPE_19__ {scalar_t__ output_format; scalar_t__ render_format; TYPE_4__ render_rect; TYPE_4__ output_rect; scalar_t__ tunnelling; } ;
struct TYPE_25__ {size_t connection_num; TYPE_1__ options; TYPE_5__* converter_out_port; TYPE_5__* video_out_port; TYPE_6__** connection; } ;
struct TYPE_24__ {void* user_data; int callback; } ;
struct TYPE_23__ {TYPE_15__* format; int name; } ;
struct TYPE_20__ {scalar_t__ height; scalar_t__ width; TYPE_4__ crop; } ;
struct TYPE_21__ {TYPE_2__ video; } ;
struct TYPE_18__ {scalar_t__ encoding; TYPE_3__* es; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_RECT_T ;
typedef TYPE_5__ MMAL_PORT_T ;
typedef TYPE_6__ MMAL_CONNECTION_T ;
typedef scalar_t__ MMAL_BOOL_T ;
typedef TYPE_7__ MMALPLAY_T ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 size_t FUNC_1 (TYPE_6__**) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_15__*,TYPE_5__*) ;
 scalar_t__ FUNC_3 (TYPE_6__**,TYPE_5__*,TYPE_5__*,scalar_t__) ;
 scalar_t__ FUNC_4 (TYPE_5__*) ;
 int VAR_6 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_5(MMALPLAY_T *VAR_7, MMAL_PORT_T *VAR_8, MMAL_PORT_T *VAR_9, uint32_t VAR_10)
{
   MMAL_CONNECTION_T **VAR_11 = &VAR_7->connection[VAR_7->connection_num];
   uint32_t VAR_12 = VAR_1;
   MMAL_RECT_T *VAR_13 = ((void*)0);
   MMAL_BOOL_T VAR_14 = VAR_3;
   MMAL_STATUS_T VAR_15;

   if (VAR_7->connection_num >= FUNC_1(VAR_7->connection))
      return VAR_2;


   VAR_10 |= VAR_7->options.tunnelling ? VAR_0 : 0;


   if (VAR_8 == VAR_7->video_out_port)
   {
      VAR_12 = VAR_7->options.output_format;
      VAR_13 = &VAR_7->options.output_rect;
   }
   else if (VAR_8 == VAR_7->converter_out_port)
   {
      VAR_12 = VAR_7->options.render_format;
      VAR_13 = &VAR_7->options.render_rect;
   }

   if (VAR_12 != VAR_1 &&
       VAR_12 != VAR_8->format->encoding)
   {
      VAR_8->format->encoding = VAR_12;
      VAR_14 = VAR_5;
   }

   if (VAR_13 && VAR_13->width && VAR_13->height)
   {
      VAR_8->format->es->video.crop = *VAR_13;
      VAR_8->format->es->video.width = VAR_13->width;
      VAR_8->format->es->video.height = VAR_13->height;
      VAR_14 = VAR_5;
   }

   if (VAR_14)
   {
      VAR_15 = FUNC_4(VAR_8);
      if (VAR_15 != VAR_4)
      {
         FUNC_0("cannot override format on output port %s", VAR_8->name);
         return VAR_15;
      }
   }


   VAR_15 = FUNC_3(VAR_11, VAR_8, VAR_9, VAR_10);
   if (VAR_15 != VAR_4)
   {
      FUNC_0("cannot create connection");
      return VAR_15;
   }


   (*VAR_11)->callback = VAR_6;
   (*VAR_11)->user_data = (void *)VAR_7;

   FUNC_2(VAR_8->format, VAR_8);
   FUNC_2(VAR_9->format, VAR_9);

   VAR_7->connection_num++;
   return VAR_4;
}
