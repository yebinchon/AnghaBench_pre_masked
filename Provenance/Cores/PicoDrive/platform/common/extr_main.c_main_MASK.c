
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_7 () ;
 scalar_t__ VAR_2 ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int,char**) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (char*,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_18(int VAR_5, char *VAR_6[])
{
 VAR_1 = VAR_6;

 FUNC_12();

 FUNC_7();


 FUNC_16();
 FUNC_14();

 FUNC_3();
 FUNC_4(((void*)0), 0);

 FUNC_1();
 FUNC_8();

 VAR_0 = 133;

 if (VAR_5 > 1)
  FUNC_11(VAR_5, VAR_6);

 if (VAR_0 == 131)
 {
  if (FUNC_5(VAR_3)) {
   VAR_0 = 129;
   if (VAR_2 >= 0) {
    VAR_4 = VAR_2;
    FUNC_6(1, 0);
   }
  }
 }

 for (;;)
 {
  switch (VAR_0)
  {
   case 133:
    FUNC_9();
    break;

   case 128:
    FUNC_10();
    break;

   case 131:
    if (FUNC_5(VAR_3))
     VAR_0 = 129;
    else {
     FUNC_17("PGS_ReloadRom == 0\n");
     VAR_0 = 133;
    }
    break;

   case 130:
    VAR_0 = 129;


   case 129:
    FUNC_2();
    break;

   case 132:
    goto endloop;

   default:
    FUNC_17("engine got into unknown state (%i), exitting\n", VAR_0);
    goto endloop;
  }
 }

 endloop:

 FUNC_0();
 FUNC_13();
 FUNC_15();

 return 0;
}
