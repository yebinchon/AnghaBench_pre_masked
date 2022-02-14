
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(unsigned int VAR_0)
{
 u8 VAR_1;

 if (!VAR_0) {
  VAR_1 = 0x00;
 } else {
  u16 VAR_2 = 1193181/VAR_0;

  FUNC_2(0xb6, 0x43);
  FUNC_1();
  FUNC_2(VAR_2, 0x42);
  FUNC_1();
  FUNC_2(VAR_2 >> 8, 0x42);
  FUNC_1();

  VAR_1 = 0x03;
 }
 FUNC_0(0x61);
 FUNC_1();
 FUNC_2(VAR_1, 0x61);
 FUNC_1();
}
