
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int* regs; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static uint32 FUNC_1(uint32 VAR_1)
{

  if ((VAR_1 & 0x0e) == 0x02)
  {

    return (VAR_0.hw.regs[0] - 1);
  }

  return FUNC_0(VAR_1);
}
