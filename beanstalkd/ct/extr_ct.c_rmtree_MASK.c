
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,char*) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,char*,char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_7 (char*,char*) ;
 char* FUNC_8 (int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static void
FUNC_11(char *VAR_4)
{
    int VAR_5 = FUNC_10(VAR_4);
    if (VAR_5 == 0 || VAR_2 == VAR_0) {
        return;
    }
    int VAR_6 = VAR_2;

    DIR *VAR_7 = FUNC_2(VAR_4);
    if (!VAR_7) {
        if (VAR_2 == VAR_1) {
            FUNC_1(VAR_3, "ct: unlink: %s\n", FUNC_8(VAR_6));
        } else {
            FUNC_3("ct: opendir");
        }
        FUNC_1(VAR_3, "ct: path %s\n", VAR_4);
        return;
    }
    struct dirent *VAR_8;
    while ((VAR_8 = FUNC_4(VAR_7))) {
        if (FUNC_7(VAR_8->d_name, ".") == 0 || FUNC_7(VAR_8->d_name, "..") == 0) {
            continue;
        }
        int VAR_9 = FUNC_9(VAR_4) + 1 + FUNC_9(VAR_8->d_name);
        char VAR_10[VAR_9+1];
        FUNC_6(VAR_10, "%s/%s", VAR_4, VAR_8->d_name);
        FUNC_11(VAR_10);
    }
    FUNC_0(VAR_7);
    VAR_5 = FUNC_5(VAR_4);
    if (VAR_5 == -1) {
        FUNC_3("ct: rmdir");
        FUNC_1(VAR_3, "ct: path %s\n", VAR_4);
    }
}
