
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* input; } ;
struct TYPE_5__ {scalar_t__* dev; } ;
struct TYPE_4__ {int device; int port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int*) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__ VAR_3 ;

int FUNC_3(void)
{
  int VAR_4;



  int VAR_5 = 0;
  int VAR_6 = 0;

  FUNC_1();
  u32 VAR_7 = FUNC_0();

  for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
  {

    if (VAR_3.dev[VAR_4] != VAR_1)
    {

      switch (VAR_2.input[VAR_6].device)
      {
        case 0:
        {
          if (VAR_7 & (1 << VAR_2.input[VAR_6].port))
          {
            VAR_5++;
          }
          break;
        }
        default:
        {
          break;
        }
      }


      VAR_6 ++;
    }
  }


  return VAR_5;
}
