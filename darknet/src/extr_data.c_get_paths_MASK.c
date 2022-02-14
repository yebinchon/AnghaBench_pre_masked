
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*) ;
 int * FUNC_5 () ;

list *FUNC_6(char *VAR_0)
{
    char *VAR_1;
    FILE *VAR_2 = FUNC_3(VAR_0, "r");
    if(!VAR_2) FUNC_2(VAR_0);
    list *VAR_3 = FUNC_5();
    while((VAR_1=FUNC_1(VAR_2))){
        FUNC_4(VAR_3, VAR_1);
    }
    FUNC_0(VAR_2);
    return VAR_3;
}
