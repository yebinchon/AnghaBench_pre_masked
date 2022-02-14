
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int sram_reg; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

void FUNC_6(u32 VAR_6, u32 VAR_7)
{
  if ((VAR_6 & 0xffe0) == 0x0000) {
    FUNC_4(VAR_6, VAR_7);
    return;
  }
  if ((VAR_6 & 0xff00) == 0x1100) {
    FUNC_1(VAR_7 >> 8);
    return;
  }
  if ((VAR_6 & 0xff00) == 0x1200) {
    FUNC_2(VAR_7 >> 8);
    return;
  }
  if (VAR_6 == 0xa130f0) {
    FUNC_3(VAR_0, "sram reg=%02x", VAR_7);
    VAR_2.m.sram_reg &= ~(VAR_4|VAR_5);
    VAR_2.m.sram_reg |= (u8)(VAR_7 & 3);
    return;
  }
  if (VAR_3 & VAR_1) {
    FUNC_0(VAR_6, VAR_7);
    return;
  }
  FUNC_5(VAR_6, VAR_7);
}
