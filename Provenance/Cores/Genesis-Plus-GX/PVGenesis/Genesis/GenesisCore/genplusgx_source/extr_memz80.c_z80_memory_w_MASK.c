
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int cycles; } ;
struct TYPE_7__ {TYPE_1__* memory_map; } ;
struct TYPE_6__ {int (* write ) (unsigned int,unsigned char) ;} ;
struct TYPE_5__ {int base; } ;


 int FUNC_0 (int ,unsigned int,unsigned char) ;
 TYPE_4__ VAR_0 ;
 int FUNC_1 (int ,unsigned int,unsigned char) ;
 int FUNC_2 (unsigned char) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (unsigned int,unsigned char) ;
 int FUNC_4 (unsigned int,unsigned char) ;
 int FUNC_5 (unsigned int,unsigned char) ;
 unsigned int VAR_2 ;
 TYPE_2__* VAR_3 ;
 unsigned char* VAR_4 ;

void FUNC_6(unsigned int VAR_5, unsigned char VAR_6)
{
  switch((VAR_5 >> 13) & 7)
  {
    case 0:
    case 1:
    {
      VAR_4[VAR_5 & 0x1FFF] = VAR_6;
      return;
    }

    case 2:
    {
      FUNC_1(VAR_0, VAR_5 & 3, VAR_6);
      return;
    }

    case 3:
    {
      switch(VAR_5 >> 8)
      {
        case 0x60:
        {
          FUNC_2(VAR_6 & 1);
          return;
        }

        case 0x7F:
        {
          (*VAR_3[0xc0].write)(VAR_5, VAR_6);
          return;
        }

        default:
        {
          FUNC_5(VAR_5, VAR_6);
          return;
        }
      }
    }

    default:
    {
      VAR_5 = VAR_2 | (VAR_5 & 0x7FFF);
      if (VAR_3[VAR_5 >> 16].write)
      {
        (*VAR_3[VAR_5 >> 16].write)(VAR_5, VAR_6);
        return;
      }
      FUNC_0(VAR_1.memory_map[VAR_5 >> 16].base, VAR_5 & 0xFFFF, VAR_6);
      return;
    }
  }
}
