
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
struct TYPE_8__ {int dotMask; int stampShift; int mapShift; int bufferOffset; int bufferStart; int cycles; int cyclesPerLine; int * mapPtr; int * tracePtr; } ;
struct TYPE_7__ {TYPE_2__* regs; scalar_t__ word_ram_2M; } ;
struct TYPE_5__ {int l; int h; } ;
struct TYPE_6__ {int w; TYPE_1__ byte; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;

void FUNC_0(unsigned int VAR_2, int VAR_3)
{

  if (!(VAR_1.regs[0x02>>1].byte.l & 0x04))
  {
    uint32 VAR_4;


    VAR_0.tracePtr = (uint16 *)(VAR_1.word_ram_2M + ((VAR_2 << 2) & 0x3fff8));


    switch ((VAR_1.regs[0x58>>1].byte.l >> 1) & 0x03)
    {
      case 0:
        VAR_0.dotMask = 0x07ffff;
        VAR_0.stampShift = 11 + 4;
        VAR_0.mapShift = 4;
        VAR_4 = 0x3fe00;
        break;

      case 1:
        VAR_0.dotMask = 0x07ffff;
        VAR_0.stampShift = 11 + 5;
        VAR_0.mapShift = 3;
        VAR_4 = 0x3ff80;
        break;

      case 2:
        VAR_0.dotMask = 0x7fffff;
        VAR_0.stampShift = 11 + 4;
        VAR_0.mapShift = 8;
        VAR_4 = 0x20000;
        break;

      case 3:
        VAR_0.dotMask = 0x7fffff;
        VAR_0.stampShift = 11 + 5;
        VAR_0.mapShift = 7;
        VAR_4 = 0x38000;
        break;
    }


    VAR_0.mapPtr = (uint16 *)(VAR_1.word_ram_2M + ((VAR_1.regs[0x5a>>1].w << 2) & VAR_4));


    VAR_0.bufferOffset = (((VAR_1.regs[0x5c>>1].byte.l & 0x1f) + 1) << 6) - 7;


    VAR_0.bufferStart = (VAR_1.regs[0x5e>>1].w << 3) & 0x7ffc0;


    VAR_0.bufferStart += (VAR_1.regs[0x60>>1].byte.l & 0x3f);


    VAR_0.cycles = VAR_3;


    VAR_0.cyclesPerLine = 4 * 5 * VAR_1.regs[0x62>>1].w;


    VAR_1.regs[0x58>>1].byte.h = 0x80;
  }
}
