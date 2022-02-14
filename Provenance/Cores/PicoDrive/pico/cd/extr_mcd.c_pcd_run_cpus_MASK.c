
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m68k_poll_cnt; scalar_t__ need_sync; int m68k_poll_a; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*,int ,int,int ) ;
 int FUNC_4 (scalar_t__,int) ;

void FUNC_5(int VAR_5)
{
  VAR_2 += VAR_5;
  if (FUNC_2() || VAR_1->m.m68k_poll_cnt < 12)
    VAR_1->m.m68k_poll_cnt = 0;
  else if (VAR_1->m.m68k_poll_cnt >= 16) {
    int VAR_6 = FUNC_4(VAR_2, 1);
    if (VAR_6 <= 0) {
      FUNC_3(VAR_0, "m68k poll [%02x] x%d @%06x",
        VAR_1->m.m68k_poll_a, VAR_1->m.m68k_poll_cnt, VAR_4);
      VAR_3 = VAR_2;
      return;
    }
    VAR_3 = VAR_2 - (VAR_6 * 40220 >> 16);
  }

  while (FUNC_0(VAR_2, VAR_3)) {
    FUNC_1();
    if (VAR_1->m.need_sync) {
      VAR_1->m.need_sync = 0;
      FUNC_4(VAR_3, 0);
    }
  }
}
