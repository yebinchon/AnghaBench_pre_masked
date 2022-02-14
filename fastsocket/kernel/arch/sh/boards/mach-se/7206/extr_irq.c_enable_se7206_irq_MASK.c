
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (unsigned short,int ) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_3)
{
 unsigned short VAR_4;
 unsigned short VAR_5 = (0x0001 << 4 * (3 - (130 - VAR_3)));
 unsigned short VAR_6,VAR_7;


 VAR_4 = FUNC_0(VAR_0);
 VAR_4 |= VAR_5;
 FUNC_1(VAR_4, VAR_0);


 VAR_6 = FUNC_0(VAR_1);
 VAR_7 = FUNC_0(VAR_2);

 switch (VAR_3) {
 case 130:
  VAR_6 &= ~0x0010;
  break;
 case 129:
  VAR_6 &= ~0x000f;
  break;
 case 128:
  VAR_6 &= ~0x0f00;
  VAR_7 &= ~0x00ff;
  break;
 }
 FUNC_1(VAR_6, VAR_1);
 FUNC_1(VAR_7, VAR_2);
}
