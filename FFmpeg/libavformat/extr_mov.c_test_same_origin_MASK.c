
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int src_proto ;
typedef int src_host ;
typedef int src_auth ;
typedef int ref_proto ;
typedef int ref_host ;
typedef int ref_auth ;


 int FUNC_0 (char*,int,char*,int,char*,int,int*,int *,int ,char const*) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, const char *VAR_1) {
    char VAR_2[64];
    char VAR_3[64];
    char VAR_4[256];
    char VAR_5[256];
    char VAR_6[256];
    char VAR_7[256];
    int VAR_8=-1;
    int VAR_9=-1;

    FUNC_0(VAR_2, sizeof(VAR_2), VAR_4, sizeof(VAR_4), VAR_6, sizeof(VAR_6), &VAR_8, ((void*)0), 0, VAR_0);
    FUNC_0(VAR_3, sizeof(VAR_3), VAR_5, sizeof(VAR_5), VAR_7, sizeof(VAR_7), &VAR_9, ((void*)0), 0, VAR_1);

    if (FUNC_2(VAR_0) == 0) {
        return -1;
    } else if (FUNC_2(VAR_4) + 1 >= sizeof(VAR_4) ||
        FUNC_2(VAR_5) + 1 >= sizeof(VAR_5) ||
        FUNC_2(VAR_6) + 1 >= sizeof(VAR_6) ||
        FUNC_2(VAR_7) + 1 >= sizeof(VAR_7)) {
        return 0;
    } else if (FUNC_1(VAR_2, VAR_3) ||
               FUNC_1(VAR_4, VAR_5) ||
               FUNC_1(VAR_6, VAR_7) ||
               VAR_8 != VAR_9) {
        return 0;
    } else
        return 1;
}
