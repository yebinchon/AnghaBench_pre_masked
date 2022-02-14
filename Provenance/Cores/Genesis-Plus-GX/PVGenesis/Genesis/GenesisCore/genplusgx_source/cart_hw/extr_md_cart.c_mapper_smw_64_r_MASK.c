
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8 ;
typedef int uint32 ;
struct TYPE_2__ {int* sram; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static uint32 FUNC_0(uint32 VAR_1)
{

  switch ((VAR_1 >> 16) & 0x03)
  {
    case 0x02:
    {
      switch ((VAR_1 >> 1) & 7)
      {
        case 0x00: return VAR_0.sram[0x06];
        case 0x01: return VAR_0.sram[0x06] + 1;
        case 0x02: return VAR_0.sram[0x07];
        case 0x03: return VAR_0.sram[0x07] + 1;
        case 0x04: return VAR_0.sram[0x08];
        case 0x05: return VAR_0.sram[0x08] + 1;
        case 0x06: return VAR_0.sram[0x08] + 2;
        case 0x07: return VAR_0.sram[0x08] + 3;
      }
    }

    case 0x03:
    {
      uint8 VAR_2 = (VAR_0.sram[0x02] & 0x80) ? ((VAR_0.sram[0x05] & 0x40) ? (VAR_0.sram[0x03] & VAR_0.sram[0x04]) : (VAR_0.sram[0x03] ^ 0xFF)) : 0x00;

      if (VAR_1 & 2)
      {

        VAR_2 &= 0x7f;
      }
      else
      {

        if (VAR_0.sram[0x05] & 0x80)
        {
          if (VAR_0.sram[0x05] & 0x20)
          {

            VAR_0.sram[0x08] = (VAR_0.sram[0x04] << 2) & 0xFC;
          }
          else
          {

            VAR_0.sram[0x06] = (VAR_0.sram[0x01] ^ (VAR_0.sram[0x03] << 1)) & 0xFE;
          }
        }
      }

      return VAR_2;
    }

    default:
    {
      return 0x00;
    }
  }
}
