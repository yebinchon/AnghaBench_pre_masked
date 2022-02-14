
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,int ) ;

__attribute__((used)) static void FUNC_2(const uint8_t *VAR_1, size_t VAR_2)
{
   char VAR_3[3 * VAR_0 + 1];
   int VAR_4 = 0;

   while (VAR_2--)
   {
      FUNC_1(VAR_3 + 3 * VAR_4, "%2.2X ", *VAR_1++);
      if (++VAR_4 == VAR_0)
      {
         FUNC_0(((void*)0), VAR_3);
         VAR_4 = 0;
      }
   }

   if (VAR_4)
   {
      FUNC_0(((void*)0), VAR_3);
   }
}
