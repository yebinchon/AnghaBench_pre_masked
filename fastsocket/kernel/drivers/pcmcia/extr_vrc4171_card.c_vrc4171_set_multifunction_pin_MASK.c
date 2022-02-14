
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vrc4171_slotb_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline void FUNC_2(vrc4171_slotb_t VAR_6)
{
 uint16_t VAR_7;

 VAR_7 = FUNC_0(VAR_0);
 VAR_7 &= ~VAR_2;

 switch (VAR_6) {
 case 129:
  VAR_7 |= VAR_4;
  break;
 case 128:
  VAR_7 |= VAR_5;
  break;
 case 131:
  VAR_7 |= VAR_1;
  break;
 case 130:
  VAR_7 |= VAR_3;
  break;
 default:
  break;
 }

 FUNC_1(VAR_7, VAR_0);
}
