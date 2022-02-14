
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32 ;


 int * VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
  int VAR_1,VAR_2,VAR_3;
  uint32 VAR_4;
  for(VAR_2 = 0; VAR_2 < 0x100; VAR_2++)
  for(VAR_3 = 0; VAR_3 < 0x100; VAR_3++)
  {
    VAR_4 = 0;
    for(VAR_1 = 0; VAR_1 < 8; VAR_1++)
    {


      VAR_4 |= (VAR_3 & (0x80 >> VAR_1)) ? (uint32)(8 << (VAR_1 << 2)) : 0;
      VAR_4 |= (VAR_2 & (0x80 >> VAR_1)) ? (uint32)(4 << (VAR_1 << 2)) : 0;
    }






    VAR_0[(VAR_2 << 8) | (VAR_3)] = VAR_4;

   }
}
