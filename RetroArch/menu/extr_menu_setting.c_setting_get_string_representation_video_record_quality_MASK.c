
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
 int FUNC_0 (char*,char*,size_t) ;

__attribute__((used)) static void FUNC_1(rarch_setting_t *VAR_0,
      char *VAR_1, size_t VAR_2)
{
   if (!VAR_0)
      return;


   switch (*VAR_0->value.target.unsigned_integer)
   {
      case 135:
         FUNC_0(VAR_1, "Custom", VAR_2);
         break;
      case 131:
         FUNC_0(VAR_1, "Low", VAR_2);
         break;
      case 130:
         FUNC_0(VAR_1, "Medium", VAR_2);
         break;
      case 133:
         FUNC_0(VAR_1, "High", VAR_2);
         break;
      case 132:
         FUNC_0(VAR_1, "Lossless", VAR_2);
         break;
      case 129:
         FUNC_0(VAR_1, "WebM Fast", VAR_2);
         break;
      case 128:
         FUNC_0(VAR_1, "WebM High Quality", VAR_2);
         break;
      case 134:
         FUNC_0(VAR_1, "GIF", VAR_2);
         break;
      case 136:
         FUNC_0(VAR_1, "APNG", VAR_2);
         break;
   }
}
