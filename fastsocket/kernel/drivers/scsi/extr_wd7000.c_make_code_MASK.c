
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (char*,unsigned int,int,unsigned int) ;

__attribute__((used)) static int FUNC_1(unsigned VAR_7, unsigned VAR_8)
{




 switch ((VAR_7 >> 8) & 0xff) {
 case 0:
  VAR_7 = VAR_3;
  break;
 case 1:
  VAR_7 = VAR_4;
  break;
 case 2:
  VAR_7 = VAR_4;
  break;
 case 4:
  VAR_7 = VAR_6;
  break;
 case 5:
  VAR_7 = VAR_5;
  break;
 case 6:
  VAR_7 = VAR_2;
  break;
 case 80:
 case 81:
  VAR_7 = VAR_1;
  break;
 case 82:
  VAR_7 = VAR_0;
  break;
 case 83:
 case 84:
  VAR_7 = VAR_5;
  break;
 default:
  VAR_7 = VAR_3;
 }




 return (VAR_8 | (VAR_7 << 16));
}
