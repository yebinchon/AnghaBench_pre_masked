
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {double width; double height; scalar_t__ userdata; } ;
typedef TYPE_4__ video_frame_info_t ;
struct TYPE_13__ {scalar_t__ id; } ;
struct TYPE_17__ {double width; double height; double x; double y; scalar_t__ prim_type; TYPE_3__* coords; scalar_t__ texture; scalar_t__ matrix_data; TYPE_1__ pipeline; } ;
typedef TYPE_5__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;
struct TYPE_14__ {unsigned int offset; scalar_t__ buffer; scalar_t__ size; } ;
struct TYPE_18__ {TYPE_2__ menu_display; int dev; int mvp_transposed; } ;
typedef TYPE_6__ d3d9_video_t ;
struct TYPE_19__ {float z; int color; int v; int u; int y; int x; } ;
typedef TYPE_7__ Vertex ;
struct TYPE_15__ {unsigned int vertices; float* vertex; float* tex_coord; float* color; } ;
typedef int LPDIRECT3DVERTEXBUFFER9 ;
typedef int LPDIRECT3DDEVICE9 ;
typedef int D3DPRIMITIVETYPE ;


 int FUNC_0 (int,int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,unsigned int,int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,double,double,int ) ;
 int FUNC_8 (int ,double,double,int ) ;
 int FUNC_9 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 float* FUNC_11 () ;
 float* FUNC_12 () ;
 scalar_t__ FUNC_13 (scalar_t__) ;

__attribute__((used)) static void FUNC_14(menu_display_ctx_draw_t *VAR_1,
      video_frame_info_t *VAR_2)
{
   unsigned VAR_3;
   math_matrix_4x4 VAR_4, VAR_5, VAR_6;
   LPDIRECT3DDEVICE9 VAR_7;
   d3d9_video_t *VAR_8 = (d3d9_video_t*)VAR_2->userdata;
   Vertex * VAR_9 = ((void*)0);
   const float *VAR_10 = ((void*)0);
   const float *VAR_11 = ((void*)0);
   const float *VAR_12 = ((void*)0);

   if (!VAR_8 || !VAR_1 || VAR_1->pipeline.id)
      return;

   VAR_7 = VAR_8->dev;

   if((VAR_8->menu_display.offset + VAR_1->coords->vertices )
         > (unsigned)VAR_8->menu_display.size)
      return;

   VAR_9 = (Vertex*)
      FUNC_3((LPDIRECT3DVERTEXBUFFER9)
            VAR_8->menu_display.buffer);

   if (!VAR_9)
      return;

   VAR_9 += VAR_8->menu_display.offset;
   VAR_10 = VAR_1->coords->vertex;
   VAR_11 = VAR_1->coords->tex_coord;
   VAR_12 = VAR_1->coords->color;

   if (!VAR_10)
      VAR_10 = FUNC_12();
   if (!VAR_11)
      VAR_11 = FUNC_11();

   for (VAR_3 = 0; VAR_3 < VAR_1->coords->vertices; VAR_3++)
   {
      int VAR_13[4];

      VAR_13[0] = *VAR_12++ * 0xFF;
      VAR_13[1] = *VAR_12++ * 0xFF;
      VAR_13[2] = *VAR_12++ * 0xFF;
      VAR_13[3] = *VAR_12++ * 0xFF;

      VAR_9[VAR_3].x = *VAR_10++;
      VAR_9[VAR_3].y = *VAR_10++;
      VAR_9[VAR_3].z = 0.5f;
      VAR_9[VAR_3].u = *VAR_11++;
      VAR_9[VAR_3].v = *VAR_11++;

      VAR_9[VAR_3].color =
         FUNC_0(
               VAR_13[3],
               VAR_13[0],
               VAR_13[1],
               VAR_13[2]
               );
   }
   FUNC_4((LPDIRECT3DVERTEXBUFFER9)
         VAR_8->menu_display.buffer);

   if(!VAR_1->matrix_data)
      VAR_1->matrix_data = FUNC_10(VAR_2);


   FUNC_7(VAR_5, 2.0, 2.0, 0);
   FUNC_8(VAR_4, -1.0, -1.0, 0);
   FUNC_6(VAR_6, VAR_4, VAR_5);
   FUNC_6(VAR_5,
         *((math_matrix_4x4*)VAR_1->matrix_data), VAR_6);
   FUNC_7(VAR_4,
         (VAR_1->width / 2.0) / VAR_2->width,
         (VAR_1->height / 2.0) / VAR_2->height, 0);
   FUNC_6(VAR_6, VAR_4, VAR_5);
   FUNC_8(VAR_4,
         (VAR_1->x + (VAR_1->width / 2.0)) / VAR_2->width,
         (VAR_1->y + (VAR_1->height / 2.0)) / VAR_2->height,
         0);
   FUNC_6(VAR_5, VAR_4, VAR_6);
   FUNC_6(VAR_6, VAR_8->mvp_transposed, VAR_5);
   FUNC_5(&VAR_5, &VAR_6);

   FUNC_2(VAR_8->dev, &VAR_5);

   if (VAR_1 && VAR_1->texture)
      FUNC_9(VAR_1, VAR_8);

   FUNC_1(VAR_7,
         (D3DPRIMITIVETYPE)FUNC_13(VAR_1->prim_type),
         VAR_8->menu_display.offset,
         VAR_1->coords->vertices -
         ((VAR_1->prim_type == VAR_0)
          ? 2 : 0));

   VAR_8->menu_display.offset += VAR_1->coords->vertices;
}
