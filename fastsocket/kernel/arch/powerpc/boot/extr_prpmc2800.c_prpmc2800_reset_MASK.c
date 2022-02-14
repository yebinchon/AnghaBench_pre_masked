
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(void)
{
 u32 VAR_6;

 FUNC_2(5000000);

 if (VAR_5 != 0) {
  VAR_6 = FUNC_0((u32 *)(VAR_5 + VAR_3));
  VAR_6 &= 0xFFFF0FFF;
  FUNC_1((u32 *)(VAR_5 + VAR_3), VAR_6);

  VAR_6 = FUNC_0((u32 *)(VAR_5 + VAR_1));
  VAR_6 |= 0x00000004;
  FUNC_1((u32 *)(VAR_5 + VAR_1), VAR_6);

  VAR_6 = FUNC_0((u32 *)(VAR_5 + VAR_0));
  VAR_6 |= 0x00000004;
  FUNC_1((u32 *)(VAR_5 + VAR_0), VAR_6);

  VAR_6 = FUNC_0((u32 *)(VAR_5 + VAR_4));
  VAR_6 &= 0xFFFF0FFF;
  FUNC_1((u32 *)(VAR_5 + VAR_4), VAR_6);

  VAR_6 = FUNC_0((u32 *)(VAR_5 + VAR_1));
  VAR_6 |= 0x00080000;
  FUNC_1((u32 *)(VAR_5 + VAR_1), VAR_6);

  VAR_6 = FUNC_0((u32 *)(VAR_5 + VAR_0));
  VAR_6 |= 0x00080000;
  FUNC_1((u32 *)(VAR_5 + VAR_0), VAR_6);

  FUNC_1((u32 *)(VAR_5 + VAR_2),
    0x00080004);
 }

 for (;;);
}
