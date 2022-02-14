
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(int VAR_0, int * VAR_1, int * VAR_2)
{
   if (VAR_0 & 0x10)
   {

      *VAR_1 = 0;
      *VAR_2 = VAR_0 & 0xf;
   }
   else
   {
      *VAR_1 = VAR_0 & 0xf;
      *VAR_2 = 0;
   }
}
