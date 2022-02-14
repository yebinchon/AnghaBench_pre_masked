
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_0 ;




 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static int FUNC_6(unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned VAR_3 = FUNC_1(VAR_1);
 unsigned VAR_4 = FUNC_0(VAR_1);
 unsigned VAR_5 = FUNC_4(FUNC_2(VAR_3));
 unsigned VAR_6 = FUNC_4(FUNC_3(VAR_3));

 switch (VAR_2) {
 case 130:
  VAR_5 |= VAR_4;
  VAR_6 |= VAR_4;
  break;
 case 131:
  VAR_5 &= ~VAR_4;
  VAR_6 |= VAR_4;
  break;
 case 129:
  VAR_5 |= VAR_4;
  VAR_6 &= ~VAR_4;
  break;
 case 128:
  VAR_5 &= ~VAR_4;
  VAR_6 &= ~VAR_4;
  break;
 default:
  return -VAR_0;
 }

 FUNC_5(VAR_5, FUNC_2(VAR_3));
 FUNC_5(VAR_6, FUNC_3(VAR_3));

 return 0;
}
