
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int udev_input_t ;
struct TYPE_5__ {int l; } ;
typedef TYPE_1__ udev_input_mouse_t ;
typedef int int16_t ;





 TYPE_1__* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int16_t FUNC_3(udev_input_t *VAR_0,
      unsigned VAR_1, unsigned VAR_2, bool VAR_3)
{
   udev_input_mouse_t *VAR_4 = FUNC_0(VAR_0, VAR_1);

   if (!VAR_4)
      return 0;

   switch (VAR_2)
   {
      case 129:
         return FUNC_1(VAR_4, VAR_3);
      case 128:
         return FUNC_2(VAR_4, VAR_3);
      case 130:
         return VAR_4->l;
   }

   return 0;
}
