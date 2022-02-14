
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int list ;


 int FUNC_0 (int *,char*) ;
 int * FUNC_1 () ;
 size_t FUNC_2 (char*) ;

list *FUNC_3(char *VAR_0, char VAR_1)
{
    size_t VAR_2;
    size_t VAR_3 = FUNC_2(VAR_0);
    list *VAR_4 = FUNC_1();
    FUNC_0(VAR_4, VAR_0);
    for(VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2){
        if(VAR_0[VAR_2] == VAR_1){
            VAR_0[VAR_2] = '\0';
            FUNC_0(VAR_4, &(VAR_0[VAR_2+1]));
        }
    }
    return VAR_4;
}
