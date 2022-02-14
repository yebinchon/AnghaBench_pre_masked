
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char const*,int,int) ;
 int VAR_8 ;
 int * FUNC_1 (int,char const*) ;

FILE *FUNC_2(const char *VAR_9, const char *VAR_10)
{
    int VAR_11;
    int VAR_12;
    const char *VAR_13 = VAR_10;

    switch (*VAR_13++) {
    case 'r': VAR_12 = VAR_4; break;
    case 'w': VAR_12 = VAR_3|VAR_7|VAR_6; break;
    case 'a': VAR_12 = VAR_3|VAR_7|VAR_1; break;
    default :
        VAR_8 = VAR_0;
        return ((void*)0);
    }
    while (*VAR_13) {
        if (*VAR_13 == '+') {
            VAR_12 &= ~(VAR_4 | VAR_7);
            VAR_12 |= VAR_5;
        } else if (*VAR_13 == 'b') {



        } else if (*VAR_13) {
            VAR_8 = VAR_0;
            return ((void*)0);
        }
        VAR_13++;
    }
    VAR_11 = FUNC_0(VAR_9, VAR_12, 0666);
    if (VAR_11 == -1)
        return ((void*)0);
    return FUNC_1(VAR_11, VAR_10);
}
