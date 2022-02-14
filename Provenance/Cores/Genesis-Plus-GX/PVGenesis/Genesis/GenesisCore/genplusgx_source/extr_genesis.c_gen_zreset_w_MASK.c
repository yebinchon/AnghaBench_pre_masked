
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int cycles; } ;
struct TYPE_5__ {TYPE_1__* memory_map; } ;
struct TYPE_4__ {int write16; int write8; int read16; int read8; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (unsigned int) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void FUNC_3(unsigned int VAR_11, unsigned int VAR_12)
{
  if (VAR_11)
  {

    if (VAR_10 == 0)
    {

      VAR_0 = VAR_12;


      FUNC_1();
      FUNC_0(VAR_12);
    }


    else if (VAR_10 == 2)
    {

      VAR_1.memory_map[0xa0].read8 = VAR_6;
      VAR_1.memory_map[0xa0].read16 = VAR_7;
      VAR_1.memory_map[0xa0].write8 = VAR_8;
      VAR_1.memory_map[0xa0].write16 = VAR_9;


      FUNC_1();
      FUNC_0(VAR_12);
    }


    VAR_10 |= 1;
  }
  else
  {

    if (VAR_10 == 1)
    {

      FUNC_2(VAR_12);
    }


    else if (VAR_10 == 3)
    {

      VAR_1.memory_map[0xa0].read8 = VAR_3;
      VAR_1.memory_map[0xa0].read16 = VAR_2;
      VAR_1.memory_map[0xa0].write8 = VAR_5;
      VAR_1.memory_map[0xa0].write16 = VAR_4;
    }


    FUNC_0(VAR_12);


    VAR_10 &= 2;
  }
}
