
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u8 ;
typedef unsigned long u16 ;


 unsigned long VAR_0 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (int) ;

__attribute__((used)) static u16 FUNC_3(unsigned long VAR_1, u8 VAR_2, u8 VAR_3)
{
 unsigned long VAR_4,VAR_5;

 VAR_4 = VAR_1 + VAR_0;
 VAR_5 = VAR_2;
 VAR_5 = (VAR_5<<5) + VAR_3;
 VAR_5 = (VAR_5<<16) + 0x08000000;
 FUNC_1(VAR_5,VAR_4);
 FUNC_2(1);
 while(1)
 {
  VAR_5 = FUNC_0(VAR_4);
  if(VAR_5&0x10000000)
   break;
 }
 return (VAR_5&0x0ffff);
}
