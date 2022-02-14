
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(void)
{
       int VAR_1 = VAR_0;
       int VAR_2;

       while (VAR_1--) {


        if (FUNC_1())
         return 0;


        FUNC_3();
        if (FUNC_1())
         return 0;


        VAR_2 = FUNC_2();

        if (FUNC_1())
         return 0;

        if (!VAR_2) {
         FUNC_5();
         if (FUNC_0())
          return 0;
        }


        FUNC_4();
        if (FUNC_0())
         return 0;
       }

       return -1;
}
