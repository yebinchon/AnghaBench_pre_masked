
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_15__ ;
typedef struct TYPE_24__ TYPE_14__ ;
typedef struct TYPE_23__ TYPE_13__ ;
typedef struct TYPE_22__ TYPE_12__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int vp ;
typedef int video_frame_info_t ;
typedef int uint8_t ;
struct TYPE_26__ {int within_thread; } ;
struct video_viewport {int full_height; int full_width; int height; int width; int y; int x; } ;
struct TYPE_24__ {int alpha_mods; float* alpha_mod; int * driver_data; TYPE_8__* poke; TYPE_5__* overlay; TYPE_13__* driver; TYPE_1__ frame; int is_idle; int read_vp; struct video_viewport vp; int input_data; int input; int info; } ;
typedef TYPE_14__ thread_video_t ;
struct TYPE_21__ {int data; int (* method ) (int ) ;int return_value; } ;
struct TYPE_20__ {int is_threaded; int api; int font_size; int font_path; int video_data; int font_handle; int font_driver; int (* method ) (int ,int ,int ,int ,int ,int ,int ) ;int return_value; } ;
struct TYPE_34__ {int params; int msg; } ;
struct TYPE_32__ {int smooth; int index; } ;
struct TYPE_31__ {int fullscreen; int height; int width; } ;
struct TYPE_29__ {int h; int w; int y; int x; int index; } ;
struct TYPE_28__ {int num; int data; } ;
struct TYPE_27__ {int path; int type; } ;
struct TYPE_22__ {int b; TYPE_11__ custom_command; TYPE_10__ font_init; TYPE_9__ osd_message; int i; TYPE_7__ filtering; TYPE_6__ new_mode; TYPE_4__ rect; TYPE_3__ image; TYPE_2__ set_shader; scalar_t__ v; } ;
struct TYPE_25__ {int type; TYPE_12__ data; } ;
typedef TYPE_15__ thread_packet_t ;
struct TYPE_33__ {int (* set_osd_msg ) (int *,int *,int ,int *,int *) ;int (* set_aspect_ratio ) (int *,int ) ;int (* set_filtering ) (int *,int ,int ) ;int (* set_video_mode ) (int *,int ,int ,int ) ;} ;
struct TYPE_30__ {int (* load ) (int *,int ,int) ;int (* full_screen ) (int *,int) ;int (* vertex_geom ) (int *,int ,int ,int ,int ,int ) ;int (* tex_geom ) (int *,int ,int ,int ,int ,int ) ;int (* enable ) (int *,int) ;} ;
struct TYPE_23__ {int (* read_viewport ) (int *,int *,int ) ;int (* set_shader ) (int *,int ,int ) ;int (* alive ) (int *) ;int (* viewport_info ) (int *,struct video_viewport*) ;int (* set_rotation ) (int *,int ) ;int (* free ) (int *) ;int * (* init ) (int *,int ,int ) ;} ;
 scalar_t__ FUNC_0 (float*,int) ;
 int FUNC_1 (struct video_viewport*,int *,int) ;
 int * FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *,int ,int *,int *) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,struct video_viewport*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (int *,struct video_viewport*) ;
 int FUNC_17 (int *,int *,int ) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_14__*,TYPE_15__*) ;

