
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pal; int z80_reset; scalar_t__ z80Run; } ;
struct TYPE_6__ {TYPE_1__ m; } ;
struct TYPE_5__ {scalar_t__ dacen; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_3 () ;
 TYPE_2__ VAR_8 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

void FUNC_6(void)
{
  int VAR_9, VAR_10;

  if (VAR_3 & VAR_0)
    return;

  if (VAR_2.m.pal) {
    VAR_9 = 312;
    VAR_10 = 68;
  } else {
    VAR_9 = 262;
    VAR_10 = 93;
  }

  FUNC_5();
  VAR_7 &= ~1;

  if (VAR_2.m.z80Run && !VAR_2.m.z80_reset && (VAR_4&VAR_1))
    FUNC_0(VAR_10*488);
  if (VAR_8 && VAR_5 <= VAR_10)
    FUNC_1(VAR_10);
  if (VAR_6)
    FUNC_2(VAR_10);

  if (VAR_2.m.z80Run && !VAR_2.m.z80_reset && (VAR_4&VAR_1)) {
    FUNC_0(224*488);
    FUNC_4();
  }
  if (VAR_8 && VAR_5 <= 224)
    FUNC_1(224);
  if (VAR_6)
    FUNC_2(224);


  if (VAR_2.m.z80Run && !VAR_2.m.z80_reset && (VAR_4&VAR_1))
    FUNC_0(VAR_2.m.pal ? 151809 : 127671);
  if (VAR_6 && VAR_8 && VAR_5 <= VAR_9-1)
    FUNC_1(VAR_9-1);

  FUNC_3();
}
