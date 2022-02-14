
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
 int VAR_7 ;

__attribute__((used)) static uint16_t FUNC_0(uint32_t VAR_8)
{
 uint16_t VAR_9;

 switch ((VAR_8 & VAR_6) >> VAR_7) {
 case 0:
  VAR_9 = ((VAR_8 & VAR_0) >> VAR_1) * 2 + 1;
  break;
 case 1:
  VAR_9 = ((VAR_8 & VAR_2) >> VAR_3) * 2 + 1;
  break;
 case 2:
  VAR_9 = ((VAR_8 & VAR_4) >> VAR_5) * 2 + 1;
  break;
 default:
  VAR_9 = 0;
  break;
 }
 return VAR_9;
}
