
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7 = 0;

 switch ((VAR_5 & 15) >> 1) {
 case 0:
  VAR_7 |= (VAR_6 & VAR_1);
  break;
 case 1:
  VAR_7 |= (VAR_6 & VAR_0);
  break;
 case 2:
  VAR_7 |= (VAR_6 & VAR_4);
  break;
 case 3:
  VAR_7 |= (VAR_6 & (VAR_0|VAR_4));
  break;
 case 4:
  VAR_7 |= (VAR_6 & VAR_3);
  break;
 case 5:
  VAR_7 |= (VAR_6 & VAR_2);
  break;
 case 7:
  VAR_7 |= (VAR_6 & VAR_4);

 case 6:
  VAR_7 |= (!(VAR_6 & VAR_3) != !(VAR_6 & VAR_1));
  break;
 }


 return (!!VAR_7 ^ (VAR_5 & 1));
}
