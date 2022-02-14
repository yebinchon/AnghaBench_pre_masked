
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {int* mask; int* addr; int* regs; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(uint32 VAR_1, uint32 VAR_2)
{
  int VAR_3;
  for (VAR_3=0; VAR_3<4; VAR_3++)
  {
    if ((VAR_1 & VAR_0.hw.mask[VAR_3]) == VAR_0.hw.addr[VAR_3])
    {
      VAR_0.hw.regs[VAR_3] = VAR_2;
      return;
    }
  }
  FUNC_0(VAR_1, VAR_2);
}
