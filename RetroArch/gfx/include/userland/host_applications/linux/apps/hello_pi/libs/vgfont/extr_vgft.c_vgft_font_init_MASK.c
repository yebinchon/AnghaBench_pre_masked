
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ vg_font; int * ft_face; } ;
typedef TYPE_1__ VGFT_FONT_T ;
typedef int VCOS_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

VCOS_STATUS_T FUNC_1(VGFT_FONT_T *VAR_3)
{
   VAR_3->ft_face = ((void*)0);
   VAR_3->vg_font = FUNC_0(0);
   if (VAR_3->vg_font == VAR_2)
   {
      return VAR_0;
   }
   return VAR_1;
}
