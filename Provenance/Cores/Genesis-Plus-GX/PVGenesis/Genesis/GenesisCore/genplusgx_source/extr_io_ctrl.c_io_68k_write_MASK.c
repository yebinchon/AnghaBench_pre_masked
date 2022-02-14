
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* data_w ) (unsigned int,unsigned int) ;} ;


 unsigned int* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (unsigned int,unsigned int) ;

void FUNC_2(unsigned int VAR_2, unsigned int VAR_3)
{
  switch (VAR_2)
  {
    case 0x01:
    case 0x02:
    case 0x03:
    {
      VAR_0[VAR_2] = VAR_3;
      VAR_1[VAR_2-1].data_w(VAR_3, VAR_0[VAR_2 + 3]);
      return;
    }

    case 0x04:
    case 0x05:
    case 0x06:
    {
      if (VAR_3 != VAR_0[VAR_2])
      {
        VAR_0[VAR_2] = VAR_3;
        VAR_1[VAR_2-4].data_w(VAR_0[VAR_2-3], VAR_3);
      }
      return;
    }

    case 0x07:
    case 0x0A:
    case 0x0D:
    {
      VAR_0[VAR_2] = VAR_3;
      return;
    }

    case 0x09:
    case 0x0C:
    case 0x0F:
    {
      VAR_0[VAR_2] = VAR_3 & 0xF8;
      return;
    }

    default:
    {
      return;
    }
  }
}
