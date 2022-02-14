
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int* regs; int dirty_pal; } ;
struct TYPE_3__ {scalar_t__ pal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int,int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static void FUNC_6(u32 VAR_9, u32 VAR_10)
{
  if ((VAR_9 & 0xfc00) == 0x5000)
    FUNC_3(VAR_0, "m68k 32x w8  [%06x]   %02x @%06x", VAR_9, VAR_10 & 0xff, VAR_8);

  if ((VAR_9 & 0xffc0) == 0x5100) {
    FUNC_4(VAR_9, VAR_10);
    return;
  }

  if ((VAR_9 & 0xfc00) != 0x5000) {
    if (VAR_7 & VAR_4)
      FUNC_1(VAR_9, VAR_10);
    else
      FUNC_0(VAR_9, VAR_10);
    if (VAR_9 == 0xa130f1)
      FUNC_2(VAR_5.regs[4 / 2]);
    return;
  }

  if (!(VAR_5.regs[0] & VAR_3)) {
    if ((VAR_9 & 0xfff0) == 0x5180) {
      FUNC_5(VAR_9, VAR_10);
      return;
    }


    if ((VAR_9 & 0xfe00) == 0x5200) {
      FUNC_3(VAR_0|VAR_1, "m68k 32x PAL w8  [%06x]   %02x @%06x", VAR_9, VAR_10 & 0xff, VAR_8);
      ((u8 *)VAR_6->pal)[(VAR_9 & 0x1ff) ^ 1] = VAR_10;
      VAR_5.dirty_pal = 1;
      return;
    }
  }

  FUNC_3(VAR_2, "m68k unmapped w8  [%06x]   %02x @%06x", VAR_9, VAR_10 & 0xff, VAR_8);
}
