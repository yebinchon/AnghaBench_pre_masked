
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,size_t) ;

size_t FUNC_1(char *VAR_1, size_t VAR_2)
{
   size_t VAR_3 = 0;

   while (VAR_2)
   {
      ssize_t VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);

      if (VAR_4 <= 0)
         break;

      VAR_1 += VAR_4;
      VAR_3 += VAR_4;
      VAR_2 -= VAR_4;
   }

   return VAR_3;
}
