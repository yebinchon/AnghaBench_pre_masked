
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(int VAR_2)
{

 static int VAR_3[] = { 0x148, 0x184, 0x814, 0x418, 0x841, 0x481 };
 int VAR_4;
 if (VAR_2) {
  if (!VAR_1) {
   for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
    if (VAR_3[VAR_4] == VAR_0) break;
   if (VAR_4 < 5) VAR_0 = VAR_3[VAR_4+1];
   else VAR_1=1;
  }
  else VAR_1<<=1;
  if (VAR_1 > 8) VAR_1 = 8;
 } else {
  if (!VAR_1) {
   for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
    if (VAR_3[VAR_4] == VAR_0) break;
   if (VAR_4 > 0) VAR_0 = VAR_3[VAR_4-1];
  }
  else VAR_1>>=1;
 }
}
