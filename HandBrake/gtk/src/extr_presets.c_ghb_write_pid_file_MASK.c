
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;
typedef int gchar ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*,int *,int) ;
 int FUNC_5 () ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (int,int ,int ) ;
 int FUNC_8 (int *,int,int) ;

void
FUNC_9()
{

    gchar *VAR_5, *VAR_6;
    pid_t VAR_7;
    FILE *VAR_8;
    int VAR_9;

    VAR_7 = FUNC_5();
    VAR_5 = FUNC_6(((void*)0));
    VAR_6 = FUNC_4 ("%s/ghb.pid.%d", VAR_5, VAR_7);
    VAR_8 = FUNC_2(VAR_6, "w");

    if (VAR_8 != ((void*)0))
    {
        FUNC_1(VAR_8, "%d\n", VAR_7);
        FUNC_0(VAR_8);
    }

    VAR_9 = FUNC_8(VAR_6, VAR_2|VAR_1, VAR_3|VAR_4);
    if (VAR_9 >= 0)
    {
        FUNC_7(VAR_9, VAR_0, 0);
    }

    FUNC_3(VAR_5);
    FUNC_3(VAR_6);

}
