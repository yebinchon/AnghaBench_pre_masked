
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ dirtyPal; } ;
struct TYPE_4__ {scalar_t__ cram; TYPE_1__ m; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_0(int VAR_2)
{
  unsigned int *VAR_3, *VAR_4;
  unsigned int VAR_5, VAR_6;

  VAR_1.m.dirtyPal = 0;

  VAR_3 = (void *)VAR_1.cram;
  VAR_4 = (void *)VAR_0;

  for (VAR_6 = 0; VAR_6 < 0x40 / 2; VAR_6++) {
    VAR_5 = VAR_3[VAR_6];



    VAR_5 = ((VAR_5 & 0x000e000e)<<12) | ((VAR_5 & 0x00e000e0)<<3) | ((VAR_5 & 0x0e000e00)>>7);



    VAR_5 |= (VAR_5 >> 4) & 0x08610861;
    VAR_4[VAR_6] = VAR_5;
  }


  if (VAR_2)
  {

    for (VAR_6 = 0; VAR_6 < 0x40 / 2; VAR_6++)
      VAR_4[0x40/2 | VAR_6] = VAR_4[0xc0/2 | VAR_6] = (VAR_4[VAR_6] >> 1) & 0x738e738e;

    for (VAR_6 = 0; VAR_6 < 0x40 / 2; VAR_6++) {
      VAR_5 = ((VAR_4[VAR_6] >> 1) & 0x738e738e) + 0x738e738e;
      VAR_5 |= (VAR_5 >> 4) & 0x08610861;
      VAR_4[0x80/2 | VAR_6] = VAR_5;
    }
  }
}