__attribute__((used)) static bool FUNC_23(
      thread_video_t *VAR_0,
      const thread_packet_t *VAR_1)
{



   thread_packet_t VAR_2 = *VAR_1;
   bool VAR_3 = 0;

   switch (VAR_2.type)
   {
      case 141:
         VAR_0->driver_data = VAR_0->driver->init(&VAR_0->info,
               VAR_0->input, VAR_0->input_data);
         VAR_2.data.b = (VAR_0->driver_data != ((void*)0));
         VAR_0->driver->viewport_info(VAR_0->driver_data, &VAR_0->vp);
         FUNC_22(VAR_0, &VAR_2);
         break;

      case 142:
         if (VAR_0->driver_data)
         {
            if (VAR_0->driver && VAR_0->driver->free)
               VAR_0->driver->free(VAR_0->driver_data);
         }
         VAR_0->driver_data = ((void*)0);
         FUNC_22(VAR_0, &VAR_2);
         return 1;

      case 130:
         if (VAR_0->driver && VAR_0->driver->set_rotation)
            VAR_0->driver->set_rotation(VAR_0->driver_data, VAR_2.data.i);
         FUNC_22(VAR_0, &VAR_2);
         break;

      case 131:
      {
         struct video_viewport VAR_4;

         VAR_4.x = 0;
         VAR_4.y = 0;
         VAR_4.width = 0;
         VAR_4.height = 0;
         VAR_4.full_width = 0;
         VAR_4.full_height = 0;

         VAR_0->driver->viewport_info(VAR_0->driver_data, &VAR_4);

         if (FUNC_1(&VAR_4, &VAR_0->read_vp, sizeof(VAR_4)))
         {
            VAR_0->frame.within_thread = 1;

            if (VAR_0->driver->read_viewport)
               VAR_3 = VAR_0->driver->read_viewport(VAR_0->driver_data,
                     (uint8_t*)VAR_2.data.v, VAR_0->is_idle);

            VAR_2.data.b = VAR_3;
            VAR_0->frame.within_thread = 0;
         }
         else
         {


            VAR_2.data.b = 0;
         }
         FUNC_22(VAR_0, &VAR_2);
         break;
      }

      case 129:
         if (VAR_0->driver && VAR_0->driver->set_shader)
            VAR_3 = VAR_0->driver->set_shader(VAR_0->driver_data,
                     VAR_2.data.set_shader.type,
                     VAR_2.data.set_shader.path);

         VAR_2.data.b = VAR_3;
         FUNC_22(VAR_0, &VAR_2);
         break;

      case 145:
         if (VAR_0->driver && VAR_0->driver->alive)
            VAR_3 = VAR_0->driver->alive(VAR_0->driver_data);

         VAR_2.data.b = VAR_3;
         FUNC_22(VAR_0, &VAR_2);
         break;
      case 132:
         if (VAR_0->poke && VAR_0->poke->set_video_mode)
            VAR_0->poke->set_video_mode(VAR_0->driver_data,
                  VAR_2.data.new_mode.width,
                  VAR_2.data.new_mode.height,
                  VAR_2.data.new_mode.fullscreen);
         FUNC_22(VAR_0, &VAR_2);
         break;
      case 134:
         if (VAR_0->poke && VAR_0->poke->set_filtering)
            VAR_0->poke->set_filtering(VAR_0->driver_data,
                  VAR_2.data.filtering.index,
                  VAR_2.data.filtering.smooth);
         FUNC_22(VAR_0, &VAR_2);
         break;

      case 135:
         if (VAR_0->poke && VAR_0->poke->set_aspect_ratio)
            VAR_0->poke->set_aspect_ratio(VAR_0->driver_data,
                  VAR_2.data.i);
         FUNC_22(VAR_0, &VAR_2);
         break;

      case 133:
         {
            video_frame_info_t VAR_5;
            FUNC_21(&VAR_5);
            if (VAR_0->poke && VAR_0->poke->set_osd_msg)
               VAR_0->poke->set_osd_msg(VAR_0->driver_data,
                     &VAR_5,
                     VAR_2.data.osd_message.msg,
                     &VAR_2.data.osd_message.params, ((void*)0));
         }
         FUNC_22(VAR_0, &VAR_2);
         break;

      case 143:
         if (VAR_2.data.font_init.method)
            VAR_2.data.font_init.return_value =
                  VAR_2.data.font_init.method
                  (VAR_2.data.font_init.font_driver,
                     VAR_2.data.font_init.font_handle,
                     VAR_2.data.font_init.video_data,
                     VAR_2.data.font_init.font_path,
                     VAR_2.data.font_init.font_size,
                     VAR_2.data.font_init.api,
                     VAR_2.data.font_init.is_threaded);
         FUNC_22(VAR_0, &VAR_2);
         break;

      case 144:
         if (VAR_2.data.custom_command.method)
            VAR_2.data.custom_command.return_value =
                  VAR_2.data.custom_command.method
                  (VAR_2.data.custom_command.data);
         FUNC_22(VAR_0, &VAR_2);
         break;

      case 128:


         break;
      default:
         FUNC_22(VAR_0, &VAR_2);
         break;
   }

   return 0;
}
