
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,char const*) ;
 int FUNC_3 (char*,int ,char const*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

char *FUNC_6(const char *VAR_2) {
    char *VAR_3 = FUNC_0(1, VAR_0);
    int VAR_4 = 0;
    if (!VAR_1) {
        VAR_4 = FUNC_3(VAR_3, VAR_0, VAR_2);
    } else {
        VAR_4 = FUNC_2(VAR_3, VAR_0, VAR_2);
    }
    if (VAR_4 > 0) {
        FUNC_4(VAR_3);
        VAR_4 = FUNC_5(VAR_3);
    }
    if (VAR_4 <= 0) {
        FUNC_1(VAR_3);
        return ((void*)0);
    }
    return VAR_3;
}
