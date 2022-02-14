
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int*,int*,int*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int,int,int,int,int,int,int,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

bool FUNC_8(
      const char *VAR_0,
      const char *VAR_1,
      bool VAR_2, bool VAR_3,
      bool VAR_4, bool VAR_5)
{
   bool VAR_6 = 0;
   bool VAR_7 = 0;
   bool VAR_8 = 0;
   bool VAR_9 = 0;
   bool VAR_10 = 0;

   FUNC_0(&VAR_6, &VAR_7, &VAR_8, &VAR_9);


   if ( FUNC_1(VAR_0)
         && FUNC_1(VAR_1))
      return 0;

   VAR_10 = FUNC_2(
         VAR_0,
         VAR_1, VAR_2, VAR_6, VAR_7,
         VAR_3, VAR_4, VAR_5,
         FUNC_7() &&
         FUNC_5(),
         FUNC_6(),
         FUNC_4()
         );

   if (VAR_6 && !VAR_7)
         FUNC_3();

   return VAR_10;
}
