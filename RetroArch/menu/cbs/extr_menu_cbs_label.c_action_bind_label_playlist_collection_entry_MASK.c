
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int playlist_name ;
typedef int file_list_t ;


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

__attribute__((used)) static int FUNC_9(
      file_list_t *VAR_5,
      unsigned VAR_6, unsigned VAR_7,
      const char *VAR_8, const char *VAR_9,
      char *VAR_10, size_t VAR_11)
{
   const char *VAR_12 = ((void*)0);

   if (FUNC_5(VAR_9))
      return 0;

   VAR_12 = FUNC_2(VAR_9);

   if (FUNC_5(VAR_12))
      return 0;

   if (FUNC_7(FUNC_3(VAR_12),
            "lpl"))
   {

      if (FUNC_6(VAR_12, FUNC_0(VAR_1)))
         FUNC_8(VAR_10, FUNC_1(VAR_3), VAR_11);

      else if (FUNC_6(VAR_12, FUNC_0(VAR_0)))
         FUNC_8(VAR_10, FUNC_1(VAR_2), VAR_11);

      else
      {
         char VAR_13[VAR_4];

         VAR_13[0] = '\0';

         FUNC_8(VAR_13, VAR_12, sizeof(VAR_13));
         FUNC_4(VAR_13);

         FUNC_8(VAR_10, VAR_13, VAR_11);
      }
   }


   else
      FUNC_8(VAR_10, VAR_12, VAR_11);

   return 0;
}
