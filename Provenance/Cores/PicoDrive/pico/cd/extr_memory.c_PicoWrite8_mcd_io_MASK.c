
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int,int,int ) ;
 int FUNC_2 (int,int) ;

void FUNC_3(u32 VAR_2, u32 VAR_3)
{
  if ((VAR_2 & 0xff00) == 0x2000) {
    FUNC_1(VAR_0, "m68k_regs w8:  [%02x]   %02x @%06x",
      VAR_2 & 0x3f, VAR_3, VAR_1);
    FUNC_2(VAR_2, VAR_3);
    return;
  }

  FUNC_0(VAR_2, VAR_3);
}
