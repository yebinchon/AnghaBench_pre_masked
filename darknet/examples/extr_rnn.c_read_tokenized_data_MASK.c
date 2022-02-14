
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int* FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int *,char*,int*) ;
 int* FUNC_4 (int*,size_t) ;

int *FUNC_5(char *VAR_0, size_t *VAR_1)
{
    size_t VAR_2 = 512;
    size_t VAR_3 = 0;
    FILE *VAR_4 = FUNC_2(VAR_0, "r");
    int *VAR_5 = FUNC_0(VAR_2, sizeof(int));
    int VAR_6, VAR_7;
    VAR_7 = FUNC_3(VAR_4, "%d", &VAR_6);
    while(VAR_7 == 1){
        ++VAR_3;
        if(VAR_3 > VAR_2){
            VAR_2 = VAR_2*2;
            VAR_5 = FUNC_4(VAR_5, VAR_2*sizeof(int));
        }
        VAR_5[VAR_3-1] = VAR_6;
        VAR_7 = FUNC_3(VAR_4, "%d", &VAR_6);
    }
    FUNC_1(VAR_4);
    VAR_5 = FUNC_4(VAR_5, VAR_3*sizeof(int));
    *VAR_1 = VAR_3;
    return VAR_5;
}
