
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_15__ {int copy_output; scalar_t__ window; int video_destination; scalar_t__ render_layer; } ;
struct TYPE_20__ {TYPE_2__ options; } ;
struct TYPE_19__ {TYPE_10__** input; int name; int input_num; } ;
struct TYPE_13__ {int size; int id; } ;
struct TYPE_14__ {int width; int height; unsigned int y; scalar_t__ x; } ;
struct TYPE_18__ {int set; TYPE_11__ hdr; scalar_t__ fullscreen; int mode; TYPE_1__ dest_rect; int display_num; scalar_t__ layer; } ;
struct TYPE_16__ {int member_1; int member_0; } ;
struct TYPE_17__ {int member_1; TYPE_11__ hdr; TYPE_3__ member_0; } ;
struct TYPE_12__ {int name; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_4__ MMAL_PARAMETER_BOOLEAN_T ;
typedef TYPE_5__ MMAL_DISPLAYREGION_T ;
typedef TYPE_6__ MMAL_COMPONENT_T ;
typedef TYPE_7__ MMALPLAY_T ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_1 (TYPE_10__*,TYPE_11__*) ;
 int VAR_11 ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMALPLAY_T *VAR_12, MMAL_COMPONENT_T *VAR_13)
{
   MMAL_STATUS_T VAR_14 = VAR_6;
   unsigned int VAR_15;

   if(!VAR_13->input_num)
   {
      FUNC_0("%s doesn't have input ports", VAR_13->name);
      goto error;
   }

   VAR_15 = VAR_11++;


   MMAL_DISPLAYREGION_T VAR_16;
   VAR_16.hdr.id = VAR_8;
   VAR_16.hdr.size = sizeof(MMAL_DISPLAYREGION_T);
   VAR_16.set = VAR_3|VAR_5;
   VAR_16.layer = VAR_12->options.render_layer + 2;
   VAR_16.display_num = VAR_12->options.video_destination;
   if (VAR_12->options.window)
   {
      VAR_16.dest_rect.x = 0;
      VAR_16.dest_rect.width = 512;
      VAR_16.dest_rect.height = 256;
      VAR_16.dest_rect.y = VAR_16.dest_rect.height * VAR_15;
      VAR_16.mode = VAR_0;
      VAR_16.fullscreen = 0;
      VAR_16.set |= VAR_1|VAR_4|VAR_2;
   }
   VAR_14 = FUNC_1( VAR_13->input[0], &VAR_16.hdr );
   if(VAR_14 != VAR_10 && VAR_14 != VAR_7)
   {
      FUNC_0("could not set video render layer on %s", VAR_13->input[0]->name);
      goto error;
   }


   if (!VAR_12->options.copy_output)
   {
      MMAL_PARAMETER_BOOLEAN_T VAR_17 =
         {{VAR_9, sizeof(MMAL_PARAMETER_BOOLEAN_T)}, 1};
      VAR_14 = FUNC_1(VAR_13->input[0], &VAR_17.hdr);
      if (VAR_14 != VAR_10 && VAR_14 != VAR_7)
      {
         FUNC_0("failed to set zero copy on %s", VAR_13->input[0]->name);
         goto error;
      }
   }

   VAR_14 = VAR_10;

 error:
   return VAR_14;
}
