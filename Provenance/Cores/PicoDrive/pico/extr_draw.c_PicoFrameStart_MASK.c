
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int dirtyPal; } ;
struct TYPE_4__ {int* reg; } ;
struct TYPE_6__ {TYPE_2__ m; TYPE_1__ video; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;

void FUNC_2(void)
{
  int VAR_16 = 8, VAR_17 = 224;


  VAR_13 = 0;
  if ((VAR_10.video.reg[12] & 6) == 6)
    VAR_13 |= VAR_8;
  if (!(VAR_10.video.reg[12] & 1))
    VAR_13 |= VAR_7;
  if (VAR_10.video.reg[1] & 8) {
    VAR_16 = 0;
    VAR_17 = 240;
  }

  if (VAR_13 != VAR_14 || VAR_17 != VAR_12) {
    VAR_12 = VAR_17;

    FUNC_1((VAR_17 == 240) ? 0 : 8,
      VAR_17, (VAR_10.video.reg[12] & 1) ? 0 : 1);
    VAR_14 = VAR_13;
  }

  VAR_4 = VAR_5 + VAR_16 * VAR_6;
  VAR_0 = (char *)VAR_1 + VAR_16 * VAR_2;
  VAR_3 = 0;
  VAR_15 = 0;

  if (VAR_11 & VAR_9)
    return;

  if (VAR_10.m.dirtyPal)
    VAR_10.m.dirtyPal = 2;
  FUNC_0(1);
}
