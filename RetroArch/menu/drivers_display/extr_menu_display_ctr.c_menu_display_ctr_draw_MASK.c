
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ userdata; } ;
typedef TYPE_5__ video_frame_info_t ;
struct ctr_texture {int width; int height; TYPE_8__* data; int active_height; int active_width; } ;
struct TYPE_17__ {scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; TYPE_2__* coords; scalar_t__ texture; } ;
typedef TYPE_6__ menu_display_ctx_draw_t ;
struct TYPE_14__ {TYPE_8__* right; TYPE_8__* left; } ;
struct TYPE_15__ {TYPE_3__ top; } ;
struct TYPE_12__ {int size; int current; int buffer; } ;
struct TYPE_18__ {scalar_t__ video_mode; TYPE_4__ drawbuffers; TYPE_1__ vertex_cache; } ;
typedef TYPE_7__ ctr_video_t ;
struct TYPE_19__ {int v1; int u1; scalar_t__ v0; scalar_t__ u0; scalar_t__ y0; scalar_t__ y1; scalar_t__ x0; scalar_t__ x1; } ;
typedef TYPE_8__ ctr_vertex_t ;
typedef int ctr_scale_vector_t ;
struct TYPE_13__ {float* color; } ;


 int FUNC_0 (int,int,int,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_12 ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_13 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_14 ;
 int FUNC_11 (TYPE_8__*) ;
 int FUNC_12 (int,int ,int,int) ;
 int FUNC_13 (int ,int ,int,int,int,int ) ;
 int FUNC_14 (int ,float*,int) ;
 int FUNC_15 (int *,int,int ,int,int) ;
 int FUNC_16 (char*,int,int,int,int,int,int) ;

__attribute__((used)) static void FUNC_17(menu_display_ctx_draw_t *VAR_15,
      video_frame_info_t *VAR_16)
{
   struct ctr_texture *VAR_17 = ((void*)0);
   const float *VAR_18 = ((void*)0);
   ctr_video_t *VAR_19 = (ctr_video_t*)VAR_16->userdata;

   if (!VAR_19 || !VAR_15)
      return;

   VAR_17 = (struct ctr_texture*)VAR_15->texture;
   VAR_18 = VAR_15->coords->color;

   if (!VAR_17)
      return;

   ctr_scale_vector_t VAR_20;
   FUNC_15(&VAR_20,
         VAR_1, VAR_0,
         VAR_17->width, VAR_17->height);
   FUNC_14(0, (float*)&VAR_20, 1);

   if ((VAR_19->vertex_cache.size - (VAR_19->vertex_cache.current - VAR_19->vertex_cache.buffer)) < 1)
      VAR_19->vertex_cache.current = VAR_19->vertex_cache.buffer;

   ctr_vertex_t* VAR_21 = VAR_19->vertex_cache.current++;

   VAR_21->x0 = VAR_15->x;
   VAR_21->y0 = 240 - VAR_15->height - VAR_15->y;
   VAR_21->x1 = VAR_21->x0 + VAR_15->width;
   VAR_21->y1 = VAR_21->y0 + VAR_15->height;
   VAR_21->u0 = 0;
   VAR_21->v0 = 0;
   VAR_21->u1 = VAR_17->active_width;
   VAR_21->v1 = VAR_17->active_height;

   FUNC_12(2,
         FUNC_11(VAR_21),
         FUNC_1(VAR_11, 4) << 0 |
         FUNC_1(VAR_11, 4) << 4,
         sizeof(ctr_vertex_t));

   VAR_18 = VAR_15->coords->color;
   int VAR_22 = (int)((*VAR_18++)*255.f);
   int VAR_23 = (int)((*VAR_18++)*255.f);
   int VAR_24 = (int)((*VAR_18++)*255.f);
   int VAR_25 = (int)((*VAR_18++)*255.f);

   FUNC_3(0,
         FUNC_6(VAR_13, VAR_5, 0),
         FUNC_6(VAR_13, VAR_5, 0),
         0,
         0,
         VAR_8, VAR_8,
         FUNC_0(VAR_22,VAR_23,VAR_24,VAR_25)
         );
   FUNC_13(VAR_14, FUNC_11(VAR_17->data), VAR_17->width, VAR_17->height,
         FUNC_7(VAR_7) | FUNC_8(VAR_7) |
         FUNC_9(VAR_4) | FUNC_10(VAR_4),
         VAR_10);

   FUNC_4(((void*)0),
         FUNC_11(VAR_19->drawbuffers.top.left),
         0, 0, VAR_0,
         VAR_19->video_mode == VAR_2 ?
         VAR_1 * 2 : VAR_1);

   FUNC_2(VAR_6, 0, 1);

   if (VAR_19->video_mode == VAR_3)
   {
      FUNC_4(((void*)0),
            FUNC_11(VAR_19->drawbuffers.top.right),
            0, 0, VAR_0,
            VAR_1);
      FUNC_2(VAR_6, 0, 1);
   }

   FUNC_3(0, VAR_13, VAR_13, 0, 0, VAR_9, VAR_9, 0);





}
