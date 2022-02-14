
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int D3DPRESENT_PARAMETERS ;





 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (void*,int *) ;
 int FUNC_2 (void*) ;

bool FUNC_3(void *VAR_0, void *VAR_1)
{
   const char *VAR_2 = ((void*)0);

   if (FUNC_1(VAR_0, (D3DPRESENT_PARAMETERS*)VAR_1))
      return 1;

   FUNC_0("[D3D]: Attempting to recover from dead state...\n");



   switch (FUNC_2(VAR_0))
   {
      case 130:
         VAR_2 = "DEVICELOST";
         break;

      case 129:
         VAR_2 = "DEVICENOTRESET";
         break;

      case 128:
         VAR_2 = "DRIVERINTERNALERROR";
         break;

      default:
         VAR_2 = "Unknown";
   }
   FUNC_0("[D3D]: recovering from dead state: (%s).\n", VAR_2);


   return 0;
}
