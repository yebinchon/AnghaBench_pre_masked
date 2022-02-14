
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cycles; } ;


 unsigned int FUNC_0 (int ,unsigned int) ;
 TYPE_1__ VAR_0 ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 unsigned int* VAR_1 ;

unsigned int FUNC_3(unsigned int VAR_2)
{
  switch ((VAR_2 >> 13) & 3)
  {
    case 2:
    {
      return FUNC_0(VAR_0.cycles, VAR_2 & 3);
    }

    case 3:
    {

      if ((VAR_2 & 0xFF00) == 0x7F00)
      {
        return FUNC_1(VAR_2);
      }
      return (FUNC_2(VAR_2) | 0xFF);
    }

    default:
    {
      return VAR_1[VAR_2 & 0x1FFF];
    }
  }
}
