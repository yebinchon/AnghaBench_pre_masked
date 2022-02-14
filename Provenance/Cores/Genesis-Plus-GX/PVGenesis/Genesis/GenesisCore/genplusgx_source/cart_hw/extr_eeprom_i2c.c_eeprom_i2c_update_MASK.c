
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint16 ;
struct TYPE_4__ {int size_mask; int address_bits; int pagewrite_mask; } ;
struct TYPE_6__ {int state; int cycles; int word_address; int old_sda; int rw; int slave_mask; int sda; int scl; int old_scl; TYPE_1__ config; } ;
struct TYPE_5__ {int* sram; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_2(void)
{

  switch (VAR_0.state)
  {

    case 130:
    {
      FUNC_0();
      FUNC_1();
      break;
    }


    case 129:
    {
      FUNC_1();
      break;
    }




    case 134:
    {
      FUNC_0();
      FUNC_1();


      if (!VAR_0.old_scl && VAR_0.scl)
      {
        if (VAR_0.cycles == 0) VAR_0.cycles ++;
      }



      if (VAR_0.old_scl && !VAR_0.scl && (VAR_0.cycles > 0))
      {
        if (VAR_0.cycles < 8)
        {
          VAR_0.word_address |= (VAR_0.old_sda << (7 - VAR_0.cycles));
        }
        else if (VAR_0.cycles == 8)
        {
          VAR_0.rw = VAR_0.old_sda;
        }
        else
        {
          VAR_0.cycles = 0;
          VAR_0.word_address &= VAR_0.config.size_mask;
          VAR_0.state = VAR_0.rw ? 131 : 128;
        }

        VAR_0.cycles ++;
      }
      break;
    }





    case 135:
    {
      FUNC_0();
      FUNC_1();


      if (!VAR_0.old_scl && VAR_0.scl)
      {
        if (VAR_0.cycles == 0) VAR_0.cycles ++;
      }


      if (VAR_0.old_scl && !VAR_0.scl && (VAR_0.cycles > 0))
      {
        if ((VAR_0.cycles > 4) && (VAR_0.cycles <8))
        {
          if ((VAR_0.config.address_bits == 16) ||
            (VAR_0.config.size_mask < (1 << (15 - VAR_0.cycles))))
          {

            VAR_0.slave_mask |= (VAR_0.old_sda << (7 - VAR_0.cycles));
          }
          else
          {

            if (VAR_0.old_sda) VAR_0.word_address |= (1 << (15 - VAR_0.cycles));
            else VAR_0.word_address &= ~(1 << (15 - VAR_0.cycles));
          }
        }
        else if (VAR_0.cycles == 8) VAR_0.rw = VAR_0.old_sda;
        else if (VAR_0.cycles > 8)
        {

          VAR_0.cycles = 0;
          if (VAR_0.config.address_bits == 16)
          {

            VAR_0.state = VAR_0.rw ? 131 : 133;
            VAR_0.slave_mask <<= 16;
          }
          else
          {

            VAR_0.state = VAR_0.rw ? 131 : 132;
            VAR_0.slave_mask <<= 8;
          }
        }

        VAR_0.cycles ++;
      }
      break;
    }




    case 133:
    {
      FUNC_0();
      FUNC_1();


      if (VAR_0.old_scl && !VAR_0.scl)
      {
        if (VAR_0.cycles < 9)
        {
          if ((VAR_0.config.size_mask + 1) < (1 << (17 - VAR_0.cycles)))
          {

            VAR_0.slave_mask >>= 1;
          }
          else
          {

            if (VAR_0.old_sda) VAR_0.word_address |= (1 << (16 - VAR_0.cycles));
            else VAR_0.word_address &= ~(1 << (16 - VAR_0.cycles));
          }

          VAR_0.cycles ++;
        }
        else
        {

          VAR_0.cycles = 1;
          VAR_0.state = 132;
        }
      }
      break;
    }




    case 132:
    {
      FUNC_0();
      FUNC_1();


      if (VAR_0.old_scl && !VAR_0.scl)
      {
        if (VAR_0.cycles < 9)
        {
          if ((VAR_0.config.size_mask + 1) < (1 << (9 - VAR_0.cycles)))
          {

            VAR_0.slave_mask >>= 1;
          }
          else
          {

            if (VAR_0.old_sda) VAR_0.word_address |= (1 << (8 - VAR_0.cycles));
            else VAR_0.word_address &= ~(1 << (8 - VAR_0.cycles));
          }

          VAR_0.cycles ++;
        }
        else
        {

          VAR_0.cycles = 1;
          VAR_0.word_address &= VAR_0.config.size_mask;
          VAR_0.state = 128;
        }
      }
      break;
    }




    case 131:
    {
      FUNC_0();
      FUNC_1();


      if (VAR_0.old_scl && !VAR_0.scl)
      {
        if (VAR_0.cycles < 9) VAR_0.cycles ++;
        else
        {
          VAR_0.cycles = 1;


          if (VAR_0.old_sda) VAR_0.state = 129;
         }
      }
      break;
    }




    case 128:
    {
      FUNC_0();
      FUNC_1();


      if (VAR_0.old_scl && !VAR_0.scl)
      {
        if (VAR_0.cycles < 9)
        {

          uint16 VAR_2 = (VAR_0.slave_mask | VAR_0.word_address) & 0xFFFF;
          if (VAR_0.old_sda) VAR_1.sram[VAR_2] |= (1 << (8 - VAR_0.cycles));
          else VAR_1.sram[VAR_2] &= ~(1 << (8 - VAR_0.cycles));

          if (VAR_0.cycles == 8)
          {

            VAR_0.word_address = (VAR_0.word_address & (0xFFFF - VAR_0.config.pagewrite_mask)) |
                                     ((VAR_0.word_address + 1) & VAR_0.config.pagewrite_mask);
          }

          VAR_0.cycles ++;
        }
        else VAR_0.cycles = 1;
      }
      break;
    }
  }

  VAR_0.old_scl = VAR_0.scl;
  VAR_0.old_sda = VAR_0.sda;
}
