
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum BootDeviceIDs { ____Placeholder_BootDeviceIDs } BootDeviceIDs ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char*) ;

int FUNC_3(const char *VAR_1)
{
   enum BootDeviceIDs VAR_2 = FUNC_2((char *)VAR_1);
   int VAR_3 = -1;
   if (VAR_2 == VAR_0) {
      VAR_3 = FUNC_0(VAR_1);
   } else {
      VAR_3 = FUNC_1(VAR_1);
   }

   return VAR_3;
}
