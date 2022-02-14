
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int busreq; scalar_t__ m68k_poll_cnt; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 scalar_t__ FUNC_0 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int,unsigned int) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,char*,unsigned int,unsigned int,unsigned int) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned long long VAR_6 ;
 unsigned long long VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_4 (unsigned int) ;

int FUNC_5(unsigned int VAR_9, int VAR_10)
{

  unsigned int VAR_11;
  unsigned int VAR_12;

  VAR_12 = VAR_9 - VAR_5;
  VAR_11 = VAR_7 +
    ((unsigned long long)VAR_12 * VAR_6 >> 16);

  FUNC_3(VAR_0, "s68k sync to %u, %u->%u",
    VAR_9, VAR_3, VAR_11);

  if (VAR_1->m.busreq != 1) {
    VAR_3 = VAR_2 = VAR_11;
    FUNC_4(VAR_9);
    return 0;
  }

  while (FUNC_1(VAR_11, VAR_3)) {
    if (VAR_4 && FUNC_0(VAR_3, VAR_4))
      FUNC_4(VAR_3);

    VAR_12 = VAR_11;
    if (VAR_4 && FUNC_1(VAR_12, VAR_4))
      VAR_12 = VAR_4;

    FUNC_2(VAR_12);
    if (VAR_10 && VAR_1->m.m68k_poll_cnt == 0)
      break;
  }

  return VAR_11 - VAR_3;

}
