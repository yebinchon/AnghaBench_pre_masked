
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* reg; } ;
struct TYPE_4__ {int dirtyPal; } ;
struct TYPE_6__ {TYPE_2__ video; scalar_t__ cram; TYPE_1__ m; } ;


 unsigned char* VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (unsigned char*,scalar_t__,int) ;
 int FUNC_1 (unsigned char*,scalar_t__,int,int) ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(int VAR_8, int VAR_9)
{
  unsigned char *VAR_10 = VAR_0;
  int VAR_11, VAR_12 = VAR_7;
  static int VAR_13;

  if (!VAR_8 && VAR_5.m.dirtyPal == 1)
  {

    if (!(VAR_12 & VAR_3))
         VAR_13 = 1;
    else VAR_13++;
    VAR_12 |= VAR_3;
    VAR_7 = VAR_12;
    if (VAR_13 == 3) {
      FUNC_0(VAR_2, VAR_5.cram, 0x40*2);
    } else if (VAR_13 == 11) {
      FUNC_0(VAR_2+0x40, VAR_5.cram, 0x40*2);
    }
  }

  if (VAR_5.video.reg[12]&1) {
    VAR_11 = 320;
  } else {
    if (!(VAR_6 & VAR_4))
      VAR_10 += 32;
    VAR_11 = 256;
  }

  if (!VAR_8 && (VAR_12 & VAR_3)) {
    if (VAR_13 >= 11) {
      FUNC_1(VAR_10, VAR_1+8, VAR_11, 0x80);
    } else {
      FUNC_1(VAR_10, VAR_1+8, VAR_11, 0x40);
    }
  } else {
    FUNC_0(VAR_10, VAR_1+8, VAR_11);
  }
}
