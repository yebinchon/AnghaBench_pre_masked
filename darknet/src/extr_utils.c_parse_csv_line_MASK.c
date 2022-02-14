
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 () ;

list *FUNC_3(char *VAR_0)
{
    list *VAR_1 = FUNC_2();
    char *VAR_2, *VAR_3;
    int VAR_4 = 0;
    for(VAR_2 = VAR_0, VAR_3 = VAR_0; *VAR_2 != '\0'; ++VAR_2){
        if(*VAR_2 == '"') VAR_4 = !VAR_4;
        else if(*VAR_2 == ',' && !VAR_4){
            *VAR_2 = '\0';
            FUNC_1(VAR_1, FUNC_0(VAR_3));
            VAR_3 = VAR_2+1;
        }
    }
    FUNC_1(VAR_1, FUNC_0(VAR_3));
    return VAR_1;
}
