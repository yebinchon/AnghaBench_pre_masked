
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,char*,size_t,int ) ;

ssize_t FUNC_2(int VAR_0, bool *VAR_1,
      void *VAR_2, size_t VAR_3)
{
   const uint8_t *VAR_4 = (const uint8_t*)VAR_2;
   ssize_t VAR_5 = FUNC_1(VAR_0, (char*)VAR_4, VAR_3, 0);

   if (VAR_5 > 0)
      return VAR_5;

   if (VAR_5 == 0)
   {

      *VAR_1 = 1;
      return -1;
   }

   if (FUNC_0((int)VAR_5))
      return 0;

   *VAR_1 = 1;
   return -1;
}
