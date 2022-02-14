
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 char* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,char*) ;
 int FUNC_4 (int ,char*,char const*,int,char*) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_2 ;
 char* FUNC_9 (int) ;

char *FUNC_10(const char *VAR_3) {
    FILE *VAR_4 = FUNC_3(VAR_3, "rb");
    if (!VAR_4) {
        FUNC_4(VAR_2, "fopen %s failed: %d %s\n", VAR_3, VAR_1, FUNC_9(VAR_1));
        FUNC_1(1);
    }
    FUNC_6(VAR_4, 0, VAR_0);
    int VAR_5 = FUNC_7(VAR_4);
    FUNC_8(VAR_4);
    char *VAR_6 = FUNC_0(VAR_5 + 1, sizeof(char));
    FUNC_5(VAR_6, 1, VAR_5, VAR_4);
    FUNC_2(VAR_4);
    return VAR_6;
}
