
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* regs; int emu_flags; } ;
struct TYPE_5__ {unsigned int m68krcycles_done; int state; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*,unsigned int,...) ;
 unsigned int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (unsigned int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 TYPE_1__ VAR_6 ;

void FUNC_6(unsigned int VAR_7)
{
  unsigned int VAR_8, VAR_9, VAR_10;
  int VAR_11;

  FUNC_2(VAR_0, "sh2 sync to %u", VAR_7);

  if (!(VAR_2.regs[0] & VAR_1)) {
    VAR_5 = VAR_6 = VAR_7;
    return;
  }

  VAR_8 = VAR_5;
  if (FUNC_1(VAR_8, VAR_6))
    VAR_8 = VAR_6;
  VAR_10 = VAR_8;

  while (FUNC_1(VAR_7, VAR_8))
  {
    if (VAR_4 && FUNC_0(VAR_8, VAR_4))
      FUNC_3(VAR_8);

    VAR_9 = VAR_7;
    if (VAR_4 && FUNC_1(VAR_9, VAR_4))
      VAR_9 = VAR_4;

    while (FUNC_1(VAR_9, VAR_8))
    {
      FUNC_2(VAR_0, "sh2 exec to %u %d,%d/%d, flags %x", VAR_9,
        VAR_9 - VAR_5, VAR_9 - VAR_6,
        VAR_7 - VAR_8, VAR_2.emu_flags);

      if (!(VAR_6 & VAR_3)) {
        VAR_11 = VAR_9 - VAR_6;
        if (VAR_11 > 0) {
          FUNC_5(&VAR_6, VAR_11);

          if (VAR_4 && FUNC_1(VAR_9, VAR_4))
            VAR_9 = VAR_4;
        }
      }

      if (!(VAR_5 & VAR_3)) {
        VAR_11 = VAR_9 - VAR_5;
        if (VAR_11 > 0) {
          FUNC_5(&VAR_5, VAR_11);

          if (VAR_4 && FUNC_1(VAR_9, VAR_4))
            VAR_9 = VAR_4;
        }
      }

      VAR_8 = VAR_9;
      if (!(VAR_5 & VAR_3)) {
        if (FUNC_1(VAR_8, VAR_5))
          VAR_8 = VAR_5;
      }
      if (!(VAR_6 & VAR_3)) {
        if (FUNC_1(VAR_8, VAR_6))
          VAR_8 = VAR_6;
      }
    }

    FUNC_4(VAR_8 - VAR_10);
    VAR_10 = VAR_8;
  }


  if (VAR_5 & VAR_3) {
    if (FUNC_1(VAR_7, VAR_5))
      VAR_5 = VAR_7;
  }
  if (VAR_6 & VAR_3) {
    if (FUNC_1(VAR_7, VAR_6))
      VAR_6 = VAR_7;
  }
}
