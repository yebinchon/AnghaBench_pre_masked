
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 int FUNC_0 (int,unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (unsigned int,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int* VAR_1 ;

void FUNC_4(unsigned int VAR_2, unsigned int VAR_3)
{
  switch ((VAR_2 >> 13) & 3)
  {
    case 2:
    {
      FUNC_0(VAR_0.cycles, VAR_2 & 3, VAR_3);
      return;
    }

    case 3:
    {
      switch ((VAR_2 >> 8) & 0x7F)
      {
        case 0x60:
        {
          FUNC_1(VAR_3 & 1);
          return;
        }

        case 0x7F:
        {
          FUNC_2(VAR_2, VAR_3);
          return;
        }

        default:
        {
          FUNC_3(VAR_2, VAR_3);
          return;
        }
      }
    }

    default:
    {
      VAR_1[VAR_2 & 0x1FFF] = VAR_3;
      VAR_0.cycles += 8;
      return;
    }
  }
}
