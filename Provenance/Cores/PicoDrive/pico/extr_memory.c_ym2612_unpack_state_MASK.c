
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int TA; int TB; int mode; } ;
struct TYPE_5__ {TYPE_1__ ST; } ;
struct TYPE_6__ {int* REGS; TYPE_2__ OPN; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int ,char*,...) ;
 int VAR_5 ;
 double VAR_6 ;
 int VAR_7 ;
 double VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_4 (int,int,int ) ;

void FUNC_5(void)
{
  int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
  FUNC_0();


  for (VAR_10 = 0x20; VAR_10 < 0xA0; VAR_10++) {
    FUNC_4(0, VAR_10, 0);
    FUNC_4(1, VAR_9[VAR_10], 0);
  }
  for (VAR_10 = 0x30; VAR_10 < 0xA0; VAR_10++) {
    FUNC_4(2, VAR_10, 0);
    FUNC_4(3, VAR_9[VAR_10|0x100], 0);
  }
  for (VAR_10 = 0xAF; VAR_10 >= 0xA0; VAR_10--) {
    FUNC_4(2, VAR_10, 0);
    FUNC_4(3, VAR_9[VAR_10|0x100], 0);
    FUNC_4(0, VAR_10, 0);
    FUNC_4(1, VAR_9[VAR_10], 0);
  }
  for (VAR_10 = 0xB0; VAR_10 < 0xB8; VAR_10++) {
    FUNC_4(0, VAR_10, 0);
    FUNC_4(1, VAR_9[VAR_10], 0);
    FUNC_4(2, VAR_10, 0);
    FUNC_4(3, VAR_9[VAR_10|0x100], 0);
  }






    VAR_11 = FUNC_1(&VAR_13, &VAR_15);
  if (VAR_11 != 0) {
    FUNC_3(VAR_0, "old ym2612 state");
    return;
  }

  VAR_12 = (1024 - VAR_9) << 16;
  VAR_14 = (256 - VAR_9) << 16;
  if (VAR_9 & 1)
    VAR_5 = (int)((double)(VAR_12 - VAR_13) / (double)VAR_12 * VAR_6);
  else
    VAR_5 = VAR_4;
  if (VAR_9 & 2)
    VAR_7 = (int)((double)(VAR_14 - VAR_15) / (double)VAR_14 * VAR_8);
  else
    VAR_7 = VAR_4;
  FUNC_3(VAR_1, "load: %i/%i, timer_a_next_oflow %i", VAR_13>>16, VAR_12>>16, VAR_5 >> 8);
  FUNC_3(VAR_1, "load: %i/%i, timer_b_next_oflow %i", VAR_15>>16, VAR_14>>16, VAR_7 >> 8);
}
