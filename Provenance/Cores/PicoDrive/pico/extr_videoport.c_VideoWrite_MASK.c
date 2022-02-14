
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int dirtyPal; } ;
struct TYPE_5__ {unsigned int addr; int type; int* reg; } ;
struct TYPE_6__ {int* vram; int* cram; int* vsram; TYPE_1__ m; TYPE_2__ video; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(u16 VAR_3)
{
  unsigned int VAR_4=VAR_1.video.addr;

  switch (VAR_1.video.type)
  {
    case 1: if(VAR_4&1) VAR_3=(u16)((VAR_3<<8)|(VAR_3>>8));
            VAR_1.vram [(VAR_4>>1)&0x7fff]=VAR_3;
            if (VAR_4 - ((unsigned)(VAR_1.video.reg[5]&0x7f) << 9) < 0x400)
              VAR_2 |= VAR_0;
            break;
    case 3: VAR_1.m.dirtyPal = 1;
            VAR_1.cram [(VAR_4>>1)&0x003f]=VAR_3; break;
    case 5: VAR_1.vsram[(VAR_4>>1)&0x003f]=VAR_3; break;

  }

  FUNC_0();
}
