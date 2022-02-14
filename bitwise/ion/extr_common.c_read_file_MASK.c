
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,long,int,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int ,int ) ;
 long FUNC_5 (int *) ;
 char* FUNC_6 (long) ;

char *FUNC_7(const char *VAR_2) {
    FILE *VAR_3 = FUNC_1(VAR_2, "rb");
    if (!VAR_3) {
        return ((void*)0);
    }
    FUNC_4(VAR_3, 0, VAR_0);
    long VAR_4 = FUNC_5(VAR_3);
    FUNC_4(VAR_3, 0, VAR_1);
    char *VAR_5 = FUNC_6(VAR_4 + 1);
    if (VAR_4 && FUNC_2(VAR_5, VAR_4, 1, VAR_3) != 1) {
        FUNC_0(VAR_3);
        FUNC_3(VAR_5);
        return ((void*)0);
    }
    FUNC_0(VAR_3);
    VAR_5[VAR_4] = 0;
    return VAR_5;
}
