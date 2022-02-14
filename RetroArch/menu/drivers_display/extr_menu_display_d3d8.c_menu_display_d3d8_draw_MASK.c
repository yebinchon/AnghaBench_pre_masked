
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {double width; double height; scalar_t__ userdata; } ;
typedef TYPE_4__ video_frame_info_t ;
struct TYPE_15__ {scalar_t__ id; } ;
struct TYPE_19__ {double width; double height; double x; double y; scalar_t__ prim_type; TYPE_3__* coords; scalar_t__ texture; scalar_t__ matrix_data; TYPE_1__ pipeline; } ;
typedef TYPE_5__ menu_display_ctx_draw_t ;
typedef int math_matrix_4x4 ;
struct TYPE_16__ {unsigned int offset; int buffer; scalar_t__ size; } ;
struct TYPE_20__ {TYPE_2__ menu_display; int dev; int mvp_transposed; } ;
typedef TYPE_6__ d3d8_video_t ;
struct TYPE_21__ {float z; int color; int v; int u; int y; int x; } ;
typedef TYPE_7__ Vertex ;
struct TYPE_22__ {int Height; int Width; } ;
struct TYPE_17__ {unsigned int vertices; float* vertex; float* tex_coord; float* color; } ;
typedef TYPE_8__ D3DSURFACE_DESC ;


 int FUNC_0 (int,int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,unsigned int,int) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (void*,int ,TYPE_8__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ,double,double,int ) ;
 int FUNC_9 (int ,double,double,int ) ;
 int FUNC_10 (TYPE_5__*,TYPE_6__*) ;
 scalar_t__ FUNC_11 (TYPE_4__*) ;
 float* FUNC_12 () ;
 float* FUNC_13 () ;
 int FUNC_14 (scalar_t__) ;

__attribute__((used)) static void FUNC_15(menu_display_ctx_draw_t *VAR_1,
      video_frame_info_t *VAR_2)
{
   unsigned VAR_3;
   math_matrix_4x4 VAR_4, VAR_5, VAR_6;
   d3d8_video_t *VAR_7 = (d3d8_video_t*)VAR_2->userdata;
   Vertex * VAR_8 = ((void*)0);
   const float *VAR_9 = ((void*)0);
   const float *VAR_10 = ((void*)0);
   const float *VAR_11 = ((void*)0);

   if (!VAR_7 || !VAR_1 || VAR_1->pipeline.id)
      return;
   if((VAR_7->menu_display.offset + VAR_1->coords->vertices )
         > (unsigned)VAR_7->menu_display.size)
      return;

   VAR_8 = (Vertex*)
      FUNC_4(VAR_7->menu_display.buffer);

   if (!VAR_8)
      return;

   VAR_8 += VAR_7->menu_display.offset;
   VAR_9 = VAR_1->coords->vertex;
   VAR_10 = VAR_1->coords->tex_coord;
   VAR_11 = VAR_1->coords->color;

   if (!VAR_9)
      VAR_9 = FUNC_13();
   if (!VAR_10)
      VAR_10 = FUNC_12();

   for (VAR_3 = 0; VAR_3 < VAR_1->coords->vertices; VAR_3++)
   {
      int VAR_12[4];

      VAR_12[0] = *VAR_11++ * 0xFF;
      VAR_12[1] = *VAR_11++ * 0xFF;
      VAR_12[2] = *VAR_11++ * 0xFF;
      VAR_12[3] = *VAR_11++ * 0xFF;

      VAR_8[VAR_3].x = *VAR_9++;
      VAR_8[VAR_3].y = *VAR_9++;
      VAR_8[VAR_3].z = 0.5f;
      VAR_8[VAR_3].u = *VAR_10++;
      VAR_8[VAR_3].v = *VAR_10++;


   if ((void*)VAR_1->texture)
      {
         D3DSURFACE_DESC VAR_13;
         if (FUNC_3((void*)VAR_1->texture, 0, &VAR_13))
         {
            VAR_8[VAR_3].u *= VAR_13.Width;
            VAR_8[VAR_3].v *= VAR_13.Height;
         }
      }


      VAR_8[VAR_3].color =
         FUNC_0(
               VAR_12[3],
               VAR_12[0],
               VAR_12[1],
               VAR_12[2]
               );
   }
   FUNC_5(VAR_7->menu_display.buffer);

   if(!VAR_1->matrix_data)
      VAR_1->matrix_data = FUNC_11(VAR_2);


   FUNC_8(VAR_5, 2.0, 2.0, 0);
   FUNC_9(VAR_4, -1.0, -1.0, 0);
   FUNC_7(VAR_6, VAR_4, VAR_5);
   FUNC_7(VAR_5,
         *((math_matrix_4x4*)VAR_1->matrix_data), VAR_6);
   FUNC_8(VAR_4,
         (VAR_1->width / 2.0) / VAR_2->width,
         (VAR_1->height / 2.0) / VAR_2->height, 0);
   FUNC_7(VAR_6, VAR_4, VAR_5);
   FUNC_9(VAR_4,
         (VAR_1->x + (VAR_1->width / 2.0)) / VAR_2->width,
         (VAR_1->y + (VAR_1->height / 2.0)) / VAR_2->height,
         0);
   FUNC_7(VAR_5, VAR_4, VAR_6);
   FUNC_7(VAR_6, VAR_7->mvp_transposed, VAR_5);
   FUNC_6(&VAR_5, &VAR_6);

   FUNC_2(VAR_7->dev, &VAR_5);

   if (VAR_1 && VAR_1->texture)
      FUNC_10(VAR_1, VAR_7);

   FUNC_1(VAR_7->dev,
         FUNC_14(VAR_1->prim_type),
         VAR_7->menu_display.offset,
         VAR_1->coords->vertices -
         ((VAR_1->prim_type == VAR_0)
          ? 2 : 0));

   VAR_7->menu_display.offset += VAR_1->coords->vertices;
}
