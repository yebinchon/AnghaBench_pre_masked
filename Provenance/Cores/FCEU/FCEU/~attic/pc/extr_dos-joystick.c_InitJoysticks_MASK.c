
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;

int FUNC_4(void)
{
 if(!VAR_0) return(0);
        if(!FUNC_1())
        {
         FUNC_3("Joystick not detected!\n");
         VAR_0=0;
         return 0;
        }
        if(VAR_8)
        {
         VAR_7=1;
         while(!VAR_6);
        }
        else
         FUNC_2();

        VAR_3=VAR_2;
        VAR_5=VAR_4;

        if(!(VAR_1[0]|VAR_1[1]|VAR_1[2]|VAR_1[3]))
         FUNC_0();
        return(1);
}
