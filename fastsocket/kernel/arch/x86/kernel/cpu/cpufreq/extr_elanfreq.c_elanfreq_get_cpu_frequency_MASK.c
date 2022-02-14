
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static unsigned int FUNC_4(unsigned int VAR_2)
{
 u8 VAR_3;

 FUNC_1();
 FUNC_3(0x80, VAR_1);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_2();

 if ((VAR_3 & 0xE0) == 0xE0)
  return 0;


 if ((VAR_3 & 0xE0) == 0xC0) {
  if ((VAR_3 & 0x01) == 0)
   return 66000;
  else
   return 99000;
 }


 if ((VAR_3 & 0xE0) == 0xA0)
  return 33000;

 return (1<<((VAR_3 & 0xE0) >> 5)) * 1000;
}
