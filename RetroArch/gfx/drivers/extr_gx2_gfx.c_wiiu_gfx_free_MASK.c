
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_13__ ;


struct TYPE_23__ {int image; } ;
struct TYPE_15__ {TYPE_8__ surface; } ;
struct TYPE_22__ {int v; } ;
struct TYPE_21__ {int v; } ;
struct TYPE_18__ {int image; } ;
struct TYPE_19__ {TYPE_3__ surface; } ;
struct TYPE_20__ {int v; TYPE_4__ texture; } ;
struct TYPE_16__ {int image; } ;
struct TYPE_17__ {TYPE_1__ surface; } ;
struct TYPE_24__ {int drc_scan_buffer; int tv_scan_buffer; int output_ring_buffer; int input_ring_buffer; int ubo_mvp; int ubo_tex; int ubo_vp; TYPE_13__ color_buffer; int menu_shader_ubo; int menu_shader_vbo; TYPE_7__ vertex_cache_tex; TYPE_6__ vertex_cache; TYPE_5__ menu; int v; TYPE_2__ texture; int cmd_buffer; int ctx_state; } ;
typedef TYPE_9__ wiiu_video_t ;


 int FUNC_0 (TYPE_13__*,float,float,float,float) ;
 int FUNC_1 (TYPE_13__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_13 (TYPE_9__*) ;
 int FUNC_14 (TYPE_9__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_15 (TYPE_9__*) ;

__attribute__((used)) static void FUNC_16(void *VAR_12)
{
   wiiu_video_t *VAR_13 = (wiiu_video_t *) VAR_12;

   if (!VAR_13)
      return;


   FUNC_0(&VAR_13->color_buffer, 0.0f, 0.0f, 0.0f, 1.0f);
   FUNC_1(&VAR_13->color_buffer, VAR_1);
   FUNC_1(&VAR_13->color_buffer, VAR_2);

   FUNC_8();
   FUNC_4();
   FUNC_3();
   FUNC_9();
   FUNC_7();

   FUNC_6(VAR_0);
   FUNC_5(VAR_0);

   FUNC_2(&VAR_4);
   FUNC_2(&VAR_11);
   FUNC_2(&VAR_10);
   FUNC_2(&VAR_6);
   FUNC_2(&VAR_5);
   FUNC_2(&VAR_3);
   FUNC_2(&VAR_7);
   FUNC_2(&VAR_8);
   FUNC_2(&VAR_9);

   FUNC_15(VAR_13);





   FUNC_11(VAR_13->ctx_state);
   FUNC_11(VAR_13->cmd_buffer);
   FUNC_11(VAR_13->texture.surface.image);
   FUNC_11(VAR_13->menu.texture.surface.image);
   FUNC_11(VAR_13->v);
   FUNC_11(VAR_13->menu.v);
   FUNC_11(VAR_13->vertex_cache.v);
   FUNC_11(VAR_13->vertex_cache_tex.v);
   FUNC_11(VAR_13->menu_shader_vbo);
   FUNC_11(VAR_13->menu_shader_ubo);

   FUNC_10(VAR_13->color_buffer.surface.image);
   FUNC_10(VAR_13->ubo_vp);
   FUNC_10(VAR_13->ubo_tex);
   FUNC_10(VAR_13->ubo_mvp);
   FUNC_10(VAR_13->input_ring_buffer);
   FUNC_10(VAR_13->output_ring_buffer);

   FUNC_12(VAR_13->tv_scan_buffer);
   FUNC_12(VAR_13->drc_scan_buffer);

   FUNC_13(VAR_13);
}
