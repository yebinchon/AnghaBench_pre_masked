
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int* regs; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_1)
{
  VAR_1 = (VAR_0.regs[4 / 2] << 20) | (VAR_1 & 0xfffff);
  return FUNC_0(VAR_1);
}
