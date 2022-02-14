
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,char*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,int*,int) ;

int FUNC_6(char *VAR_2) {
    int VAR_3;
    int VAR_4;
    VAR_4 = FUNC_3();
    if(VAR_4 == -1)
    {
        FUNC_4("could not fork! \n");
        return 1;
    }
    else if(VAR_4 == 0)
    {
        FUNC_2("desktop-file-validate", "desktop-file-validate", VAR_2, ((void*)0));
    }
    else
    {
        FUNC_5(VAR_4, &VAR_3, VAR_1 | VAR_0);
        if(FUNC_1(VAR_3)){
            return(FUNC_0(VAR_3));
        }
    }
    return -1;
}
