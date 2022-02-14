
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_STATUS_T ;
typedef int MMAL_COMPONENT_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int **) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(int VAR_0, const char **VAR_1)
{
   MMAL_COMPONENT_T *VAR_2;
   MMAL_STATUS_T VAR_3;
   if (VAR_0 != 3)
   {
      FUNC_2("usage: mmal-vc-diag create <name>\n");
      FUNC_2("   e.g. vc.camera\n");
      FUNC_0(1);
   }
   VAR_3 = FUNC_1(VAR_1[2], &VAR_2);
   if (VAR_2)
      FUNC_2("Created component\n");
   else
      FUNC_2("Failed to create %s: %d\n", VAR_1[2], VAR_3);

   return 0;
}
