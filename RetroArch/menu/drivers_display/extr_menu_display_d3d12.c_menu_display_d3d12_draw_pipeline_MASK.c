
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
typedef struct TYPE_21__ TYPE_17__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_28__ {scalar_t__ userdata; } ;
typedef TYPE_7__ video_frame_info_t ;
struct TYPE_23__ {int vertices; int vertex; } ;
struct TYPE_29__ {TYPE_2__ coords; } ;
typedef TYPE_8__ video_coord_array_t ;
struct TYPE_22__ {int id; } ;
struct TYPE_30__ {TYPE_4__* coords; TYPE_1__ pipeline; } ;
typedef TYPE_9__ menu_display_ctx_draw_t ;
struct TYPE_27__ {int BufferLocation; } ;
struct TYPE_26__ {int cmd; } ;
struct TYPE_19__ {float time; } ;
struct TYPE_21__ {int StrideInBytes; int SizeInBytes; int BufferLocation; } ;
struct TYPE_24__ {TYPE_17__ vbo_view; } ;
struct TYPE_18__ {TYPE_6__ ubo_view; TYPE_5__ queue; int ubo; TYPE_11__ ubo_values; TYPE_3__ frame; TYPE_17__ menu_pipeline_vbo_view; int menu_pipeline_vbo; int device; } ;
typedef TYPE_10__ d3d12_video_t ;
typedef TYPE_11__ d3d12_uniform_t ;
struct TYPE_25__ {int vertices; } ;
struct TYPE_20__ {int member_1; int member_0; } ;
typedef TYPE_12__ D3D12_RANGE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int,TYPE_17__*) ;
 int FUNC_2 (int ,int ,TYPE_12__*,void**) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;






 int FUNC_5 (int ,int,int *) ;
 int FUNC_6 (void*,int ,int) ;
 TYPE_8__* FUNC_7 () ;

__attribute__((used)) static void FUNC_8(menu_display_ctx_draw_t *VAR_2,
      video_frame_info_t *VAR_3)
{
   d3d12_video_t *VAR_4 = (d3d12_video_t*)VAR_3->userdata;

   if (!VAR_4 || !VAR_2)
      return;

   switch (VAR_2->pipeline.id)
   {
      case 133:
      case 132:
      {
         video_coord_array_t* VAR_5 = FUNC_7();

         if (!VAR_4->menu_pipeline_vbo)
         {
            void* VAR_6;
            D3D12_RANGE VAR_7 = { 0, 0 };

            VAR_4->menu_pipeline_vbo_view.StrideInBytes = 2 * sizeof(float);
            VAR_4->menu_pipeline_vbo_view.SizeInBytes =
                  VAR_5->coords.vertices * VAR_4->menu_pipeline_vbo_view.StrideInBytes;
            VAR_4->menu_pipeline_vbo_view.BufferLocation = FUNC_5(
                  VAR_4->device, VAR_4->menu_pipeline_vbo_view.SizeInBytes,
                  &VAR_4->menu_pipeline_vbo);

            FUNC_2(VAR_4->menu_pipeline_vbo, 0, &VAR_7, &VAR_6);
            FUNC_6(VAR_6, VAR_5->coords.vertex, VAR_4->menu_pipeline_vbo_view.SizeInBytes);
            FUNC_4(VAR_4->menu_pipeline_vbo, 0, ((void*)0));
         }
         FUNC_1(VAR_4->queue.cmd, 0, 1, &VAR_4->menu_pipeline_vbo_view);
         VAR_2->coords->vertices = VAR_5->coords.vertices;
         break;
      }

      case 131:
      case 130:
      case 129:
      case 128:
         FUNC_1(VAR_4->queue.cmd, 0, 1, &VAR_4->frame.vbo_view);
         VAR_2->coords->vertices = 4;
         break;
      default:
         return;
   }
   FUNC_0(VAR_4->queue.cmd, VAR_0);

   VAR_4->ubo_values.time += 0.01f;

   {
      D3D12_RANGE VAR_8 = { 0, 0 };
      d3d12_uniform_t* VAR_9;
      FUNC_2(VAR_4->ubo, 0, &VAR_8, (void**)&VAR_9);
      *VAR_9 = VAR_4->ubo_values;
      FUNC_4(VAR_4->ubo, 0, ((void*)0));
   }
   FUNC_3(
         VAR_4->queue.cmd, VAR_1, VAR_4->ubo_view.BufferLocation);
}
