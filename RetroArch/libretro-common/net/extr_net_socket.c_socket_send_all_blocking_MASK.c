
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char const*,size_t,int ) ;

int FUNC_2(int VAR_1, const void *VAR_2, size_t VAR_3,
      bool VAR_4)
{
   const uint8_t *VAR_5 = (const uint8_t*)VAR_2;

   while (VAR_3)
   {
      ssize_t VAR_6 = FUNC_1(VAR_1, (const char*)VAR_5, VAR_3,
            VAR_4 ? VAR_0 : 0);
      if (VAR_6 <= 0)
      {
         if (FUNC_0((int)VAR_6))
            continue;

         return 0;
      }

      VAR_5 += VAR_6;
      VAR_3 -= VAR_6;
   }

   return 1;
}
