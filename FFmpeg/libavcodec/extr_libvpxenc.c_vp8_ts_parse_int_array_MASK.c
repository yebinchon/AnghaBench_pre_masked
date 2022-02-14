
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char*,char**) ;
 int FUNC_1 (char*,int *,int) ;

__attribute__((used)) static void FUNC_2(int *VAR_0, char *VAR_1, size_t VAR_2, int VAR_3)
{
    int VAR_4 = 0;
    char *VAR_5 = ((void*)0);
    char *VAR_6 = FUNC_0(VAR_1, ",", &VAR_5);

    while (VAR_6 && VAR_4 < VAR_3) {
        VAR_0[VAR_4++] = FUNC_1(VAR_6, ((void*)0), 10);
        VAR_6 = FUNC_0(((void*)0), ",", &VAR_5);
    }
}
