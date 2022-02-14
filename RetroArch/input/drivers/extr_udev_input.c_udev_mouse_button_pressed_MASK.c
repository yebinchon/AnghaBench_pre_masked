
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int udev_input_t ;
struct TYPE_3__ {int l; int r; int m; int b4; int b5; int wu; int wd; int whu; int whd; } ;
typedef TYPE_1__ udev_input_mouse_t ;
 TYPE_1__* FUNC_0 (int *,unsigned int) ;

__attribute__((used)) static bool FUNC_1(
      udev_input_t *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
   udev_input_mouse_t *VAR_3 = FUNC_0(VAR_0, VAR_1);

   if (!VAR_3)
      return 0;

   switch ( VAR_2 )
   {
      case 132:
         return VAR_3->l;
      case 130:
         return VAR_3->r;
      case 131:
         return VAR_3->m;
      case 136:
         return VAR_3->b4;
      case 135:
         return VAR_3->b5;
      case 128:
         return VAR_3->wu;
      case 129:
         return VAR_3->wd;
      case 133:
         return VAR_3->whu;
      case 134:
         return VAR_3->whd;
   }

   return 0;
}
