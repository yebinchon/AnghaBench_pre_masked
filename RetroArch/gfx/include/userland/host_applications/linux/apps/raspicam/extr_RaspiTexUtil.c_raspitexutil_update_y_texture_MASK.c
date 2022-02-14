
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y_egl_image; int y_texture; int display; } ;
typedef TYPE_1__ RASPITEX_STATE ;
typedef int EGLClientBuffer ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *,int *) ;

int FUNC_1(RASPITEX_STATE *VAR_1,
                                  EGLClientBuffer VAR_2)
{
   return FUNC_0(VAR_1->display,
                                         VAR_0, VAR_2,
                                         &VAR_1->y_texture, &VAR_1->y_egl_image);
}
