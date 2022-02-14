
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* regs; int dirty_pal; } ;
struct TYPE_3__ {int* pal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int,int *) ;

__attribute__((used)) static void FUNC_6(u32 VAR_8, u32 VAR_9)
{
  if ((VAR_8 & 0xfc00) == 0x5000)
    FUNC_3(VAR_0, "m68k 32x w16 [%06x] %04x @%06x", VAR_8, VAR_9 & 0xffff, VAR_7);

  if ((VAR_8 & 0xffc0) == 0x5100) {
    FUNC_4(VAR_8, VAR_9);
    return;
  }

  if ((VAR_8 & 0xfc00) != 0x5000) {
    if (VAR_6 & VAR_3)
      FUNC_1(VAR_8, VAR_9);
    else
      FUNC_0(VAR_8, VAR_9);
    if (VAR_8 == 0xa130f0)
      FUNC_2(VAR_4.regs[4 / 2]);
    return;
  }

  if (!(VAR_4.regs[0] & VAR_2)) {
    if ((VAR_8 & 0xfff0) == 0x5180) {
      FUNC_5(VAR_8, VAR_9, ((void*)0));
      return;
    }

    if ((VAR_8 & 0xfe00) == 0x5200) {
      VAR_5->pal[(VAR_8 & 0x1ff) / 2] = VAR_9;
      VAR_4.dirty_pal = 1;
      return;
    }
  }

  FUNC_3(VAR_1, "m68k unmapped w16 [%06x] %04x @%06x", VAR_8, VAR_9 & 0xffff, VAR_7);
}
