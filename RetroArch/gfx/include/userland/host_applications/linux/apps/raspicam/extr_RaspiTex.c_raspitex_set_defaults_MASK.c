
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int close; int destroy_native_window; int gl_term; int capture; int redraw; int update_model; int gl_init; int create_native_window; } ;
struct TYPE_6__ {int opacity; TYPE_1__ ops; int scene_id; int height; int width; void* v_egl_image; void* u_egl_image; void* y_egl_image; void* egl_image; int context; int surface; int display; int version_minor; int version_major; } ;
typedef TYPE_2__ RASPITEX_STATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

void FUNC_1(RASPITEX_STATE *VAR_17)
{
   FUNC_0(VAR_17, 0, sizeof(*VAR_17));
   VAR_17->version_major = VAR_7;
   VAR_17->version_minor = VAR_8;
   VAR_17->display = VAR_3;
   VAR_17->surface = VAR_5;
   VAR_17->context = VAR_2;
   VAR_17->egl_image = VAR_4;
   VAR_17->y_egl_image = VAR_4;
   VAR_17->u_egl_image = VAR_4;
   VAR_17->v_egl_image = VAR_4;
   VAR_17->opacity = 255;
   VAR_17->width = VAR_1;
   VAR_17->height = VAR_0;
   VAR_17->scene_id = VAR_6;

   VAR_17->ops.create_native_window = VAR_11;
   VAR_17->ops.gl_init = VAR_13;
   VAR_17->ops.update_model = VAR_16;
   VAR_17->ops.redraw = VAR_15;
   VAR_17->ops.capture = VAR_9;
   VAR_17->ops.gl_term = VAR_14;
   VAR_17->ops.destroy_native_window = VAR_12;
   VAR_17->ops.close = VAR_10;
}
