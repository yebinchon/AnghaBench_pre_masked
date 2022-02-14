
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Buffer ;


 char* FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char) ;

char *FUNC_3(char *VAR_0, int VAR_1) {
    Buffer *VAR_2 = FUNC_1();
    for (int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
        FUNC_2(VAR_2, VAR_0[VAR_3]);
    return FUNC_0(VAR_2);
}
