
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_9__ ;
typedef struct TYPE_47__ TYPE_8__ ;
typedef struct TYPE_46__ TYPE_7__ ;
typedef struct TYPE_45__ TYPE_6__ ;
typedef struct TYPE_44__ TYPE_5__ ;
typedef struct TYPE_43__ TYPE_4__ ;
typedef struct TYPE_42__ TYPE_3__ ;
typedef struct TYPE_41__ TYPE_30__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_18__ ;
typedef struct TYPE_37__ TYPE_17__ ;
typedef struct TYPE_36__ TYPE_15__ ;
typedef struct TYPE_35__ TYPE_14__ ;
typedef struct TYPE_34__ TYPE_13__ ;
typedef struct TYPE_33__ TYPE_12__ ;
typedef struct TYPE_32__ TYPE_11__ ;
typedef struct TYPE_31__ TYPE_10__ ;


struct TYPE_33__ {int current; int size; TYPE_15__* v; } ;
struct TYPE_42__ {double height; } ;
struct TYPE_43__ {TYPE_3__ surface; } ;
struct TYPE_40__ {int current; int size; TYPE_15__* v; } ;
struct TYPE_34__ {TYPE_12__ vertex_cache; int ubo_tex; int ubo_vp; TYPE_4__ color_buffer; TYPE_2__ vertex_cache_tex; int ubo_mvp; } ;
typedef TYPE_13__ wiiu_video_t ;
struct TYPE_35__ {scalar_t__ userdata; } ;
typedef TYPE_14__ video_frame_info_t ;
struct TYPE_41__ {int r; int g; int b; int a; } ;
struct TYPE_45__ {float u; float v; float width; float height; } ;
struct TYPE_44__ {float x; float y; double height; int width; } ;
struct TYPE_36__ {TYPE_30__ color; TYPE_6__ coord; TYPE_5__ pos; } ;
typedef TYPE_15__ tex_shader_vertex_t ;
typedef TYPE_15__ sprite_vertex_t ;
struct TYPE_39__ {int id; } ;
struct TYPE_37__ {float x; double y; double height; scalar_t__ texture; TYPE_7__* coords; int width; TYPE_1__ pipeline; } ;
typedef TYPE_17__ menu_display_ctx_draw_t ;
struct TYPE_48__ {TYPE_8__* samplerVars; } ;
struct TYPE_47__ {int location; } ;
struct TYPE_46__ {int vertices; float* vertex; int* color; float* tex_coord; } ;
struct TYPE_32__ {TYPE_10__* uniformBlocks; } ;
struct TYPE_38__ {TYPE_11__ vs; TYPE_9__ ps; } ;
struct TYPE_31__ {int size; int offset; } ;
typedef int GX2Texture ;


 TYPE_30__ FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int,int,int) ;
 int FUNC_2 (int ,int,int,TYPE_15__*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_18__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;






 TYPE_18__ VAR_10 ;
 TYPE_18__ VAR_11 ;
 TYPE_18__ VAR_12 ;
 TYPE_18__ VAR_13 ;
 TYPE_18__ VAR_14 ;
 TYPE_18__ VAR_15 ;
 TYPE_18__ VAR_16 ;
 TYPE_18__ VAR_17 ;

__attribute__((used)) static void FUNC_8(menu_display_ctx_draw_t *VAR_18,
      video_frame_info_t *VAR_19)
{
   wiiu_video_t *VAR_20 = (wiiu_video_t*)VAR_19->userdata;

   if (!VAR_20 || !VAR_18)
      return;

   if(VAR_18->pipeline.id)
   {
      FUNC_6(VAR_9);

      switch(VAR_18->pipeline.id)
      {
      case 133:
         FUNC_5(&VAR_11);
         break;
      case 132:
         FUNC_5(&VAR_12);
         break;
      case 131:
         FUNC_5(&VAR_14);
         break;
      case 130:
         FUNC_5(&VAR_13);
         break;
      case 129:
         FUNC_5(&VAR_10);
         break;
      case 128:
         FUNC_5(&VAR_15);
         break;
      default:
         break;
      }

      switch(VAR_18->pipeline.id)
      {
      case 133:
      case 132:
         FUNC_1(VAR_6, VAR_18->coords->vertices, 0, 1);
         FUNC_3(VAR_7, VAR_2, VAR_1,
                            VAR_0,
                            VAR_3, VAR_2, VAR_1,
                            VAR_0);
      case 131:
      case 130:
      case 129:
      case 128:
         FUNC_1(VAR_5, 4, 0, 1);
         break;
      }

   }
   else if(VAR_18->coords->vertex || VAR_18->coords->color[0] != VAR_18->coords->color[12])
   {
      if (VAR_20->vertex_cache_tex.current + 4 > VAR_20->vertex_cache_tex.size)
         return;

      tex_shader_vertex_t* VAR_21 = VAR_20->vertex_cache_tex.v + VAR_20->vertex_cache_tex.current;

      FUNC_6(VAR_9);
      FUNC_5(&VAR_17);
      FUNC_7(VAR_17.vs.uniformBlocks[0].offset,
                               VAR_17.vs.uniformBlocks[0].size,
                               VAR_20->ubo_mvp);
      FUNC_2(0, VAR_20->vertex_cache_tex.size * sizeof(*VAR_20->vertex_cache_tex.v),
                         sizeof(*VAR_20->vertex_cache_tex.v), VAR_20->vertex_cache_tex.v);

      if(!VAR_18->coords->vertex)
      {
         VAR_21[0].pos.x = 0.0f;
         VAR_21[0].pos.y = 1.0f;
         VAR_21[1].pos.x = 1.0f;
         VAR_21[1].pos.y = 1.0f;
         VAR_21[2].pos.x = 0.0f;
         VAR_21[2].pos.y = 0.0f;
         VAR_21[3].pos.x = 1.0f;
         VAR_21[3].pos.y = 0.0f;
      }
      else
      {
         VAR_21[0].pos.x = VAR_18->coords->vertex[0];
         VAR_21[0].pos.y = 1.0 - VAR_18->coords->vertex[1];
         VAR_21[1].pos.x = VAR_18->coords->vertex[2];
         VAR_21[1].pos.y = 1.0 - VAR_18->coords->vertex[3];
         VAR_21[2].pos.x = VAR_18->coords->vertex[4];
         VAR_21[2].pos.y = 1.0 - VAR_18->coords->vertex[5];
         VAR_21[3].pos.x = VAR_18->coords->vertex[6];
         VAR_21[3].pos.y = 1.0 - VAR_18->coords->vertex[7];
      }

      if(!VAR_18->coords->tex_coord)
      {
         VAR_21[0].coord.u = 0.0f;
         VAR_21[0].coord.v = 1.0f;
         VAR_21[1].coord.u = 1.0f;
         VAR_21[1].coord.v = 1.0f;
         VAR_21[2].coord.u = 0.0f;
         VAR_21[2].coord.v = 0.0f;
         VAR_21[3].coord.u = 1.0f;
         VAR_21[3].coord.v = 0.0f;
      }
      else
      {
         VAR_21[0].coord.u = VAR_18->coords->tex_coord[0];
         VAR_21[0].coord.v = VAR_18->coords->tex_coord[1];
         VAR_21[1].coord.u = VAR_18->coords->tex_coord[2];
         VAR_21[1].coord.v = VAR_18->coords->tex_coord[3];
         VAR_21[2].coord.u = VAR_18->coords->tex_coord[4];
         VAR_21[2].coord.v = VAR_18->coords->tex_coord[5];
         VAR_21[3].coord.u = VAR_18->coords->tex_coord[6];
         VAR_21[3].coord.v = VAR_18->coords->tex_coord[7];
      }

      for(int VAR_22 = 0; VAR_22 < 4; VAR_22++)
      {
         VAR_21[VAR_22].color.r = VAR_18->coords->color[(VAR_22 << 2) + 0];
         VAR_21[VAR_22].color.g = VAR_18->coords->color[(VAR_22 << 2) + 1];
         VAR_21[VAR_22].color.b = VAR_18->coords->color[(VAR_22 << 2) + 2];
         VAR_21[VAR_22].color.a = VAR_18->coords->color[(VAR_22 << 2) + 3];
      }

      if(VAR_18->texture)
         FUNC_4((GX2Texture*)VAR_18->texture, VAR_17.ps.samplerVars[0].location);

      FUNC_1(VAR_6, 4, VAR_20->vertex_cache_tex.current, 1);
      VAR_20->vertex_cache_tex.current += 4;
   }
   else
   {
      if (VAR_20->vertex_cache.current + 1 > VAR_20->vertex_cache.size)
         return;

      sprite_vertex_t* VAR_23 = VAR_20->vertex_cache.v + VAR_20->vertex_cache.current;
      VAR_23->pos.x = VAR_18->x;
      VAR_23->pos.y = VAR_20->color_buffer.surface.height - VAR_18->y - VAR_18->height;
      VAR_23->pos.width = VAR_18->width;
      VAR_23->pos.height = VAR_18->height;
      VAR_23->coord.u = 0.0f;
      VAR_23->coord.v = 0.0f;
      VAR_23->coord.width = 1.0f;
      VAR_23->coord.height = 1.0f;

      VAR_23->color = FUNC_0(0xFF * VAR_18->coords->color[0], 0xFF * VAR_18->coords->color[1],
                          0xFF * VAR_18->coords->color[2], 0xFF * VAR_18->coords->color[3]);

      if(VAR_18->texture)
         FUNC_4((GX2Texture*)VAR_18->texture, VAR_16.ps.samplerVars[0].location);

      FUNC_1(VAR_4, 1, VAR_20->vertex_cache.current, 1);
      VAR_20->vertex_cache.current ++;
      return;
   }

   FUNC_6(VAR_8);
   FUNC_5(&VAR_16);


   FUNC_7(VAR_16.vs.uniformBlocks[0].offset,
                            VAR_16.vs.uniformBlocks[0].size,
                            VAR_20->ubo_vp);
   FUNC_7(VAR_16.vs.uniformBlocks[1].offset,
                            VAR_16.vs.uniformBlocks[1].size,
                            VAR_20->ubo_tex);
   FUNC_2(0, VAR_20->vertex_cache.size * sizeof(*VAR_20->vertex_cache.v),
                      sizeof(*VAR_20->vertex_cache.v), VAR_20->vertex_cache.v);
}
