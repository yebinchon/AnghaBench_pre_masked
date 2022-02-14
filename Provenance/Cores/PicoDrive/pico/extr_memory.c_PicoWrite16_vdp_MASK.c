
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int,char*,int,int,int ) ;

__attribute__((used)) static void FUNC_3(u32 VAR_5, u32 VAR_6)
{
  if ((VAR_5 & 0x00f9) == 0x0010) {
    if (VAR_3 & VAR_2)
      FUNC_1(VAR_6);
    return;
  }
  if ((VAR_5 & 0x00e0) == 0x0000) {
    FUNC_0(VAR_5, VAR_6);
    return;
  }

  FUNC_2(VAR_1|VAR_0, "68k bad write [%06x] %04x @%06x", VAR_5, VAR_6 & 0xffff, VAR_4);
}
