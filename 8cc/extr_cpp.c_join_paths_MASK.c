
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Vector ;
typedef int Buffer ;


 char* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ) ;
 int * FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static char *FUNC_6(Vector *VAR_0) {
    Buffer *VAR_1 = FUNC_2();
    for (int VAR_2 = 0; VAR_2 < FUNC_5(VAR_0); VAR_2++)
        FUNC_1(VAR_1, "%s", FUNC_3(FUNC_4(VAR_0, VAR_2)));
    return FUNC_0(VAR_1);
}
