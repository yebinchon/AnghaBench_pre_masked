
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int MMAL_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,...) ;
 int FUNC_1 (char*) ;

MMAL_STATUS_T FUNC_2(char** VAR_2, char** VAR_3, char * VAR_4, int VAR_5)
{
   *VAR_2 = ((void*)0);
   *VAR_3 = ((void*)0);
   if (0 > FUNC_0(VAR_2, VAR_4, VAR_5) ||
         0 > FUNC_0(VAR_3, "%s~", *VAR_2))
   {
      if (*VAR_2 != ((void*)0))
      {
         FUNC_1(*VAR_2);
      }
      return VAR_0;
   }
   return VAR_1;
}
