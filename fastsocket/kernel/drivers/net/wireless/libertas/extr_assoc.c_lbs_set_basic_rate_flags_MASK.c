
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static void FUNC_0(u8 *VAR_0, size_t VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2] == 0x02 || VAR_0[VAR_2] == 0x04 ||
      VAR_0[VAR_2] == 0x0b || VAR_0[VAR_2] == 0x16)
   VAR_0[VAR_2] |= 0x80;
 }
}
