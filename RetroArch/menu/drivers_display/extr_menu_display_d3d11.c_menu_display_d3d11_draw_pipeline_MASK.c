
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_12__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_26__ {scalar_t__ userdata; } ;
typedef TYPE_5__ video_frame_info_t ;
struct TYPE_23__ {int vertices; int vertex; } ;
struct TYPE_27__ {TYPE_2__ coords; } ;
typedef TYPE_6__ video_coord_array_t ;
struct TYPE_22__ {int id; } ;
struct TYPE_28__ {TYPE_4__* coords; TYPE_1__ pipeline; } ;
typedef TYPE_7__ menu_display_ctx_draw_t ;
struct TYPE_30__ {float time; } ;
struct TYPE_24__ {int vbo; } ;
struct TYPE_29__ {int ubo; int context; TYPE_9__ ubo_values; TYPE_3__ frame; int blend_pipeline; int menu_pipeline_vbo; int device; } ;
typedef TYPE_8__ d3d11_video_t ;
typedef int d3d11_vertex_t ;
typedef TYPE_9__ d3d11_uniform_t ;
struct TYPE_25__ {int vertices; } ;
struct TYPE_21__ {int ByteWidth; int BindFlags; int Usage; int member_0; } ;
struct TYPE_20__ {scalar_t__ pData; } ;
struct TYPE_19__ {int member_0; } ;
typedef TYPE_10__ D3D11_SUBRESOURCE_DATA ;
typedef TYPE_11__ D3D11_MAPPED_SUBRESOURCE ;
typedef TYPE_12__ D3D11_BUFFER_DESC ;


 int FUNC_0 (int ,TYPE_12__*,TYPE_10__*,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int ,TYPE_11__*) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 TYPE_6__* FUNC_6 () ;

__attribute__((used)) static void FUNC_7(menu_display_ctx_draw_t *VAR_5,
      video_frame_info_t *VAR_6)
{
   d3d11_video_t *VAR_7 = (d3d11_video_t*)VAR_6->userdata;

   if (!VAR_7 || !VAR_5)
      return;

   switch (VAR_5->pipeline.id)
   {
      case 133:
      case 132:
      {
         video_coord_array_t* VAR_8 = FUNC_6();

         if (!VAR_7->menu_pipeline_vbo)
         {
            D3D11_BUFFER_DESC VAR_9 = { 0 };
            VAR_9.Usage = VAR_4;
            VAR_9.ByteWidth = VAR_8->coords.vertices * 2 * sizeof(float);
            VAR_9.BindFlags = VAR_0;

   {
               D3D11_SUBRESOURCE_DATA VAR_10 = { VAR_8->coords.vertex };
               FUNC_0(VAR_7->device, &VAR_9, &VAR_10, &VAR_7->menu_pipeline_vbo);
   }
         }
         FUNC_4(VAR_7->context, 0, VAR_7->menu_pipeline_vbo, 2 * sizeof(float), 0);
         VAR_5->coords->vertices = VAR_8->coords.vertices;
         FUNC_2(VAR_7->context, VAR_7->blend_pipeline, ((void*)0), VAR_1);
         break;
      }

      case 131:
      case 130:
      case 129:
      case 128:
         FUNC_4(VAR_7->context, 0, VAR_7->frame.vbo, sizeof(d3d11_vertex_t), 0);
         VAR_5->coords->vertices = 4;
         break;
      default:
         return;
   }

   FUNC_3(VAR_7->context, VAR_3);

   VAR_7->ubo_values.time += 0.01f;

   {
      D3D11_MAPPED_SUBRESOURCE VAR_11;
      FUNC_1(VAR_7->context, VAR_7->ubo, 0, VAR_2, 0, &VAR_11);
      *(d3d11_uniform_t*)VAR_11.pData = VAR_7->ubo_values;
      FUNC_5(VAR_7->context, VAR_7->ubo, 0);
   }
}
