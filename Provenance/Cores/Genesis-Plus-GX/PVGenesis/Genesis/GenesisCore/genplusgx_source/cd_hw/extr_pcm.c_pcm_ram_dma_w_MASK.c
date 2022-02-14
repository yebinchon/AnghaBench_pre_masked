
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_7__ {int w; } ;
struct TYPE_10__ {scalar_t__ ram; TYPE_2__ dac; } ;
struct TYPE_9__ {scalar_t__ bank; } ;
struct TYPE_8__ {TYPE_1__* regs; } ;
struct TYPE_6__ {int w; } ;


 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 TYPE_3__ VAR_2 ;

void FUNC_0(unsigned int VAR_3)
{
  uint16 VAR_4;


  uint16 VAR_5 = VAR_0.dac.w & 0x3ffe;


  uint16 VAR_6 = (VAR_2.regs[0x0a>>1].w << 2) & 0xffe;


  VAR_2.regs[0x0a>>1].w += (VAR_3 >> 1);


  VAR_0.dac.w += (VAR_3 << 1);


  while (VAR_3--)
  {

    VAR_4 = *(uint16 *)(VAR_0.ram + VAR_5);


    *(uint16 *)(VAR_1.bank + VAR_6) = VAR_4 ;


    VAR_5 = (VAR_5 + 2) & 0x3ffe;


    VAR_6 = (VAR_6 + 2) & 0xffe;
  }
}
