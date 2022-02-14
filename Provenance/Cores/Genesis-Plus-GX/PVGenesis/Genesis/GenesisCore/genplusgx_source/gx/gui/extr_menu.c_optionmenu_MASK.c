
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gui_menu ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_0 ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;

__attribute__((used)) static void FUNC_10(void)
{
  int VAR_1, VAR_2 = 0;
  gui_menu *VAR_3 = &VAR_0;

  FUNC_2(VAR_3);
  FUNC_1(VAR_3,30,0);

  while (VAR_2 == 0)
  {
    VAR_1 = FUNC_3(VAR_3);

    switch (VAR_1)
    {
      case 0:
        FUNC_0(VAR_3);
        FUNC_8();
        FUNC_2(VAR_3);
        break;
      case 1:
        FUNC_0(VAR_3);
        FUNC_9();
        FUNC_2(VAR_3);
        break;
      case 2:
        FUNC_0(VAR_3);
        FUNC_7();
        FUNC_2(VAR_3);
        break;
      case 3:
        FUNC_0(VAR_3);
        FUNC_5();
        FUNC_2(VAR_3);
        break;
      case 4:
        FUNC_0(VAR_3);
        FUNC_6();
        FUNC_2(VAR_3);
        break;
      case -1:
        VAR_2 = 1;
        break;
    }
  }

  FUNC_4();
  FUNC_1(VAR_3,30,1);
  FUNC_0(VAR_3);
}
