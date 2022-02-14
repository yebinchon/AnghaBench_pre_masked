
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,char*,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,...) ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,int*,int ) ;

__attribute__((used)) static int FUNC_5(int VAR_1, char *VAR_2[])
{
    int VAR_3;
    char VAR_4[8];
    int VAR_5;

    if (VAR_1 != 2) {
        return -1;
    }

    FUNC_2(VAR_2[1], "%s", VAR_4);
    FUNC_0("You entered", "%s %s", VAR_2[0], VAR_2[1]);
    VAR_5 = VAR_4[0];

    if (FUNC_1(VAR_5)) {
        if ((FUNC_3(VAR_4, "Y") == 0) || (FUNC_3(VAR_4, "Yes") == 0)) {
            VAR_3 = 1;
            FUNC_4(VAR_0, &VAR_3, 0);
        } else {
            VAR_3 = 0;
            FUNC_4(VAR_0, &VAR_3, 0);
        }
    } else {
        FUNC_2(VAR_4, "%d", &VAR_3);
        FUNC_4(VAR_0, &VAR_3, 0);
    }

    return 0;
}
