
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* unsigned_integer; } ;
struct TYPE_6__ {TYPE_1__ target; } ;
struct TYPE_7__ {TYPE_2__ value; } ;
typedef TYPE_3__ rarch_setting_t ;



__attribute__((used)) static int FUNC_0(
      rarch_setting_t *VAR_0, bool VAR_1)
{
   if (!VAR_0)
      return -1;

   switch (*VAR_0->value.target.unsigned_integer)
   {
      case 0:
         *VAR_0->value.target.unsigned_integer = 3840;
         break;
      case 1:
         *VAR_0->value.target.unsigned_integer = 0;
         break;
      case 1920:
         *VAR_0->value.target.unsigned_integer = 1;
         break;
      case 2560:
         *VAR_0->value.target.unsigned_integer = 1920;
         break;
      case 3840:
         *VAR_0->value.target.unsigned_integer = 2560;
         break;
   }

   return 0;
}
