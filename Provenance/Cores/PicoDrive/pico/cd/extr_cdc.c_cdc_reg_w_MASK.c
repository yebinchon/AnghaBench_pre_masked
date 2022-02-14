
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int* s68k_regs; } ;
struct TYPE_3__ {int ifstat; unsigned char ifctrl; int dbc; int dac; int wa; unsigned char* stat; unsigned char* ctrl; int pt; int dma_w; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned char VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 unsigned char VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_2__* VAR_16 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_17 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

void FUNC_5(unsigned char VAR_23)
{



  switch (VAR_16->s68k_regs[0x04+1] & 0x0F)
  {
    case 0x01:
    {

      if (((VAR_23 & VAR_7) && !(VAR_17.ifstat & VAR_6)) ||
          ((VAR_23 & VAR_3) && !(VAR_17.ifstat & VAR_2)))
      {

        if (VAR_16->s68k_regs[0x32+1] & VAR_14)
        {

          FUNC_3(VAR_12, "cdc pending irq 5");
          FUNC_1(5);
        }
      }
      else
      {

        FUNC_0(5);
      }


      if (!(VAR_23 & VAR_4))
      {

        VAR_17.ifstat |= (VAR_5 | VAR_8);
      }

      VAR_17.ifctrl = VAR_23;
      VAR_16->s68k_regs[0x04+1] = 0x02;
      break;
    }

    case 0x02:
      VAR_17.dbc &= 0xff00;
      VAR_17.dbc |= VAR_23;
      VAR_16->s68k_regs[0x04+1] = 0x03;
      break;

    case 0x03:
      VAR_17.dbc &= 0x00ff;
      VAR_17.dbc |= VAR_23 << 8;
      VAR_16->s68k_regs[0x04+1] = 0x04;
      break;

    case 0x04:
      VAR_17.dac &= 0xff00;
      VAR_17.dac |= VAR_23;
      VAR_16->s68k_regs[0x04+1] = 0x05;
      break;

    case 0x05:
      VAR_17.dac &= 0x00ff;
      VAR_17.dac |= VAR_23 << 8;
      VAR_16->s68k_regs[0x04+1] = 0x06;
      break;

    case 0x06:
    {

      if (VAR_17.ifctrl & VAR_4)
      {

        VAR_17.ifstat &= ~VAR_5;


        VAR_17.dbc &= 0x0fff;


        VAR_16->s68k_regs[0x04+0] &= 0x07;

        VAR_17.dma_w = 0;


        switch (VAR_16->s68k_regs[0x04+0] & 0x07)
        {
          case 2:
          case 3:
          {

            VAR_17.ifstat &= ~VAR_8;


            VAR_16->s68k_regs[0x04+0] |= 0x40;
            break;
          }

          case 4:
          {
            VAR_17.dma_w = VAR_18;
            break;
          }

          case 5:
          {
            VAR_17.dma_w = VAR_19;
            break;
          }

          case 7:
          {

            if (VAR_16->s68k_regs[0x02+1] & 0x04)
            {

              if (VAR_16->s68k_regs[0x02+1] & 0x01)
              {

                VAR_17.dma_w = VAR_20;
              }
              else
              {

                VAR_17.dma_w = VAR_21;
              }
            }
            else
            {

              if (VAR_16->s68k_regs[0x02+1] & 0x02)
              {

                VAR_17.dma_w = VAR_22;
              }
            }
            break;
          }

          default:
          {
            FUNC_3(VAR_11, "invalid CDC tranfer destination (%d)",
              VAR_16->s68k_regs[0x04+0] & 0x07);
            break;
          }
        }

        if (VAR_17.dma_w)
          FUNC_4(VAR_15, VAR_17.dbc / 2);
      }

      VAR_16->s68k_regs[0x04+1] = 0x07;
      break;
    }

    case 0x07:
    {

      VAR_17.ifstat |= VAR_6;


      VAR_17.dbc &= 0x0fff;
      VAR_16->s68k_regs[0x04+1] = 0x08;
      break;
    }

    case 0x08:
      VAR_17.wa &= 0xff00;
      VAR_17.wa |= VAR_23;
      VAR_16->s68k_regs[0x04+1] = 0x09;
      break;

    case 0x09:
      VAR_17.wa &= 0x00ff;
      VAR_17.wa |= VAR_23 << 8;
      VAR_16->s68k_regs[0x04+1] = 0x0a;
      break;

    case 0x0a:
    {

      VAR_17.stat[0] = VAR_23 & VAR_1;


      if (VAR_23 & VAR_0)
      {

        VAR_17.stat[2] = VAR_17.ctrl[1] & VAR_10;
      }
      else
      {

        VAR_17.stat[2] = VAR_17.ctrl[1] & (VAR_10 | VAR_9);
      }

      VAR_17.ctrl[0] = VAR_23;
      VAR_16->s68k_regs[0x04+1] = 0x0b;
      break;
    }

    case 0x0b:
    {

      if (VAR_17.ctrl[0] & VAR_0)
      {

        VAR_17.stat[2] = VAR_23 & VAR_10;
      }
      else
      {

        VAR_17.stat[2] = VAR_23 & (VAR_10 | VAR_9);
      }

      VAR_17.ctrl[1] = VAR_23;
      VAR_16->s68k_regs[0x04+1] = 0x0c;
      break;
    }

    case 0x0c:
      VAR_17.pt &= 0xff00;
      VAR_17.pt |= VAR_23;
      VAR_16->s68k_regs[0x04+1] = 0x0d;
      break;

    case 0x0d:
      VAR_17.pt &= 0x00ff;
      VAR_17.pt |= VAR_23 << 8;
      VAR_16->s68k_regs[0x04+1] = 0x0e;
      break;

    case 0x0e:
      VAR_16->s68k_regs[0x04+1] = 0x0f;
      break;

    case 0x0f:
      FUNC_2();
      break;

    default:
      break;
  }
}
