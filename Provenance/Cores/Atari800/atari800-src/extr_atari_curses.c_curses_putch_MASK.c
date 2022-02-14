
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int VAR_0 ;
 int** VAR_1 ;

void FUNC_0(int VAR_2, int VAR_3, int VAR_4, UBYTE VAR_5, UBYTE VAR_6)
{

 switch (VAR_4) {
 case 18:
  VAR_4 = '-';
  break;
 case 17:
 case 3:
  VAR_4 = '/';
  break;
 case 26:
 case 5:
  VAR_4 = '\\';
  break;
 case 124:
  VAR_4 = '|';
  break;
 default:
  break;
 }
 if ((VAR_6 & 0xf) > (VAR_5 & 0xf))
  VAR_1[VAR_3][VAR_2] = VAR_4 + VAR_0;
 else
  VAR_1[VAR_3][VAR_2] = VAR_4;
}
