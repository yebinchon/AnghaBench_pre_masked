
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mult_m68k_to_sh2; int mult_sh2_to_m68k; } ;
struct TYPE_3__ {int mult_m68k_to_sh2; int mult_sh2_to_m68k; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

void FUNC_0(int VAR_4, int VAR_5)
{
  float VAR_6 = (float)(VAR_1 / 7);
  if (VAR_4 > 0) {
    VAR_2 = (int)((float)VAR_4 * (1 << VAR_0) / VAR_6);
    VAR_2 = (int)(VAR_6 * (1 << VAR_0) / (float)VAR_4);
  }
  if (VAR_5 > 0) {
    VAR_3 = (int)((float)VAR_5 * (1 << VAR_0) / VAR_6);
    VAR_3 = (int)(VAR_6 * (1 << VAR_0) / (float)VAR_5);
  }
}
