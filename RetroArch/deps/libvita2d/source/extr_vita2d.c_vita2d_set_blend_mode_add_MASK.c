
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int textureTint; int texture; int color; } ;
typedef TYPE_1__ vita2d_fragment_programs ;
struct TYPE_4__ {TYPE_1__ blend_mode_normal; TYPE_1__ blend_mode_add; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(int VAR_4)
{
 vita2d_fragment_programs *VAR_5 = VAR_4 ? &VAR_1.blend_mode_add
     : &VAR_1.blend_mode_normal;

 VAR_0 = VAR_5->color;
 VAR_2 = VAR_5->texture;
 VAR_3 = VAR_5->textureTint;
}
