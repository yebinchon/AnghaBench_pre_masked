
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct PicoVideo {int* reg; int v_counter; int pending_ints; } ;
struct TYPE_5__ {int pal; int scanline; } ;
struct TYPE_4__ {int nmi_state; } ;
struct TYPE_6__ {TYPE_2__ m; TYPE_1__ ms; struct PicoVideo video; } ;


 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int* VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

void FUNC_7(void)
{
  struct PicoVideo *VAR_5 = &VAR_1.video;
  int VAR_6 = VAR_1.m.pal;
  int VAR_7 = VAR_6 ? 313 : 262;
  int VAR_8 = VAR_6 ? 58020 : 58293;
  int VAR_9 = 0, VAR_10 = 0;
  int VAR_11 = VAR_3;
  int VAR_12 = 192;
  int VAR_13;
  int VAR_14;
  int VAR_15;

  VAR_14 = (VAR_2[0] >> 7) & 1;
  if (!VAR_1.ms.nmi_state && VAR_14)
    FUNC_5();
  VAR_1.ms.nmi_state = VAR_14;

  FUNC_0();
  VAR_13 = VAR_5->reg[0x0a];

  for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++)
  {
    VAR_5->v_counter = VAR_1.m.scanline = VAR_15;
    if (VAR_15 > 218)
      VAR_5->v_counter = VAR_15 - 6;

    if (VAR_15 < VAR_12 && !VAR_11)
      FUNC_1(VAR_15);

    if (VAR_15 <= VAR_12)
    {
      if (--VAR_13 < 0)
      {
        VAR_13 = VAR_5->reg[0x0a];
        VAR_5->pending_ints |= 2;
        if (VAR_5->reg[0] & 0x10) {
          FUNC_3(VAR_0, "hint");
          FUNC_4();
        }
      }
    }
    else if (VAR_15 == VAR_12 + 1) {
      VAR_5->pending_ints |= 1;
      if (VAR_5->reg[1] & 0x20) {
        FUNC_3(VAR_0, "vint");
        FUNC_4();
      }
    }

    VAR_10 += VAR_8;
    VAR_9 += FUNC_6((VAR_10 - VAR_9) >> 8) << 8;
  }

  if (VAR_4)
    FUNC_2();
}
