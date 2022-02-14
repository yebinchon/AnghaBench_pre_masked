
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int cycles; int out; unsigned char opcode; int state; unsigned char clk; unsigned char buffer; unsigned char addr; int status; unsigned char cs; } ;
struct TYPE_3__ {unsigned char* sram; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;

 int VAR_5 ;
 void* VAR_6 ;

 TYPE_2__ VAR_7 ;
 TYPE_1__ VAR_8 ;

void FUNC_0(unsigned char VAR_9)
{

  if (VAR_9 & (1 << VAR_3))
  {

    if (VAR_9 & (1 << VAR_1))
    {

      VAR_7.cycles = 0;
      VAR_7.out = 1;
      VAR_7.opcode = 0;
      VAR_7.state = 130;
    }
    else
    {

      switch (VAR_7.state)
      {
        case 130:
        {

          if ((VAR_9 & (1 << VAR_0)) && !VAR_7.clk)
          {

            VAR_7.opcode |= ((VAR_9 >> VAR_2) & 1);
            VAR_7.cycles++;


            if (VAR_7.cycles == 8)
            {

              VAR_7.cycles = 0;


              switch (VAR_7.opcode)
              {
                case 0x01:
                {

                  VAR_7.buffer = 0;
                  VAR_7.state = 128;
                  break;
                }

                case 0x02:
                {

                  VAR_7.addr = 0;
                  VAR_7.state = 131;
                  break;
                }

                case 0x03:
                {

                  VAR_7.addr = 0;
                  VAR_7.state = 131;
                  break;
                }

                case 0x04:
                {

                  VAR_7.status &= ~0x02;
                  VAR_7.state = VAR_6;
                  break;
                }

                case 0x05:
                {

                  VAR_7.buffer = VAR_7.status;
                  VAR_7.state = 129;
                  break;
                }

                case 0x06:
                {

                  VAR_7.status |= 0x02;
                  VAR_7.state = VAR_6;
                  break;
                }

                default:
                {

                  VAR_7.state = VAR_6;
                  break;
                }
              }
            }
            else
            {

              VAR_7.opcode = VAR_7.opcode << 1;
            }
          }
          break;
        }

        case 131:
        {

          if ((VAR_9 & (1 << VAR_0)) && !VAR_7.clk)
          {

            VAR_7.addr |= ((VAR_9 >> VAR_2) & 1);
            VAR_7.cycles++;


            if (VAR_7.cycles == 16)
            {

              VAR_7.cycles = 0;


              VAR_7.addr &= VAR_5;


              if (VAR_7.opcode & 0x01)
              {

                VAR_7.buffer = VAR_8.sram[VAR_7.addr];
                VAR_7.state = 129;
              }
              else
              {

                VAR_7.buffer = 0;
                VAR_7.state = 128;
              }
            }
            else
            {

              VAR_7.addr = VAR_7.addr << 1;
            }
          }
          break;
        }

        case 128:
        {

          if ((VAR_9 & (1 << VAR_0)) && !VAR_7.clk)
          {

            VAR_7.buffer |= ((VAR_9 >> VAR_2) & 1);
            VAR_7.cycles++;


            if (VAR_7.cycles == 8)
            {

              VAR_7.cycles = 0;


              if (VAR_7.opcode & 0x01)
              {

                VAR_7.status = (VAR_7.status & 0x02) | (VAR_7.buffer & 0x0c);


                VAR_7.state = VAR_6;
              }
              else
              {

                if (VAR_7.status & 2)
                {

                  switch ((VAR_7.status >> 2) & 0x03)
                  {
                    case 0x01:
                    {

                      if (VAR_7.addr < 0xC000)
                      {
                        VAR_8.sram[VAR_7.addr] = VAR_7.buffer;
                      }
                      break;
                    }

                    case 0x02:
                    {

                      if (VAR_7.addr < 0x8000)
                      {
                        VAR_8.sram[VAR_7.addr] = VAR_7.buffer;
                      }
                      break;
                    }

                    case 0x03:
                    {

                      break;
                    }

                    default:
                    {

                      VAR_8.sram[VAR_7.addr] = VAR_7.buffer;
                      break;
                    }
                  }
                }


                VAR_7.buffer = 0;


                VAR_7.addr = (VAR_7.addr & ~VAR_4) | ((VAR_7.addr + 1) & VAR_4);
              }
            }
            else
            {

              VAR_7.buffer = VAR_7.buffer << 1;
            }
          }
          break;
        }

        case 129:
        {

          if ((VAR_9 & (1 << VAR_0)) && !VAR_7.clk)
          {

            VAR_7.out = (VAR_7.buffer >> (7 - VAR_7.cycles)) & 1;
            VAR_7.cycles++;


            if (VAR_7.cycles == 8)
            {

              VAR_7.cycles = 0;


              if (VAR_7.opcode == 0x03)
              {

                VAR_7.addr = (VAR_7.addr + 1) & VAR_5;
                VAR_7.buffer = VAR_8.sram[VAR_7.addr];
              }
            }
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


  VAR_7.cs = (VAR_9 >> VAR_1) & 1;
  VAR_7.clk = (VAR_9 >> VAR_0) & 1;
}
