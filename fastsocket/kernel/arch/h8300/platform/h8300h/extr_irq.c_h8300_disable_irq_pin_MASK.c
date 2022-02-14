
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1(unsigned int VAR_3)
{
 int VAR_4;
 if (VAR_3 < 133 || VAR_3 > 128)
  return;


 VAR_4 = 1 << (VAR_3 - 133);
 switch(VAR_3) {
 case 133:
 case 132:
 case 131:
 case 130:
  *(volatile unsigned char *)VAR_2 &= ~VAR_4;
  FUNC_0(VAR_0, VAR_4);
  break ;
 case 129:
 case 128:
  *(volatile unsigned char *)VAR_2 &= ~VAR_4;
  FUNC_0(VAR_1, VAR_4);
  break;
 }
}
