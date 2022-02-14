
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dirtyPal; } ;
struct TYPE_4__ {int* reg; } ;
struct TYPE_6__ {TYPE_2__ m; TYPE_1__ video; } ;


 unsigned short* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 unsigned short* VAR_3 ;
 TYPE_3__ VAR_4 ;
 unsigned char* VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_6, int VAR_7)
{
  int VAR_8 = &FUNC_1 != ((void*)0) && &FUNC_2 != ((void*)0);
  unsigned short *VAR_9 = (void *)((char *)VAR_1 + VAR_6 * VAR_2);
  unsigned char *VAR_10 = VAR_5 + 328 * VAR_6 + 8;
  unsigned short *VAR_11 = VAR_3;
  int VAR_12 = 0, VAR_13 = 320;
  int VAR_14, VAR_15;

  if (!(VAR_4.video.reg[12] & 1)) {

    VAR_12 = 32;
    VAR_13 = 256;
  }

  if (VAR_4.m.dirtyPal)
    FUNC_0();

  VAR_9 += VAR_12;
  for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
    if (VAR_8) {
      FUNC_1(VAR_14 + VAR_6);
      VAR_9 = VAR_0 + VAR_12;
    }
    for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15 += 4) {
      VAR_9[VAR_15 + 0] = VAR_11[*VAR_10++];
      VAR_9[VAR_15 + 1] = VAR_11[*VAR_10++];
      VAR_9[VAR_15 + 2] = VAR_11[*VAR_10++];
      VAR_9[VAR_15 + 3] = VAR_11[*VAR_10++];
    }
    VAR_9 = (void *)((char *)VAR_9 + VAR_2);
    VAR_10 += 328 - VAR_13;
    if (VAR_8)
      FUNC_2(VAR_14 + VAR_6);
  }
}
