
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;

int FUNC_2(uint32_t VAR_4)
{
 uint32_t VAR_5;


 if (VAR_4 >= FUNC_0())
  return -1;





 VAR_5 = (VAR_4 & 0x3) * 8;






 switch (VAR_4 & 0xC) {
 case 0x0:
  return (FUNC_1(VAR_0) & (0xFF << VAR_5)) >>
   VAR_5;
 case 0x4:
  return (FUNC_1(VAR_1) & (0xFF << VAR_5)) >>
   VAR_5;
 case 0x8:
  return (FUNC_1(VAR_2) & (0xFF << VAR_5)) >>
   VAR_5;
 case 0xC:
  return (FUNC_1(VAR_3) & (0xFF << VAR_5)) >>
   VAR_5;
 }
 return 0;
}
