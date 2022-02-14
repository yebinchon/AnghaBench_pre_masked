
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int VAR_3 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int VAR_4 ;
 int FUNC_16 () ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_17 (int ,int ) ;

int FUNC_18(void)
{
 FUNC_14();

 FUNC_5();
 FUNC_4(0, 0);
 FUNC_0(VAR_0);

 FUNC_3();
 FUNC_9();



 VAR_1 = 134;

 for (;;)
 {
  switch (VAR_1)
  {
   case 134:

    FUNC_10();




    break;

   case 132:
    if (FUNC_6(VAR_6)) {
     VAR_1 = 130;
     if (VAR_3 != 0)
      VAR_1 = 134;
    } else {
     FUNC_8("PGS_ReloadRom == 0\n");
     VAR_1 = 134;
    }
    break;

   case 128:
    while (VAR_1 == 128)
     FUNC_16();
    break;

   case 129:
    VAR_4 = 0;
    FUNC_15();
    FUNC_2();
    VAR_1 = VAR_2;
    break;

   case 131:
    VAR_1 = 130;

   case 130:
    if (VAR_4) {
     VAR_4 = 0;
     FUNC_15();
     FUNC_2();
     break;
    }
    FUNC_12();



    break;

   case 133:
    goto endloop;

   default:
    FUNC_8("engine got into unknown state (%i), exitting\n", VAR_1);
    goto endloop;
  }
 }

 endloop:

 FUNC_11();
 FUNC_1();




 FUNC_13();


 return 0;
}
