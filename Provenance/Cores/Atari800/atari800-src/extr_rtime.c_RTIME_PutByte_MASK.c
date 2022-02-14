
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;

void FUNC_0(UBYTE VAR_4)
{
 switch (VAR_1) {
 case 0:
  VAR_2 = VAR_4 & 0x0f;
  VAR_1 = 1;
  break;
 case 1:
  VAR_3 = VAR_4 << 4;
  VAR_1 = 2;
  break;
 case 2:
  VAR_0[VAR_2] = VAR_3 | (VAR_4 & 0x0f);
  VAR_1 = 0;
  break;
 }
}
