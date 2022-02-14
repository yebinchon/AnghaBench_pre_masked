
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int scope_t ;
typedef int rxml_node_t ;


 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,char const*,char const*,char const*,char const*) ;
 int FUNC_4 (int *,char const*,char const*) ;

__attribute__((used)) static bool FUNC_5(scope_t *VAR_0, rxml_node_t *VAR_1, bool VAR_2)
{
   const char *VAR_3;
   const char *VAR_4;
   const char *VAR_5;

   if (!(VAR_3 = FUNC_1(VAR_1, "name")))
   {
      FUNC_0("video_layout: <param> is missing 'name' attribute\n");
      return 0;
   }

   VAR_4 = FUNC_1(VAR_1, "value");
   VAR_5 = FUNC_1(VAR_1, "start");

   if (VAR_2 && VAR_5)
   {
      const char *VAR_6 = FUNC_1(VAR_1, "increment");
      const char *VAR_7 = FUNC_1(VAR_1, "lshift");
      const char *VAR_8 = FUNC_1(VAR_1, "rshift");

      if (VAR_6 || VAR_7 || VAR_8)
      {
         FUNC_3(VAR_0, VAR_3, VAR_5, VAR_6, VAR_7, VAR_8);
      }
      else
      {
         FUNC_0("video_layout: invalid generator <param name=\"%s\" /> missing increment/shift\n",
            FUNC_2(VAR_0, VAR_3));
         return 0;
      }
   }
   else if (VAR_3 && VAR_4)
   {
      FUNC_4(VAR_0, VAR_3, VAR_4);
   }
   else
   {
      FUNC_0("video_layout: invalid parameter <param name=\"%s\" /> missing value\n",
         FUNC_2(VAR_0, VAR_3));
      return 0;
   }

   return 1;
}
