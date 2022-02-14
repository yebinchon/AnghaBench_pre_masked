
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {long long tv_sec; int tv_usec; } ;


 int FUNC_0 (struct timeval*,int *) ;
 int FUNC_1 (char*,float) ;

__attribute__((used)) static void FUNC_2()
{
   static int VAR_0 = 0;
   static long long VAR_1 = 0;
   long long VAR_2;
   struct timeval VAR_3;
   float VAR_4;

   VAR_0++;

   FUNC_0(&VAR_3, ((void*)0));
   VAR_2 = VAR_3.tv_sec * 1000LL + VAR_3.tv_usec / 1000;

   if (VAR_1 == 0)
   {
      VAR_1 = VAR_2;
   }
   else if (VAR_2 - VAR_1 > 5000)
   {
      VAR_4 = (float) VAR_0 / ((VAR_2 - VAR_1) / 1000.0);
      VAR_0 = 0;
      VAR_1 = VAR_2;
      FUNC_1("%3.2f FPS", VAR_4);
   }
}
