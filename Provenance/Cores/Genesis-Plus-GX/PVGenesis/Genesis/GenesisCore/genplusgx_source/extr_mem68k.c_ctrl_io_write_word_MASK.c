
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef unsigned int uint16 ;
struct TYPE_25__ {int emu_status; TYPE_7__* gr; } ;
struct TYPE_26__ {TYPE_8__ ssp1601; } ;
struct TYPE_23__ {unsigned int h; } ;
struct TYPE_24__ {TYPE_6__ byte; } ;
struct TYPE_22__ {int (* time_w ) (unsigned int,unsigned int) ;} ;
struct TYPE_20__ {int l; int h; } ;
struct TYPE_21__ {int w; TYPE_3__ byte; } ;
struct TYPE_19__ {int base; } ;
struct TYPE_18__ {int boot; } ;
struct TYPE_17__ {TYPE_5__ hw; } ;
struct TYPE_16__ {int bios; } ;
struct TYPE_15__ {char* cycles; TYPE_2__* memory_map; int pc; } ;
struct TYPE_14__ {int pending; int dmna; TYPE_4__* regs; TYPE_1__ cartridge; int prg_ram; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 TYPE_13__ VAR_4 ;
 TYPE_12__ VAR_5 ;
 int FUNC_0 (char*,int ,char*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (unsigned int,char*) ;
 int FUNC_3 (unsigned int,char*) ;
 int FUNC_4 (unsigned int,unsigned int) ;
 TYPE_11__ VAR_6 ;
 int FUNC_5 (unsigned int,unsigned int) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 TYPE_10__ VAR_7 ;
 int FUNC_12 (unsigned int,unsigned int) ;
 TYPE_9__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_13(unsigned int VAR_11, unsigned int VAR_12)
{
  switch ((VAR_11 >> 8) & 0xFF)
  {
    case 0x00:
    {
      if (!(VAR_11 & 0xE0))
      {
        FUNC_4((VAR_11 >> 1) & 0x0F, VAR_12 & 0xFF);
        return;
      }
      FUNC_7(VAR_11, VAR_12);
      return;
    }

    case 0x11:
    {
      FUNC_2((VAR_12 >> 8) & 1, VAR_6.cycles);
      return;
    }

    case 0x12:
    {
      FUNC_3((VAR_12 >> 8) & 1, VAR_6.cycles);
      return;
    }

    case 0x20:
    {



      if (VAR_9 == VAR_3)
      {

        switch (VAR_11 & 0x3e)
        {
          case 0x00:
          {

            if (VAR_12 & 0x01)
            {

              if (!(VAR_7.regs[0x00].byte.l & 0x01))
              {

                FUNC_10();
              }


              if (VAR_12 & 0x02)
              {

                FUNC_9();
              }
              else
              {

                FUNC_8();
              }
            }
            else
            {

              FUNC_9();
            }


            if (VAR_12 & 0x100)
            {

              if (VAR_7.regs[0x32>>1].byte.l & 0x04)
              {

                VAR_7.regs[0x00].byte.h |= 0x01;


                VAR_7.pending |= (1 << 2);


                FUNC_11((VAR_7.pending & VAR_7.regs[0x32>>1].byte.l) >> 1);
              }
            }


            VAR_7.regs[0x00].byte.l = VAR_12 & 0xff;
            return;
          }

          case 0x02:
          {
            FUNC_6(0x02);


            VAR_6.memory_map[VAR_7.cartridge.boot + 0x02].base = VAR_7.prg_ram + ((VAR_12 & 0xc0) << 11);
            VAR_6.memory_map[VAR_7.cartridge.boot + 0x03].base = VAR_6.memory_map[VAR_7.cartridge.boot + 0x02].base + 0x10000;


            if (VAR_7.regs[0x03>>1].byte.l & 0x04)
            {

              if (VAR_12 & 0x02)
              {

                VAR_7.dmna = 1;
              }
              else
              {

                VAR_12 |= 0x02;


                VAR_7.regs[0x02>>1].w = (VAR_7.regs[0x02>>1].w & ~0xffc2) | (VAR_12 & 0xffc2);
                return;
              }
            }
            else
            {

              if (VAR_12 & 0x02)
              {

                VAR_7.dmna = 1;


                VAR_7.regs[0x02>>1].w = (VAR_7.regs[0x02>>1].w & ~0xffc3) | (VAR_12 & 0xffc2);
                return;
              }
            }


            VAR_7.regs[0x02>>1].w = (VAR_7.regs[0x02>>1].w & ~0xffc0) | (VAR_12 & 0xffc0);
            return;
          }

          case 0x06:
          {
            *(uint16 *)(VAR_6.memory_map[0].base + 0x72) = VAR_12;
            return;
          }

          case 0x0e:
          {
            FUNC_6(0x0e);


            VAR_7.regs[0x0e>>1].byte.h = VAR_12;
            return;
          }

          default:
          {

            if ((VAR_11 & 0x30) == 0x10)
            {
              FUNC_6(VAR_11 & 0x1e);
              VAR_7.regs[(VAR_11 >> 1) & 0xff].w = VAR_12;
              return;
            }


            FUNC_7 (VAR_11, VAR_12);
            return;
          }
        }
      }

      FUNC_7 (VAR_11, VAR_12);
      return;
    }

    case 0x30:
    {
      VAR_4.hw.time_w(VAR_11, VAR_12);
      return;
    }

    case 0x40:
    {
      if (VAR_5.bios & 1)
      {
        FUNC_1(VAR_11 & 3, VAR_12);
        return;
      }
      FUNC_7(VAR_11, VAR_12);
      return;
    }

    case 0x50:
    {
      if (!(VAR_11 & 0xFD))
      {
        VAR_8->ssp1601.gr[VAR_2].byte.h = VAR_12;
        VAR_8->ssp1601.gr[VAR_0].byte.h |= 2;
        VAR_8->ssp1601.emu_status &= ~VAR_1;
        return;
      }
      FUNC_7(VAR_11, VAR_12);
      return;
    }

    case 0x10:
    case 0x13:
    case 0x41:
    case 0x44:
    {
      FUNC_7 (VAR_11, VAR_12);
      return;
    }

    default:
    {
      FUNC_5 (VAR_11, VAR_12);
      return;
    }
  }
}
