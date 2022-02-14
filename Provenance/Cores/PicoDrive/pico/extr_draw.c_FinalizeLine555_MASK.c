
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* reg; } ;
struct TYPE_4__ {scalar_t__ dirtyPal; } ;
struct TYPE_6__ {TYPE_2__ video; TYPE_1__ m; } ;


 unsigned short* VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned short* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_1(int VAR_8, int VAR_9)
{
  unsigned short *VAR_10=VAR_0;
  unsigned char *VAR_11=VAR_1+8;
  unsigned short *VAR_12=VAR_2;
  int VAR_13;

  if (VAR_5.m.dirtyPal)
    FUNC_0(VAR_8);

  if (VAR_5.video.reg[12]&1) {
    VAR_13 = 320;
  } else {
    if (!(VAR_6&VAR_4)) VAR_10+=32;
    VAR_13 = 256;
  }

  {

    int VAR_14, VAR_15=0xff;
    if (!VAR_8 && (VAR_7 & VAR_3))
      VAR_15=0x3f;

    for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++)
      VAR_10[VAR_14] = VAR_12[VAR_11[VAR_14] & VAR_15];







  }
}
