
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (char*,size_t,int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,size_t) ;
 char* FUNC_6 (char*,size_t) ;
 size_t FUNC_7 (char*) ;

char *FUNC_8(FILE *VAR_1)
{
    if(FUNC_0(VAR_1)) return 0;
    size_t VAR_2 = 512;
    char *VAR_3 = FUNC_3(VAR_2*sizeof(char));
    if(!FUNC_1(VAR_3, VAR_2, VAR_1)){
        FUNC_2(VAR_3);
        return 0;
    }

    size_t VAR_4 = FUNC_7(VAR_3);

    while((VAR_3[VAR_4-1] != '\n') && !FUNC_0(VAR_1)){
        if(VAR_4 == VAR_2-1){
            VAR_2 *= 2;
            VAR_3 = FUNC_6(VAR_3, VAR_2*sizeof(char));
            if(!VAR_3) {
                FUNC_5("%ld\n", VAR_2);
                FUNC_4();
            }
        }
        size_t VAR_5 = VAR_2-VAR_4;
        if(VAR_5 > VAR_0) VAR_5 = VAR_0-1;
        FUNC_1(&VAR_3[VAR_4], VAR_5, VAR_1);
        VAR_4 = FUNC_7(VAR_3);
    }
    if(VAR_3[VAR_4-1] == '\n') VAR_3[VAR_4-1] = '\0';

    return VAR_3;
}
