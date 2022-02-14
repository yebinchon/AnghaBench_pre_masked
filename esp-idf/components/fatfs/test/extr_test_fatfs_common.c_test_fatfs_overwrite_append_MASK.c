
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char const*,char*) ;
 int FUNC_7 (char*,int *) ;
 int FUNC_8 (char*,int,int,int *) ;
 int FUNC_9 (char const*,char*) ;

void FUNC_10(const char* VAR_1)
{

    FUNC_9(VAR_1, "aaaa");


    FILE *VAR_2 = FUNC_6(VAR_1, "a");
    FUNC_3(VAR_2);
    FUNC_2(VAR_0, FUNC_7("bbbb", VAR_2));
    FUNC_0(0, FUNC_5(VAR_2));


    char VAR_3[10] = { 0 };
    FILE *VAR_4 = FUNC_6(VAR_1, "r");
    FUNC_3(VAR_4);
    FUNC_0(8, FUNC_8(VAR_3, 1, 8, VAR_4));
    FUNC_1("aaaabbbb", VAR_3, 8);


    FUNC_0(0, FUNC_8(VAR_3, 1, 8, VAR_4));

    FUNC_0(0, FUNC_5(VAR_4));


    FUNC_9(VAR_1, "cccc");


    VAR_4 = FUNC_6(VAR_1, "r");
    FUNC_3(VAR_4);
    FUNC_4(VAR_3, sizeof(VAR_3));
    FUNC_0(4, FUNC_8(VAR_3, 1, 8, VAR_4));
    FUNC_1("cccc", VAR_3, 4);
    FUNC_0(0, FUNC_5(VAR_4));
}
