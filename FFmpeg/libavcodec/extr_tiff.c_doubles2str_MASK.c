
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 unsigned int FUNC_2 (char*,int,char*,double,char const*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static char *FUNC_4(double *VAR_1, int VAR_2, const char *VAR_3)
{
    int VAR_4;
    char *VAR_5, *VAR_6;
    uint64_t VAR_7;
    if (!VAR_3) VAR_3 = ", ";
    VAR_7 = 24LL + FUNC_3(VAR_3);
    if (VAR_2 >= (VAR_0 - 1)/VAR_7)
        return ((void*)0);
    VAR_5 = FUNC_1(VAR_7 * VAR_2 + 1);
    if (!VAR_5)
        return ((void*)0);
    VAR_6 = VAR_5;
    VAR_5[0] = '\0';
    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
        unsigned VAR_8 = FUNC_2(VAR_5, VAR_7, "%.15g%s", VAR_1[VAR_4], VAR_3);
        if(VAR_8 >= VAR_7) {
            FUNC_0(VAR_6);
            return ((void*)0);
        }
        VAR_5 += VAR_8;
    }
    VAR_6[FUNC_3(VAR_6) - FUNC_3(VAR_3)] = '\0';
    return VAR_6;
}
