
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_8__ {int rom; } ;
struct TYPE_7__ {TYPE_1__* memory_map; } ;
struct TYPE_6__ {int* sram; } ;
struct TYPE_5__ {int base; } ;


 TYPE_4__ VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_0 (int,int) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void FUNC_1(uint32 VAR_3, uint32 VAR_4)
{

  switch ((VAR_3 >> 16) & 0x07)
  {
    case 0x00:
    {
      if (VAR_3 & 2)
      {

        switch (VAR_2.sram[0x00] & 0x07)
        {
          case 0x00:
          {

            VAR_2.sram[0x06] = ((VAR_2.sram[0x06] ^ VAR_2.sram[0x01]) ^ VAR_4) & 0xFE;
            break;
          }

          case 0x01:
          {

            VAR_2.sram[0x07] = VAR_4 & 0xFE;
            break;
          }

          case 0x07:
          {

            VAR_1.memory_map[0x61].base = VAR_1.memory_map[0x69].base = VAR_0.rom + 0x080000 + ((VAR_4 & 0x1c) << 14);
            break;
          }

          default:
          {

            break;
          }
        }


        VAR_2.sram[0x01] = VAR_4;
      }
      else
      {

        VAR_2.sram[0x00] = VAR_4;
      }
      return;
    }

    case 0x01:
    {
      if (VAR_3 & 2)
      {

        VAR_2.sram[0x02] = VAR_4;
      }
      return;
    }

    case 0x04:
    {
      if (VAR_3 & 2)
      {

        VAR_2.sram[0x04] = VAR_4;
      }
      else
      {

        VAR_2.sram[0x03] = VAR_4;
      }
      return;
    }

    case 0x06:
    {

      return;
    }

    case 0x07:
    {
      if (!(VAR_3 & 2))
      {

        VAR_2.sram[0x05] = VAR_4;


        if (VAR_2.sram[0x02] & 0x80)
        {

          VAR_1.memory_map[0x60].base = VAR_1.memory_map[0x68].base = VAR_0.rom + 0x080000 + ((VAR_4 & 0x1c) << 14);
        }
      }
      return;
    }

    default:
    {
      FUNC_0(VAR_3, VAR_4);
      return;
    }
  }
}
