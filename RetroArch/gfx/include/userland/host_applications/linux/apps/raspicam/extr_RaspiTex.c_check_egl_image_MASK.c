
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ egl_image; scalar_t__ y_egl_image; scalar_t__ u_egl_image; scalar_t__ v_egl_image; } ;
typedef TYPE_1__ RASPITEX_STATE ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(RASPITEX_STATE *VAR_1)
{
   if (VAR_1->egl_image == VAR_0 &&
         VAR_1->y_egl_image == VAR_0 &&
         VAR_1->u_egl_image == VAR_0 &&
         VAR_1->v_egl_image == VAR_0)
      return -1;
   else
      return 0;
}
