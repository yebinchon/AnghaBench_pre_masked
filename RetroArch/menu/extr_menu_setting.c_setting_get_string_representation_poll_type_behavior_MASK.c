
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


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,size_t) ;

__attribute__((used)) static void FUNC_2(
      rarch_setting_t *VAR_3,
      char *VAR_4, size_t VAR_5)
{
   if (!VAR_3)
      return;

   switch (*VAR_3->value.target.unsigned_integer)
   {
      case 0:
         FUNC_1(VAR_4,
               FUNC_0(
                  VAR_0), VAR_5);
         break;
      case 1:
         FUNC_1(VAR_4,
               FUNC_0(
                  VAR_2), VAR_5);
         break;
      case 2:
         FUNC_1(VAR_4,
               FUNC_0(
                  VAR_1), VAR_5);
         break;
   }
}
