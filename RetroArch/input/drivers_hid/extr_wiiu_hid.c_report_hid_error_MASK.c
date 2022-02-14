
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* driver; } ;
typedef TYPE_2__ wiiu_adapter_t ;
typedef int int32_t ;
typedef int int16_t ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, wiiu_adapter_t *VAR_1, int32_t VAR_2)
{
   if (VAR_2 >= 0)
      return;

   int16_t VAR_3 = VAR_2 & 0xffff;
   int16_t VAR_4 = (VAR_2 >> 16) & 0xffff;
   const char *VAR_5 = (VAR_1 && VAR_1->driver) ? VAR_1->driver->name : "unknown";

   switch(VAR_3)
   {
      case -100:
         FUNC_0("[hid]: Invalid RM command (%s)\n", VAR_5);
         break;
      case -102:
         FUNC_0("[hid]: Invalid IOCTL command (%s)\n", VAR_5);
         break;
      case -103:
         FUNC_0("[hid]: bad vector count (%s)\n", VAR_5);
         break;
      case -104:
         FUNC_0("[hid]: invalid memory bank (%s)\n", VAR_5);
         break;
      case -105:
         FUNC_0("[hid]: invalid memory alignment (%s)\n", VAR_5);
         break;
      case -106:
         FUNC_0("[hid]: invalid data size (%s)\n", VAR_5);
         break;
      case -107:
         FUNC_0("[hid]: request cancelled (%s)\n", VAR_5);
         break;
      case -108:
         FUNC_0("[hid]: request timed out (%s)\n", VAR_5);
         break;
      case -109:
         FUNC_0("[hid]: request aborted (%s)\n", VAR_5);
         break;
      case -110:
         FUNC_0("[hid]: client priority error (%s)\n", VAR_5);
         break;
      case -111:
         FUNC_0("[hid]: invalid device handle (%s)\n", VAR_5);
         break;





   }
}
