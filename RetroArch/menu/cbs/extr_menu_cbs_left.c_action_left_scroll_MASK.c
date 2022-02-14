
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,...) ;
 int FUNC_2 (int) ;
 size_t FUNC_3 () ;
 int FUNC_4 (size_t) ;

__attribute__((used)) static int FUNC_5(unsigned VAR_2, const char *VAR_3,
      bool VAR_4)
{
   size_t VAR_5 = 0;
   unsigned VAR_6 = 0, VAR_7 = 0;
   size_t VAR_8 = FUNC_3();

   if (!FUNC_1(VAR_1, &VAR_5))
      return 0;

   VAR_6 = (unsigned)((FUNC_0(VAR_5, 2) - 2) / 4 + 1);
   VAR_7 = 4 + 4 * VAR_6;

   if (VAR_8 > VAR_7)
   {
      size_t VAR_9 = VAR_8 - VAR_7;
      FUNC_4(VAR_9);
      FUNC_2(1);
   }
   else
   {
      bool VAR_10 = 0;
      FUNC_1(VAR_0, &VAR_10);
   }

   return 0;
}
