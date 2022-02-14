
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int* regs; int comm_dirty_68k; } ;
struct TYPE_5__ {scalar_t__ cnt; } ;
struct TYPE_4__ {scalar_t__ m68krcycles_done; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int) ;
 TYPE_2__ VAR_5 ;
 TYPE_1__ VAR_6 ;
 int FUNC_2 (int,int,int *,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int) ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_7(u32 VAR_8, u32 VAR_9)
{
  u16 *VAR_10 = VAR_3.regs;
  VAR_8 &= 0x3e;


  VAR_5.cnt = 0;

  switch (VAR_8) {
    case 0x00:
      if ((VAR_9 ^ VAR_10[0]) & VAR_9 & VAR_2)
        FUNC_4();
      VAR_10[0] &= ~(VAR_1|VAR_2|VAR_0);
      VAR_10[0] |= VAR_9 & (VAR_1|VAR_2|VAR_0);
      return;
    case 0x08:
      VAR_10[VAR_8 / 2] = VAR_9 & 0xff;
      return;
    case 0x0a:
      VAR_10[VAR_8 / 2] = VAR_9 & ~1;
      return;
    case 0x0c:
      VAR_10[VAR_8 / 2] = VAR_9 & 0xff;
      return;
    case 0x0e:
      VAR_10[VAR_8 / 2] = VAR_9;
      return;
    case 0x10:
      VAR_10[VAR_8 / 2] = VAR_9 & ~3;
      return;
    case 0x12:
      FUNC_1(VAR_10, VAR_9);
      return;
    case 0x1a:
      VAR_10[VAR_8 / 2] = VAR_9 & 0x0101;
      return;
    case 0x30:
      VAR_9 = (VAR_10[VAR_8 / 2] & ~0x0f) | (VAR_9 & 0x0f);
      VAR_10[VAR_8 / 2] = VAR_9;
      FUNC_2(VAR_8, VAR_9, ((void*)0), FUNC_0());
      return;
  }


  if ((VAR_8 & 0x30) == 0x20) {
    int VAR_11 = FUNC_0();
    int VAR_12;

    if (VAR_10[VAR_8 / 2] == VAR_9)
      return;

    VAR_12 = 1 << (VAR_8 & 0x0f) / 2;
    if (VAR_3.comm_dirty_68k & VAR_12)
      FUNC_6(VAR_11);

    VAR_10[VAR_8 / 2] = VAR_9;
    FUNC_5(&VAR_7[0], VAR_4, VAR_11);
    FUNC_5(&VAR_7[1], VAR_4, VAR_11);
    VAR_3.comm_dirty_68k |= VAR_12;

    if (VAR_11 - (int)VAR_6 > 120)
      FUNC_6(VAR_11);
    return;
  }

  else if ((VAR_8 & 0x30) == 0x30) {
    FUNC_2(VAR_8, VAR_9, ((void*)0), FUNC_0());
    return;
  }

  FUNC_3(VAR_8 + 1, VAR_9);
}
