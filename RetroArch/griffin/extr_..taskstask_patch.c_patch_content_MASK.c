
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char const*,int **,int *) ;
 int FUNC_4 (int,char const*,int **,int *) ;
 int FUNC_5 (int,char const*,int **,int *) ;

__attribute__((used)) static bool FUNC_6(
      bool VAR_2,
      bool VAR_3,
      bool VAR_4,
      const char *VAR_5,
      const char *VAR_6,
      const char *VAR_7,
      uint8_t **VAR_8,
      void *VAR_9)
{
   ssize_t *VAR_10 = (ssize_t*)VAR_9;
   bool VAR_11 = !VAR_3 && !VAR_2;
   bool VAR_12 = !VAR_4 && !VAR_3;
   bool VAR_13 = !VAR_4 && !VAR_2;

   if ( (unsigned)VAR_2
         + (unsigned)VAR_3
         + (unsigned)VAR_4 > 1)
   {
      FUNC_1("%s\n",
            FUNC_2(VAR_1));
      return 0;
   }

   if ( !FUNC_4(VAR_12, VAR_5, VAR_8, VAR_10)
         && !FUNC_3(VAR_13, VAR_6, VAR_8, VAR_10)
         && !FUNC_5(VAR_11, VAR_7, VAR_8, VAR_10))
   {
      FUNC_0("%s\n",
            FUNC_2(VAR_0));
      return 0;
   }

   return 1;
}
