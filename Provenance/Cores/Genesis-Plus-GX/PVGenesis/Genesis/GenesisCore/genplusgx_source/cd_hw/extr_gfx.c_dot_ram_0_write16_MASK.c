
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8 ;
struct TYPE_6__ {unsigned int*** lut_prio; } ;
struct TYPE_5__ {int * word_ram; TYPE_1__* regs; } ;
struct TYPE_4__ {int w; } ;


 size_t FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

void FUNC_2(unsigned int VAR_2, unsigned int VAR_3)
{
  uint8 VAR_4;
  VAR_2 = (VAR_2 >> 1) & 0x1ffff;
  VAR_4 = FUNC_0(VAR_1.word_ram[0], VAR_2);
  VAR_3 = (VAR_3 & 0x0f) | ((VAR_3 >> 4) & 0xf0);
  VAR_3 = VAR_0.lut_prio[(VAR_1.regs[0x02>>1].w >> 3) & 0x03][VAR_4][VAR_3];
  FUNC_1(VAR_1.word_ram[0], VAR_2, VAR_3);
}
