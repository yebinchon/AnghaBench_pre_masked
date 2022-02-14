
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gui_menu ;
struct TYPE_2__ {int l_device; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6 ()
{
  int VAR_3, VAR_4;
  gui_menu *VAR_5 = &VAR_2;
  FUNC_3(VAR_5);
  FUNC_2(VAR_5,30,0);

  while (1)
  {
    VAR_3 = FUNC_4(VAR_5);

    switch (VAR_3)
    {

      case -1:
        FUNC_2(VAR_5,30,1);
        FUNC_1(VAR_5);
        return 0;


      default:
      {

        VAR_4 = VAR_3 - 1;


        if (VAR_3 > 0)
        {
          VAR_3 = FUNC_5(VAR_1.l_device, VAR_4);
        }
        else
        {
          VAR_3 = FUNC_5(VAR_0, VAR_4);
        }

        if (VAR_3)
        {
          FUNC_1(VAR_5);
          if (FUNC_0(VAR_4))
          {

            return 1;
          }
          FUNC_3(VAR_5);
        }
        break;
      }
    }
  }

  return 0;
}
