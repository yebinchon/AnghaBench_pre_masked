
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int * FUNC_2 (char*,size_t,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,char*,size_t,char const*) ;
 int FUNC_5 (char*) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(char *VAR_5, size_t VAR_6, const char *VAR_7) {
    int VAR_8;

    if (VAR_6 == 0) {
        VAR_3 = VAR_0;
        return -1;
    }
    if (!FUNC_3(VAR_1)) {

        if (FUNC_2(VAR_5, VAR_6, VAR_4) == ((void*)0)) return -1;
        VAR_8 = FUNC_6(VAR_5);
        if (VAR_8 && VAR_5[VAR_8-1] == '\n') {
            VAR_8--;
            VAR_5[VAR_8] = '\0';
        }
    } else {

        if (FUNC_1(VAR_1) == -1) return -1;
        VAR_8 = FUNC_4(VAR_1, VAR_2, VAR_5, VAR_6, VAR_7);
        FUNC_0(VAR_1);
        FUNC_5("\n");
    }
    return VAR_8;
}
