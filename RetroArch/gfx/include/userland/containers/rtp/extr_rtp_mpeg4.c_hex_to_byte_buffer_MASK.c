
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0,
      uint8_t *VAR_1,
      uint32_t VAR_2)
{
   uint8_t VAR_3;

   while (VAR_2--)
   {
      VAR_3 = FUNC_0(*VAR_0++) << 4;
      VAR_3 |= FUNC_0(*VAR_0++);
      *VAR_1++ = VAR_3;
   }
}
