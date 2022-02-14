
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (char*,int,size_t,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;

char *FUNC_4(FILE *VAR_0)
{
    if(FUNC_0(VAR_0)) return 0;
    size_t VAR_1 = 96;
    char *VAR_2 = FUNC_3(VAR_1*sizeof(char));
    if(VAR_1 != FUNC_1(VAR_2, sizeof(char), VAR_1, VAR_0)){
        FUNC_2(VAR_2);
        return 0;
    }

    return VAR_2;
}
