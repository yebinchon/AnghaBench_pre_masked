
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int udev_input_mouse_t ;
struct udev_input {unsigned int num_devices; TYPE_2__** devices; } ;
struct TYPE_5__ {unsigned int* input_mouse_index; } ;
struct TYPE_7__ {TYPE_1__ uints; } ;
typedef TYPE_3__ settings_t ;
struct TYPE_6__ {scalar_t__ type; int mouse; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 () ;
 int FUNC_1 () ;

__attribute__((used)) static udev_input_mouse_t *FUNC_2(
      struct udev_input *VAR_2, unsigned VAR_3)
{
   unsigned VAR_4;
   unsigned VAR_5 = 0;
   settings_t *VAR_6 = FUNC_0();
   udev_input_mouse_t *VAR_7 = ((void*)0);

   if (VAR_3 >= VAR_0 || !FUNC_1())
      return ((void*)0);

   for (VAR_4 = 0; VAR_4 < VAR_2->num_devices; ++VAR_4)
   {
      if (VAR_2->devices[VAR_4]->type == VAR_1)
         continue;

      if (VAR_5 == VAR_6->uints.input_mouse_index[VAR_3])
      {
         VAR_7 = &VAR_2->devices[VAR_4]->mouse;
         break;
      }

      ++VAR_5;
   }

   return VAR_7;
}
