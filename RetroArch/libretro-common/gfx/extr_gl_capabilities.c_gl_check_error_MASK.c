
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 (char*) ;

bool FUNC_2(char **VAR_0)
{
   int VAR_1 = FUNC_0();
   switch (VAR_1)
   {
      case 132:
         *VAR_0 = FUNC_1("GL: Invalid enum.");
         break;
      case 130:
         *VAR_0 = FUNC_1("GL: Invalid value.");
         break;
      case 131:
         *VAR_0 = FUNC_1("GL: Invalid operation.");
         break;
      case 128:
         *VAR_0 = FUNC_1("GL: Out of memory.");
         break;
      case 129:
         return 1;
      default:
         *VAR_0 = FUNC_1("Non specified GL error.");
         break;
   }

   return 0;
}
