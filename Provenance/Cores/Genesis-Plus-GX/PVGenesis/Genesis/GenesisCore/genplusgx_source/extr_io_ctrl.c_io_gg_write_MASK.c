
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cycles; } ;
struct TYPE_3__ {int psgBoostNoise; int psg_preamp; } ;


 int FUNC_0 (int ,int ,int ,unsigned int) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 unsigned int* VAR_2 ;

void FUNC_1(unsigned int VAR_3, unsigned int VAR_4)
{
  switch (VAR_3)
  {
    case 1:
      VAR_2[1] = VAR_4;
      return;

    case 2:
      VAR_2[2] = VAR_4;
      return;

    case 3:
      VAR_2[3] = VAR_4;
      return;

    case 5:
      VAR_2[5] = VAR_4 & 0xF8;
      return;

    case 6:
      VAR_2[6] = VAR_4;
      FUNC_0(VAR_0, VAR_1.psg_preamp, VAR_1.psgBoostNoise, VAR_4);
      return;

    default:
      return;
  }
}
