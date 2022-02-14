
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int pointer_y; int pointer_x; } ;
typedef TYPE_1__ udev_input_t ;
struct TYPE_10__ {int whd; int whu; int wd; int wu; int b5; int b4; int m; int r; int l; } ;
typedef TYPE_2__ udev_input_mouse_t ;
typedef int int16_t ;
 TYPE_2__* FUNC_0 (TYPE_1__*,unsigned int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int16_t FUNC_4(udev_input_t *VAR_0,
      unsigned VAR_1, unsigned VAR_2, bool VAR_3)
{
   udev_input_mouse_t *VAR_4 = FUNC_0(VAR_0, VAR_1);

   if (!VAR_4)
      return 0;

   if (VAR_2 != 129 && VAR_2 != 128 &&
         FUNC_3(VAR_0))
      return 0;

   switch (VAR_2)
   {
      case 129:
         return VAR_3 ? VAR_0->pointer_x : FUNC_1(VAR_4);
      case 128:
         return VAR_3 ? VAR_0->pointer_y : FUNC_2(VAR_4);
      case 134:
         return VAR_4->l;
      case 132:
         return VAR_4->r;
      case 133:
         return VAR_4->m;
      case 138:
         return VAR_4->b4;
      case 137:
         return VAR_4->b5;
      case 130:
         return VAR_4->wu;
      case 131:
         return VAR_4->wd;
      case 135:
         return VAR_4->whu;
      case 136:
         return VAR_4->whd;
   }

   return 0;
}
