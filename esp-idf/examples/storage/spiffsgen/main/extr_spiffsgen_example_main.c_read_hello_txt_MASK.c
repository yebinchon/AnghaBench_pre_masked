
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,int,int *) ;
 int FUNC_5 (char*,int ,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    FUNC_1(VAR_0, "Reading hello.txt");


    FILE* VAR_1 = FUNC_3("/spiffs/hello.txt", "r");
    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_0, "Failed to open hello.txt");
        return;
    }

    char VAR_2[64];
    FUNC_5(VAR_2, 0, sizeof(VAR_2));
    FUNC_4(VAR_2, 1, sizeof(VAR_2), VAR_1);
    FUNC_2(VAR_1);


    FUNC_1(VAR_0, "Read from hello.txt: %s", VAR_2);
}
