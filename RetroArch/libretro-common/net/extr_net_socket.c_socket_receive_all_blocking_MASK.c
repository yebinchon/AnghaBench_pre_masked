
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int,char*,size_t,int ) ;

int FUNC_1(int VAR_0, void *VAR_1, size_t VAR_2)
{
   const uint8_t *VAR_3 = (const uint8_t*)VAR_1;

   while (VAR_2)
   {
      ssize_t VAR_4 = FUNC_0(VAR_0, (char*)VAR_3, VAR_2, 0);
      if (VAR_4 <= 0)
         return 0;

      VAR_3 += VAR_4;
      VAR_2 -= VAR_4;
   }

   return 1;
}
