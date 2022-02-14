
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
struct TYPE_6__ {unsigned char (* read ) (unsigned int) ;} ;
struct TYPE_5__ {int base; } ;


 unsigned char FUNC_0 (int ,unsigned int) ;
 TYPE_4__ VAR_0 ;
 unsigned char FUNC_1 (int ,unsigned int) ;
 TYPE_3__ VAR_1 ;
 unsigned char FUNC_2 (unsigned int) ;
 unsigned char FUNC_3 (unsigned int) ;
 unsigned char FUNC_4 (unsigned int) ;
 unsigned int VAR_2 ;
 TYPE_2__* VAR_3 ;
 unsigned char* VAR_4 ;

unsigned char FUNC_5(unsigned int VAR_5)
{
  switch((VAR_5 >> 13) & 7)
  {
    case 0:
    case 1:
    {
      return VAR_4[VAR_5 & 0x1FFF];
    }

    case 2:
    {
      return FUNC_1(VAR_0, VAR_5 & 3);
    }

    case 3:
    {
      if ((VAR_5 >> 8) == 0x7F)
      {
        return (*VAR_3[0xc0].read)(VAR_5);
      }
      return FUNC_4(VAR_5);
    }

    default:
    {
      VAR_5 = VAR_2 | (VAR_5 & 0x7FFF);
      if (VAR_3[VAR_5 >> 16].read)
      {
        return (*VAR_3[VAR_5 >> 16].read)(VAR_5);
      }
      return FUNC_0(VAR_1.memory_map[VAR_5 >> 16].base, VAR_5 & 0xFFFF);
    }
  }
}
