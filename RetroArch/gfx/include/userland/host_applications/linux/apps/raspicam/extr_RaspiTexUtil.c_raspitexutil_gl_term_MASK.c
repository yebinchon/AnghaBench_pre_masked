
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int display; int surface; int context; void* v_egl_image; int v_texture; void* u_egl_image; int u_texture; void* y_egl_image; int y_texture; void* egl_image; int texture; } ;
typedef TYPE_1__ RASPITEX_STATE ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,void*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int *) ;
 int FUNC_6 (char*,int ) ;

void FUNC_7(RASPITEX_STATE *VAR_4)
{
   FUNC_6("%s", VAR_3);


   FUNC_5(1, &VAR_4->texture);
   FUNC_1(VAR_4->display, VAR_4->egl_image);
   VAR_4->egl_image = VAR_1;

   FUNC_5(1, &VAR_4->y_texture);
   FUNC_1(VAR_4->display, VAR_4->y_egl_image);
   VAR_4->y_egl_image = VAR_1;

   FUNC_5(1, &VAR_4->u_texture);
   FUNC_1(VAR_4->display, VAR_4->u_egl_image);
   VAR_4->u_egl_image = VAR_1;

   FUNC_5(1, &VAR_4->v_texture);
   FUNC_1(VAR_4->display, VAR_4->v_egl_image);
   VAR_4->v_egl_image = VAR_1;


   FUNC_3(VAR_4->display, VAR_2,
                  VAR_2, VAR_0);
   FUNC_0(VAR_4->display, VAR_4->context);
   FUNC_2(VAR_4->display, VAR_4->surface);
   FUNC_4(VAR_4->display);
}
