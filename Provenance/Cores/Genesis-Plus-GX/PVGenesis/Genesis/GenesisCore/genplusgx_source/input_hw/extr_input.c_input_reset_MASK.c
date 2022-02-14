
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* dev; scalar_t__* system; } ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

void FUNC_9(void)
{

  int VAR_3;
  for (VAR_3=0; VAR_3<VAR_0; VAR_3++)
  {
    switch (VAR_2.dev[VAR_3])
    {
      case 134:
      case 133:
      case 132:
      {
        FUNC_1(VAR_3);
        break;
      }

      case 136:
      {
        FUNC_2(VAR_3);
        break;
      }

      case 135:
      {
        FUNC_3(VAR_3);
        break;
      }

      case 137:
      {
        FUNC_0(VAR_3 >> 2);
        break;
      }

      case 128:
      {
        FUNC_8(VAR_3);
        break;
      }

      case 131:
      {
        FUNC_4(VAR_3);
        break;
      }

      case 130:
      {
        FUNC_5(VAR_3);
        break;
      }

      case 129:
      {
        FUNC_7();
        break;
      }

      default:
      {
        break;
      }
    }
  }


  for (VAR_3=0; VAR_3<2; VAR_3++)
  {
    if (VAR_2.system[VAR_3] == VAR_1)
    {
      FUNC_6(VAR_3);
    }
  }
}
