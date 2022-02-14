
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mouse_y; int mouse_x; } ;
typedef TYPE_1__ x11_input_t ;
typedef int int16_t ;




 int FUNC_0 (TYPE_1__*,unsigned int) ;

__attribute__((used)) static int16_t FUNC_1(x11_input_t *VAR_0, unsigned VAR_1)
{
   switch (VAR_1)
   {
      case 129:
         return VAR_0->mouse_x;
      case 128:
         return VAR_0->mouse_y;
      default:
         break;
   }

   return FUNC_0(VAR_0, VAR_1);
}
