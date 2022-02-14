
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_6__ {int w; } ;
struct TYPE_10__ {scalar_t__ ram; TYPE_1__ dac; } ;
struct TYPE_9__ {scalar_t__ prg_ram; TYPE_3__* regs; } ;
struct TYPE_7__ {int h; } ;
struct TYPE_8__ {int w; TYPE_2__ byte; } ;


 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;

void FUNC_0(unsigned int VAR_2)
{
  uint16 VAR_3;


  uint16 VAR_4 = VAR_0.dac.w & 0x3ffe;


  uint32 VAR_5 = (VAR_1.regs[0x0a>>1].w << 3) & 0x7fffe;


  VAR_1.regs[0x0a>>1].w += (VAR_2 >> 2);


  VAR_0.dac.w += (VAR_2 << 1);


  if (VAR_5 < (VAR_1.regs[0x02>>1].byte.h << 9))
  {
    return;
  }


  while (VAR_2--)
  {

    VAR_3 = *(uint16 *)(VAR_0.ram + VAR_4);







    *(uint16 *)(VAR_1.prg_ram + VAR_5) = VAR_3 ;


    VAR_4 = (VAR_4 + 2) & 0x3ffe;


    VAR_5 = (VAR_5 + 2) & 0x7fffe;
  }
}
