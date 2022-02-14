
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
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,size_t) ;

__attribute__((used)) static void FUNC_2(
      rarch_setting_t *VAR_5,
      char *VAR_6, size_t VAR_7)
{
   if (!VAR_5)
      return;

   switch (*VAR_5->value.target.unsigned_integer)
   {
      case 128:
         FUNC_1(VAR_6,
               FUNC_0(
                  VAR_4),
               VAR_7);
         break;
      case 130:
         FUNC_1(VAR_6,
               FUNC_0(
                  VAR_2),
               VAR_7);
         break;
      case 129:
         FUNC_1(VAR_6,
               FUNC_0(
                  VAR_3),
               VAR_7);
         break;
      case 132:
         FUNC_1(VAR_6,
               FUNC_0(
                  VAR_0),
               VAR_7);
         break;
      case 131:
         FUNC_1(VAR_6,
               FUNC_0(
                  VAR_1),
               VAR_7);
         break;
   }
}
