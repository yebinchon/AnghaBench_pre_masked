
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int r1; int* pen_pos; int page; int fifo_bytes; } ;


 int VAR_0 ;
 int* VAR_1 ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int,int ) ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_4)
{
  u32 VAR_5 = 0;

  if ((VAR_4 & 0xffffe0) == 0x800000)
  {
    switch (VAR_4 & 0x1f)
    {
      case 0x01: VAR_5 = VAR_2.r1; break;
      case 0x03:
        VAR_5 = VAR_1[0]&0x1f;
        VAR_5 |= (VAR_1[0]&0x20) << 2;
        VAR_5 = ~VAR_5;
        break;

      case 0x05: VAR_5 = (VAR_2.pen_pos[0] >> 8); break;
      case 0x07: VAR_5 = VAR_2.pen_pos[0] & 0xff; break;
      case 0x09: VAR_5 = (VAR_2.pen_pos[1] >> 8); break;
      case 0x0b: VAR_5 = VAR_2.pen_pos[1] & 0xff; break;
      case 0x0d: VAR_5 = (1 << (VAR_2.page & 7)) - 1; break;
      case 0x12: VAR_5 = VAR_2.fifo_bytes == 0 ? 0x80 : 0; break;
      default:
        goto unhandled;
    }
    return VAR_5;
  }

unhandled:
  FUNC_0(VAR_0, "m68k unmapped r8  [%06x] @%06x", VAR_4, VAR_3);
  return VAR_5;
}
