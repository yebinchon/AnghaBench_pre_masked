
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static inline void FUNC_7(void)
{
 uint16_t VAR_6;

 switch (FUNC_1()) {
 case 130:
 case 129:
 case 128:
  VAR_6 = FUNC_3(VAR_2);
  VAR_6 |= VAR_3;
  FUNC_4(VAR_2, VAR_6);
  break;
 default:
  FUNC_5(VAR_4 | VAR_5);
  FUNC_0(VAR_0, VAR_1);
  FUNC_2();
  FUNC_6(0);
  __asm__("jr     %0"::"r"(0xbfc00000));
  break;
 }
}
