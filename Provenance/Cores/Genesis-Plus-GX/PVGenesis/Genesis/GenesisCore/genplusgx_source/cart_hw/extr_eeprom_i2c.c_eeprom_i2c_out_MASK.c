
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned char uint8 ;
typedef size_t uint16 ;
struct TYPE_4__ {int size_mask; unsigned char sda_out_bit; } ;
struct TYPE_6__ {unsigned char sda; int state; int cycles; int slave_mask; int word_address; TYPE_1__ config; } ;
struct TYPE_5__ {int* sram; } ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static unsigned char FUNC_0(void)
{
  uint8 VAR_2 = VAR_0.sda;


  switch (VAR_0.state)
  {
    case 129:
    {
      if (VAR_0.cycles < 9)
      {

        uint16 VAR_3 = (VAR_0.slave_mask | VAR_0.word_address) & 0xffff;
        VAR_2 = (VAR_1.sram[VAR_3] >> (8 - VAR_0.cycles)) & 1;

        if (VAR_0.cycles == 8)
        {

          VAR_0.word_address ++;
          VAR_0.word_address &= VAR_0.config.size_mask;
        }
      }
      break;
    }

    case 132:
    case 133:
    case 131:
    case 130:
    case 128:
    {
      if (VAR_0.cycles == 9) VAR_2 = 0;
      break;
    }

    default:
    {
      break;
    }
  }

  return (VAR_2 << VAR_0.config.sda_out_bit);
}
