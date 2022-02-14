
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_6__ {int w; } ;
struct TYPE_8__ {scalar_t__ ram; TYPE_2__ dac; } ;
struct TYPE_7__ {scalar_t__* word_ram; TYPE_1__* regs; } ;
struct TYPE_5__ {int w; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_0(unsigned int VAR_2)
{
  uint16 VAR_3;


  uint16 VAR_4 = VAR_0.dac.w & 0x3ffe;


  uint32 VAR_5 = (VAR_1.regs[0x0a>>1].w << 3) & 0x1fffe;


  VAR_1.regs[0x0a>>1].w += (VAR_2 >> 2);


  VAR_0.dac.w += (VAR_2 << 1);


  while (VAR_2--)
  {

    VAR_3 = *(uint16 *)(VAR_0.ram + VAR_4);







    *(uint16 *)(VAR_1.word_ram[0] + VAR_5) = VAR_3 ;


    VAR_4 = (VAR_4 + 2) & 0x3ffe;


    VAR_5 = (VAR_5 + 2) & 0x1fffe;
  }
}
