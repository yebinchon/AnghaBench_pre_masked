
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const* const) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char const* const) ;
 size_t FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,int) ;

bool FUNC_5(char* VAR_0, const char* const VAR_1, char const* const VAR_2, const size_t VAR_3) {
    const size_t VAR_4 = 6;


    char* VAR_5 = FUNC_1("TARGET_APPIMAGE");

    char* VAR_6;
    if (VAR_5 != ((void*)0)) {
        VAR_6 = FUNC_0(VAR_5);
    } else {
        VAR_6 = FUNC_0(VAR_1);
    }

    size_t VAR_7 = FUNC_3(VAR_6);

    if (VAR_7 > VAR_4) {
        VAR_7 = VAR_4;
    }

    FUNC_2(VAR_0, VAR_2);
    FUNC_4(VAR_0 + VAR_3, "/.mount_", 8);
    FUNC_4(VAR_0 + VAR_3 + 8, VAR_6, VAR_7);
    FUNC_4(VAR_0+VAR_3+8+VAR_7, "XXXXXX", 6);
    VAR_0[VAR_3+8+VAR_7+6] = 0;
}
