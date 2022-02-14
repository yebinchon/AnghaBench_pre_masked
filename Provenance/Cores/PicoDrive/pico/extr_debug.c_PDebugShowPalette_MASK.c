
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dirtyPal; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 unsigned short* VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;

void FUNC_2(unsigned short *VAR_4, int VAR_5)
{
  int VAR_6, VAR_7;

  VAR_2.m.dirtyPal = 1;
  if (VAR_3 & VAR_1)
    FUNC_1();
  else
    FUNC_0(1);
  VAR_2.m.dirtyPal = 1;

  VAR_4 += 16*VAR_5+8;
  for (VAR_7 = 0; VAR_7 < 8*4; VAR_7++)
    for (VAR_6 = 0; VAR_6 < 8*16; VAR_6++)
      VAR_4[VAR_6 + VAR_7*VAR_5] = VAR_0[VAR_6/8 + (VAR_7/8)*16];

  VAR_4 += 160;
  for (VAR_7 = 0; VAR_7 < 8*4; VAR_7++)
    for (VAR_6 = 0; VAR_6 < 8*16; VAR_6++)
      VAR_4[VAR_6 + VAR_7*VAR_5] = VAR_0[(VAR_6/8 + (VAR_7/8)*16) | 0x40];

  VAR_4 += VAR_5*48;
  for (VAR_7 = 0; VAR_7 < 8*4; VAR_7++)
    for (VAR_6 = 0; VAR_6 < 8*16; VAR_6++)
      VAR_4[VAR_6 + VAR_7*VAR_5] = VAR_0[(VAR_6/8 + (VAR_7/8)*16) | 0x80];
}
