
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 char const* FUNC_1 (int ) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;
 int FUNC_8 (char*,char const*,size_t) ;

__attribute__((used)) static int FUNC_9(const char *VAR_5, const char *VAR_6, unsigned VAR_7, char *VAR_8, size_t VAR_9)
{
   const char *VAR_10 = ((void*)0);

   if (FUNC_5(VAR_5))
      return 0;

   VAR_10 = FUNC_2(VAR_5);

   if (FUNC_5(VAR_10))
      return 0;

   if (FUNC_7(FUNC_3(VAR_10),
            "lpl"))
   {

      if (FUNC_6(VAR_10, FUNC_0(VAR_1)))
         FUNC_8(VAR_8, FUNC_1(VAR_3), VAR_9);

      else if (FUNC_6(VAR_10, FUNC_0(VAR_0)))
         FUNC_8(VAR_8, FUNC_1(VAR_2), VAR_9);

      else
      {
         char VAR_11[VAR_4];

         VAR_11[0] = '\0';

         FUNC_8(VAR_11, VAR_10, sizeof(VAR_11));
         FUNC_4(VAR_11);

         FUNC_8(VAR_8, VAR_11, VAR_9);
      }
   }


   else
      FUNC_8(VAR_8, VAR_10, VAR_9);

   return 0;
}
