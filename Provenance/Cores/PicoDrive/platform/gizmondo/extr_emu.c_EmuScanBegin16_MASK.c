
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int EmuOpt; } ;


 unsigned short* VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(unsigned int VAR_3)
{
 VAR_0 = (unsigned short *) VAR_2 + 321 * VAR_3;

 if ((VAR_1.EmuOpt&0x4000) && (VAR_3&1) == 0)
  return 1;

 return 0;
}
