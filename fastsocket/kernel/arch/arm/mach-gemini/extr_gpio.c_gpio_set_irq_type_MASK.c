
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (unsigned int) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = FUNC_4(VAR_3);
 unsigned int VAR_6 = 1 << (VAR_5 % 32);
 unsigned int VAR_7 = FUNC_0(VAR_5 / 32);
 unsigned int VAR_8, VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_7 + VAR_2);
 VAR_9 = FUNC_1(VAR_7 + VAR_1);
 VAR_8 = FUNC_1(VAR_7 + VAR_1);

 switch (VAR_4) {
 case 132:
  VAR_10 &= ~VAR_6;
  VAR_8 |= VAR_6;
  break;
 case 130:
  VAR_10 &= ~VAR_6;
  VAR_8 &= ~VAR_6;
  VAR_9 &= ~VAR_6;
  break;
 case 131:
  VAR_10 &= ~VAR_6;
  VAR_8 &= ~VAR_6;
  VAR_9 |= VAR_6;
  break;
 case 129:
  VAR_10 |= VAR_6;
  VAR_9 &= ~VAR_6;
  break;
 case 128:
  VAR_10 |= VAR_6;
  VAR_9 |= VAR_6;
  break;
 default:
  return -VAR_0;
 }

 FUNC_2(VAR_10, VAR_7 + VAR_2);
 FUNC_2(VAR_9, VAR_7 + VAR_1);
 FUNC_2(VAR_8, VAR_7 + VAR_1);

 FUNC_3(VAR_3);

 return 0;
}
