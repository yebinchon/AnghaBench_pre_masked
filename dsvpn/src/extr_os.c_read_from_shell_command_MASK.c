
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int VAR_0 ;
 char* FUNC_4 (char*,char) ;

__attribute__((used)) static char *FUNC_5(char *VAR_1, size_t VAR_2, const char *VAR_3)
{
    FILE *VAR_4;
    char *VAR_5;

    if ((VAR_4 = FUNC_3(VAR_3, "r")) == ((void*)0)) {
        return ((void*)0);
    }
    if (FUNC_0(VAR_1, (int) VAR_2, VAR_4) == ((void*)0)) {
        FUNC_2(VAR_4);
        FUNC_1(VAR_0, "Command [%s] failed]\n", VAR_3);
        return ((void*)0);
    }
    if ((VAR_5 = FUNC_4(VAR_1, '\n')) != ((void*)0)) {
        *VAR_5 = 0;
    }
    (void) FUNC_2(VAR_4);

    return *VAR_1 == 0 ? ((void*)0) : VAR_1;
}
