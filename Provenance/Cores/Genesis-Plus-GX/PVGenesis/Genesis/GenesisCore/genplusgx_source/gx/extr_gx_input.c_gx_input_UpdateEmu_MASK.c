
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {TYPE_1__* input; } ;
struct TYPE_5__ {scalar_t__* dev; scalar_t__* pad; } ;
struct TYPE_4__ {scalar_t__ device; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 () ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int,scalar_t__) ;

void FUNC_6(void)
{

  FUNC_0();
  int VAR_7, VAR_8 = 0;
  for (VAR_7=0; VAR_7<VAR_1; VAR_7++)
  {

    if (VAR_6.dev[VAR_7] != VAR_2)
    {

      VAR_6.pad[VAR_7] = 0;

      if (VAR_5.input[VAR_8].device == 0)
      {
        FUNC_4(VAR_5.input[VAR_8].port, VAR_7);
      }
      VAR_8 ++;
    }
  }


  FUNC_1();
}
