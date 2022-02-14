
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;


 int FUNC_0 (int *,char*,char*) ;
 size_t FUNC_1 (char*) ;

int FUNC_2(char *VAR_0, list *VAR_1)
{
    size_t VAR_2;
    size_t VAR_3 = FUNC_1(VAR_0);
    char *VAR_4 = 0;
    for(VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2){
        if(VAR_0[VAR_2] == '='){
            VAR_0[VAR_2] = '\0';
            VAR_4 = VAR_0+VAR_2+1;
            break;
        }
    }
    if(VAR_2 == VAR_3-1) return 0;
    char *VAR_5 = VAR_0;
    FUNC_0(VAR_1, VAR_5, VAR_4);
    return 1;
}
