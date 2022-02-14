
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int special; } ;
struct TYPE_7__ {TYPE_1__* input; } ;
struct TYPE_6__ {int* system; void** dev; scalar_t__* pad; } ;
struct TYPE_5__ {void* padtype; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 scalar_t__ VAR_14 ;




 TYPE_4__ VAR_15 ;
 TYPE_3__ VAR_16 ;
 TYPE_2__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int) ;

void FUNC_1(void)
{
  int VAR_19;
  int VAR_20 = 0;

  for (VAR_19=0; VAR_19<VAR_11; VAR_19++)
  {
    VAR_17.dev[VAR_19] = VAR_13;
    VAR_17.pad[VAR_19] = 0;
  }


  if (VAR_18 == VAR_14)
  {
    VAR_17.dev[0] = VAR_5;
    return;
  }


  if (VAR_15.special & VAR_10)
  {
    VAR_17.dev[0] = VAR_7;
    return;
  }

  switch (VAR_17.system[0])
  {
    case 133:
    {
      VAR_17.dev[0] = VAR_3;
      VAR_20++;
      break;
    }

    case 136:
    {
      VAR_17.dev[0] = VAR_16.input[VAR_20].padtype;
      VAR_20++;
      break;
    }

    case 134:
    {
      VAR_17.dev[0] = VAR_2;
      VAR_20++;
      break;
    }

    case 139:
    {
      VAR_17.dev[0] = VAR_0;
      VAR_20++;
      break;
    }

    case 128:
    {
      VAR_17.dev[0] = VAR_8;
      VAR_20++;
      break;
    }

    case 129:
    {
      for (VAR_19=0; VAR_19< 4; VAR_19++)
      {
        if (VAR_20 < VAR_12)
        {
          VAR_17.dev[VAR_19] = VAR_16.input[VAR_20].padtype;
          VAR_20++;
        }
      }
      break;
    }

    case 130:
    {
      for (VAR_19=0; VAR_19<4; VAR_19++)
      {
        if (VAR_20 < VAR_12)
        {
          VAR_17.dev[VAR_19] = VAR_16.input[VAR_20].padtype;
          VAR_20++;
        }
      }
      FUNC_0(0);
      break;
    }

    case 137:
    {
      VAR_17.dev[0] = VAR_1;
      VAR_20++;
      break;
    }

    case 132:
    {
      VAR_17.dev[0] = VAR_4;
      VAR_20++;
      break;
    }

    case 131:
    {
      VAR_17.dev[0] = VAR_6;
      VAR_20++;
      break;
    }
  }

  if (VAR_20 == VAR_12)
  {
    return;
  }

  switch (VAR_17.system[1])
  {
    case 133:
    {
      VAR_17.dev[4] = VAR_3;
      VAR_20++;
      break;
    }

    case 136:
    {
      VAR_17.dev[4] = VAR_16.input[VAR_20].padtype;
      VAR_20++;
      break;
    }

    case 134:
    {
      VAR_17.dev[4] = VAR_2;
      VAR_20++;
      break;
    }

    case 139:
    {
      VAR_17.dev[4] = VAR_0;
      VAR_20++;
      break;
    }

    case 128:
    {
      VAR_17.dev[4] = VAR_8;
      VAR_20++;
      break;
    }

    case 135:
    {
      VAR_17.dev[4] = VAR_1;
      VAR_20++;
      break;
    }

    case 138:
    {
      for (VAR_19=4; VAR_19<6; VAR_19++)
      {
        if (VAR_20 < VAR_12)
        {
          VAR_17.dev[VAR_19] = VAR_1;
          VAR_20++;
        }
      }
      break;
    }

    case 130:
    {
      for (VAR_19=4; VAR_19<8; VAR_19++)
      {
        if (VAR_20 < VAR_12)
        {
          VAR_17.dev[VAR_19] = VAR_16.input[VAR_20].padtype;
          VAR_20++;
        }
      }
      FUNC_0(1);
      break;
    }

    case 137:
    {
      VAR_17.dev[4] = VAR_1;
      VAR_20++;
      break;
    }

    case 132:
    {
      VAR_17.dev[4] = VAR_4;
      VAR_20++;
      break;
    }

    case 131:
    {
      VAR_17.dev[4] = VAR_6;
      VAR_20++;
      break;
    }
  }


  if (VAR_15.special & VAR_9)
  {

    for (VAR_19=5; VAR_19<7; VAR_19++)
    {
      if (VAR_20 < VAR_12)
      {
        VAR_17.dev[VAR_19] = VAR_16.input[VAR_20].padtype;
        VAR_20 ++;
      }
    }
  }
}
