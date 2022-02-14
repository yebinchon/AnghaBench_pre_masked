
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ vg_font; scalar_t__ ft_face; } ;
typedef TYPE_1__ VGFT_FONT_T ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(VGFT_FONT_T *VAR_0)
{
   if (VAR_0->ft_face)
      FUNC_0(VAR_0->ft_face);
   if (VAR_0->vg_font)
      FUNC_2(VAR_0->vg_font);
   FUNC_1(VAR_0, 0, sizeof(*VAR_0));
}
