
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int VAR_3 ;

boolean_t
FUNC_1(uint8_t VAR_4)
{
 int VAR_5;
 int VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;

 VAR_5 = VAR_4 / 32;
 VAR_6 = 1 << (VAR_4 % 32);

 VAR_7 = FUNC_0(VAR_1, VAR_5);
 VAR_8 = FUNC_0(VAR_2, VAR_5);

 if ((VAR_7 | VAR_8) & VAR_6)
  return (VAR_3);

 return (VAR_0);
}
