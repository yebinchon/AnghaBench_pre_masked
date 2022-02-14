
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
typedef int u_int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static u_int32_t
FUNC_0(u_int8_t VAR_4)
{
 u_int32_t VAR_5;

 if (VAR_4 >= 0x30 && VAR_4 <= 0x3f)
  VAR_5 = VAR_3;
 else if (VAR_4 >= 0x20 && VAR_4 <= 0x2f)
  VAR_5 = VAR_2;
 else if (VAR_4 >= 0x08 && VAR_4 <= 0x17)
  VAR_5 = VAR_1;
 else
  VAR_5 = VAR_0;

 return (VAR_5);
}
