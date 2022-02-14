
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static uint16_t FUNC_0(uint32_t VAR_7)
{
 uint16_t VAR_8;

 switch ((VAR_7 & VAR_0) >> VAR_1) {
 case 0:
  VAR_8 = VAR_6;
  break;
 case 1:
  VAR_8 = ((VAR_7 & VAR_2) >> VAR_3) * 2;
  break;
 case 2:
  VAR_8 = ((VAR_7 & VAR_4) >> VAR_5) * 2;
  break;
 default:
  VAR_8 = 0;
  break;
 }
 return VAR_8;
}
