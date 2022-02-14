
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,unsigned int*,unsigned int*) ;

__attribute__((used)) static void FUNC_1(void *VAR_0, bool *VAR_1,
      bool *VAR_2, unsigned *VAR_3, unsigned *VAR_4, bool VAR_5)
{
   unsigned VAR_6 = 0;
   unsigned VAR_7 = 0;

   *VAR_1 = 0;

   FUNC_0(VAR_0, &VAR_6, &VAR_7);
   if (VAR_6 != *VAR_3 || VAR_7 != *VAR_4)
   {
      *VAR_3 = VAR_6;
      *VAR_4 = VAR_7;
      *VAR_2 = 1;
   }
}
