
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int** analog; int* pad; } ;
struct TYPE_3__ {size_t Port; int Counter; int State; scalar_t__ Wait; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;

unsigned char FUNC_0()
{
  unsigned int VAR_2 = 0x00;
  int VAR_3 = VAR_0.analog[VAR_1.Port][0];
  int VAR_4 = VAR_0.analog[VAR_1.Port][1];

  switch (VAR_1.Counter)
  {
    case 0:
      VAR_2 = 0x00;
      break;

    case 1:
      VAR_2 = 0x0B;
      break;

    case 2:
      VAR_2 = 0x0F;
      break;

    case 3:
      VAR_2 = 0x0F;
      break;

    case 4:
      VAR_2 |= (VAR_3 < 0);
      VAR_2 |= (VAR_4 < 0) << 1;




      break;

    case 5:
      VAR_2 = (VAR_0.pad[VAR_1.Port] >> 4) & 0x0F;
      break;

    case 6:
      VAR_2 = (VAR_3 >> 4) & 0x0F;
      break;

    case 7:
      VAR_2 = (VAR_3 & 0x0F);
      break;

    case 8:
      VAR_2 = (VAR_4 >> 4) & 0x0F;
      break;

    case 9:
      VAR_2 = (VAR_4 & 0x0F);
      break;
  }


  if (VAR_1.Wait)
  {

    VAR_1.Wait = 0;


    VAR_2 |= (~VAR_1.State & 0x20) >> 1;
  }
  else
  {

    VAR_2 |= (VAR_1.State & 0x20) >> 1;
  }

  return VAR_2;
}
