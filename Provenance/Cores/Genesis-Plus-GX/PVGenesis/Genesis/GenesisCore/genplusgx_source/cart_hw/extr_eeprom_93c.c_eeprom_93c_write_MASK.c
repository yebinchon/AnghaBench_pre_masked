
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint16 ;
struct TYPE_4__ {unsigned char clk; int state; unsigned char opcode; int cycles; unsigned char buffer; int data; int we; int cs; } ;
struct TYPE_3__ {int sram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 void* VAR_3 ;


 TYPE_2__ VAR_4 ;
 int FUNC_0 (int ,int,int) ;
 TYPE_1__ VAR_5 ;

void FUNC_1(unsigned char VAR_6)
{

  if (VAR_6 & (1 << VAR_1))
  {

    if ((VAR_6 & (1 << VAR_0)) && !VAR_4.clk)
    {

      switch (VAR_4.state)
      {
        case 129:
        {

          if (VAR_6 & (1 << VAR_2))
          {
            VAR_4.opcode = 0;
            VAR_4.cycles = 0;
            VAR_4.state = 131;
          }
          break;
        }

        case 131:
        {

          VAR_4.opcode |= ((VAR_6 >> VAR_2) & 1) << (7 - VAR_4.cycles);
          VAR_4.cycles++;

          if (VAR_4.cycles == 8)
          {

            switch ((VAR_4.opcode >> 6) & 3)
            {
              case 1:
              {

                VAR_4.buffer = 0;
                VAR_4.cycles = 0;
                VAR_4.state = 128;
                break;
              }

              case 2:
              {

                VAR_4.buffer = *(uint16 *)(VAR_5.sram + ((VAR_4.opcode & 0x3F) << 1));
                VAR_4.cycles = 0;
                VAR_4.state = 130;


                VAR_4.data = 0;
                break;
              }

              case 3:
              {

                if (VAR_4.we)
                {
                  *(uint16 *)(VAR_5.sram + ((VAR_4.opcode & 0x3F) << 1)) = 0xFFFF;
                }


                VAR_4.state = VAR_3;
                break;
              }

              default:
              {

                switch ((VAR_4.opcode >> 4) & 3)
                {
                  case 1:
                  {

                    VAR_4.buffer = 0;
                    VAR_4.cycles = 0;
                    VAR_4.state = 128;
                    break;
                  }

                  case 2:
                  {

                    if (VAR_4.we)
                    {
                      FUNC_0(VAR_5.sram, 0xFF, 128);
                    }


                    VAR_4.state = VAR_3;
                    break;
                  }

                  default:
                  {

                    VAR_4.we = (VAR_4.opcode >> 4) & 1;


                    VAR_4.state = VAR_3;
                    break;
                  }
                }
                break;
              }
            }
          }
          break;
        }

        case 128:
        {

          VAR_4.buffer |= ((VAR_6 >> VAR_2) & 1) << (15 - VAR_4.cycles);
          VAR_4.cycles++;

          if (VAR_4.cycles == 16)
          {

            if (VAR_4.we)
            {
              if (VAR_4.opcode & 0x40)
              {

                *(uint16 *)(VAR_5.sram + ((VAR_4.opcode & 0x3F) << 1)) = VAR_4.buffer;
              }
              else
              {

                int VAR_7;
                for (VAR_7=0; VAR_7<64; VAR_7++)
                {
                  *(uint16 *)(VAR_5.sram + (VAR_7 << 1)) = VAR_4.buffer;

                }
              }
            }


            VAR_4.state = VAR_3;
          }
          break;
        }

        case 130:
        {

          VAR_4.data = ((VAR_4.buffer >> (15 - VAR_4.cycles)) & 1);
          VAR_4.cycles++;

          if (VAR_4.cycles == 16)
          {

            VAR_4.opcode++;
            VAR_4.cycles = 0;
            VAR_4.buffer = *(uint16 *)(VAR_5.sram + ((VAR_4.opcode & 0x3F) << 1));
          }
          break;
        }

        default:
        {

          break;
        }
      }
    }
  }
  else
  {

    if (VAR_4.cs)
    {

      VAR_4.data = 1;
      VAR_4.state = 129;
    }
  }


  VAR_4.cs = (VAR_6 >> VAR_1) & 1;
  VAR_4.clk = (VAR_6 >> VAR_0) & 1;
}
