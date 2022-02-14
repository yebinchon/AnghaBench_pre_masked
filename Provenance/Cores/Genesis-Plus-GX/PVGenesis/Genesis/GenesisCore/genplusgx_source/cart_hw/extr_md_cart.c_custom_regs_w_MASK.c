
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_3__ {int* regs; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(uint32 VAR_1, uint32 VAR_2)
{
  uint8 VAR_3;


  if ((VAR_1 >> 16) > 0x6f)
  {
    FUNC_1(VAR_2);
    return;
  }


  FUNC_0(VAR_1, VAR_2);


  VAR_3 = VAR_0.hw.regs[0];
  switch (VAR_0.hw.regs[1] & 3)
  {
    case 0:
      VAR_0.hw.regs[2] = (VAR_3 << 1);
      break;

    case 1:
      VAR_0.hw.regs[2] = (VAR_3 >> 1);
      return;

    case 2:
      VAR_0.hw.regs[2] = ((VAR_3 >> 4) | ((VAR_3 & 0x0F) << 4));
      return;

    default:
      VAR_0.hw.regs[2] = (((VAR_3 >> 7) & 0x01) | ((VAR_3 >> 5) & 0x02) |
                         ((VAR_3 >> 3) & 0x04) | ((VAR_3 >> 1) & 0x08) |
                         ((VAR_3 << 1) & 0x10) | ((VAR_3 << 3) & 0x20) |
                         ((VAR_3 << 5) & 0x40) | ((VAR_3 << 7) & 0x80));
      return;
  }
}
