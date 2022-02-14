
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_25__ {int height; int width; } ;
struct TYPE_26__ {TYPE_5__ surface; } ;
struct TYPE_27__ {TYPE_14__* menu_shader_ubo; TYPE_6__ color_buffer; TYPE_14__* v; TYPE_14__* menu_shader_vbo; } ;
typedef TYPE_7__ wiiu_video_t ;
struct TYPE_28__ {scalar_t__ userdata; } ;
typedef TYPE_8__ video_frame_info_t ;
struct TYPE_22__ {int vertices; int vertex; } ;
struct TYPE_29__ {TYPE_2__ coords; } ;
typedef TYPE_9__ video_coord_array_t ;
struct TYPE_21__ {int id; } ;
struct TYPE_19__ {TYPE_3__* coords; TYPE_1__ pipeline; } ;
typedef TYPE_10__ menu_display_ctx_draw_t ;
struct TYPE_24__ {int height; int width; } ;
struct TYPE_23__ {int vertices; TYPE_14__* vertex; } ;
struct TYPE_20__ {float time; TYPE_4__ OutputSize; int mvp; } ;


 int FUNC_0 (int ,TYPE_14__*,int) ;
 int FUNC_1 (int ,int,int,TYPE_14__*) ;
 int FUNC_2 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_3 (int,int,TYPE_14__*) ;
 int FUNC_4 (int,int,TYPE_14__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_5 (int,int ) ;






 int FUNC_6 (int ,int ,int,int,int ,int,int) ;
 int FUNC_7 (TYPE_14__*,int ,int) ;
 TYPE_9__* FUNC_8 () ;

__attribute__((used)) static void FUNC_9(menu_display_ctx_draw_t *VAR_9,
      video_frame_info_t *VAR_10)
{
   video_coord_array_t *VAR_11 = ((void*)0);
   wiiu_video_t *VAR_12 = (wiiu_video_t*)VAR_10->userdata;

   if (!VAR_12 || !VAR_9)
      return;

   switch(VAR_9->pipeline.id)
   {
      case 133:
      case 132:
         VAR_11 = FUNC_8();
         if(!VAR_12->menu_shader_vbo)
         {
            VAR_12->menu_shader_vbo = FUNC_5(VAR_11->coords.vertices * 2 * sizeof(float), VAR_8);
            FUNC_7(VAR_12->menu_shader_vbo, VAR_11->coords.vertex, VAR_11->coords.vertices * 2 * sizeof(float));
            FUNC_0(VAR_4, VAR_12->menu_shader_vbo, VAR_11->coords.vertices * 2 * sizeof(float));
         }

         VAR_9->coords->vertex = VAR_12->menu_shader_vbo;
         VAR_9->coords->vertices = VAR_11->coords.vertices;
         FUNC_1(0, VAR_9->coords->vertices * 2 * sizeof(float), 2 * sizeof(float), VAR_12->menu_shader_vbo);
         FUNC_2(VAR_6, VAR_2, VAR_1,
               VAR_0, VAR_3, 0, 0, 0);

         break;
      case 131:
      case 130:
      case 129:
      case 128:
         FUNC_1(0, 4 * sizeof(*VAR_12->v), sizeof(*VAR_12->v), VAR_12->v);
         break;
      default:
         return;
   }

   if(!VAR_12->menu_shader_ubo)
   {
      VAR_12->menu_shader_ubo = FUNC_5(sizeof(*VAR_12->menu_shader_ubo), VAR_7);
      FUNC_6(VAR_12->menu_shader_ubo->mvp, 0, 1, 1, 0, -1, 1);
      VAR_12->menu_shader_ubo->OutputSize.width = VAR_12->color_buffer.surface.width;
      VAR_12->menu_shader_ubo->OutputSize.height = VAR_12->color_buffer.surface.height;
      VAR_12->menu_shader_ubo->time = 0.0f;
   }
   else
      VAR_12->menu_shader_ubo->time += 0.01f;

   FUNC_0(VAR_5, VAR_12->menu_shader_ubo, sizeof(*VAR_12->menu_shader_ubo));
   FUNC_4(1, sizeof(*VAR_12->menu_shader_ubo), VAR_12->menu_shader_ubo);
   FUNC_3(1, sizeof(*VAR_12->menu_shader_ubo), VAR_12->menu_shader_ubo);
}
