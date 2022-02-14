
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,...) ;

__attribute__((used)) static void
FUNC_1(int VAR_1, void *VAR_2, size_t VAR_3)
{
 unsigned char *VAR_4 = VAR_2;
 size_t VAR_5;

 if (!(VAR_0 & VAR_1))
  return;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  unsigned char VAR_6 = (VAR_4[VAR_5] & 0xf0) >> 4;
  unsigned char VAR_7 = VAR_4[VAR_5] & 0x0f;

  if (VAR_5 != 0) {
   if (VAR_5 % 32 == 0)
    FUNC_0("\n");
   else if (VAR_5 % 4 == 0)
    FUNC_0(" ");
  }
  FUNC_0("%c%c",
   VAR_6 < 10 ? VAR_6 + '0' : VAR_6 - 10 + 'a',
   VAR_7 < 10 ? VAR_7 + '0' : VAR_7 - 10 + 'a');
 }
 if (VAR_5 % 32 != 0)
  FUNC_0("\n");
}
