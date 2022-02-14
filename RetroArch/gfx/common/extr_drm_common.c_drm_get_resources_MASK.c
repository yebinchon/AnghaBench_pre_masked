
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;

bool FUNC_2(int VAR_1)
{
   VAR_0 = FUNC_1(VAR_1);
   if (!VAR_0)
   {
      FUNC_0("[DRM]: Couldn't get device resources.\n");
      return 0;
   }

   return 1;
}
