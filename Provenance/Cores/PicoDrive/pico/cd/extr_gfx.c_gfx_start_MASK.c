
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
typedef int uint16 ;
struct TYPE_4__ {int* s68k_regs; scalar_t__ word_ram2M; } ;
struct TYPE_3__ {int dotMask; int stampShift; int mapShift; int bufferOffset; int bufferStart; int * mapPtr; int * tracePtr; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;

void FUNC_1(unsigned int VAR_2)
{

  if (!(VAR_0->s68k_regs[3] & 0x04))
  {
    uint32 VAR_3 = 0;
    uint32 VAR_4;


    VAR_1.tracePtr = (uint16 *)(VAR_0->word_ram2M + ((VAR_2 << 2) & 0x3fff8));


    switch ((VAR_0->s68k_regs[0x58+1] >> 1) & 0x03)
    {
      case 0:
        VAR_1.dotMask = 0x07ffff;
        VAR_1.stampShift = 11 + 4;
        VAR_1.mapShift = 4;
        VAR_3 = 0x3fe00;
        break;

      case 1:
        VAR_1.dotMask = 0x07ffff;
        VAR_1.stampShift = 11 + 5;
        VAR_1.mapShift = 3;
        VAR_3 = 0x3ff80;
        break;

      case 2:
        VAR_1.dotMask = 0x7fffff;
        VAR_1.stampShift = 11 + 4;
        VAR_1.mapShift = 8;
        VAR_3 = 0x20000;
        break;

      case 3:
        VAR_1.dotMask = 0x7fffff;
        VAR_1.stampShift = 11 + 5;
        VAR_1.mapShift = 7;
        VAR_3 = 0x38000;
        break;
    }


    VAR_4 = (VAR_0->s68k_regs[0x5a] << 8) | VAR_0->s68k_regs[0x5b];
    VAR_1.mapPtr = (uint16 *)(VAR_0->word_ram2M + ((VAR_4 << 2) & VAR_3));


    VAR_1.bufferOffset = (((VAR_0->s68k_regs[0x5c+1] & 0x1f) + 1) << 6) - 7;


    VAR_4 = (VAR_0->s68k_regs[0x5e] << 8) | VAR_0->s68k_regs[0x5f];
    VAR_1.bufferStart = (VAR_4 << 3) & 0x7ffc0;


    VAR_1.bufferStart += (VAR_0->s68k_regs[0x60+1] & 0x3f);
    VAR_0->s68k_regs[0x58] = 0x80;

    FUNC_0();
  }
}
