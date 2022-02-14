
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int output ;
typedef int input ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char const*,char*) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (char*,int,int,int *) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (char const*,int) ;

void FUNC_10(const char* VAR_2)
{
    int VAR_3 = 0;
    int VAR_4 = 0;

    const char VAR_5[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char VAR_6[sizeof(VAR_5)];

    FILE* VAR_7 = FUNC_4(VAR_2, "wb");

    FUNC_2(VAR_7);
    FUNC_0(FUNC_8(VAR_5), FUNC_5(VAR_7, VAR_5));

    FUNC_0(0, FUNC_3(VAR_7));



    FUNC_0(-1, FUNC_9(VAR_2, FUNC_8(VAR_5) + 1));
    FUNC_0(VAR_1, VAR_0);

    FUNC_0(-1, FUNC_9(VAR_2, -1));
    FUNC_0(VAR_1, VAR_0);



    const char VAR_8[] = "ABCDEFGHIJ";
    VAR_4 = FUNC_8(VAR_8);

    FUNC_0(0, FUNC_9(VAR_2, VAR_4));

    VAR_7 = FUNC_4(VAR_2, "rb");
    FUNC_2(VAR_7);

    FUNC_7(VAR_6, 0, sizeof(VAR_6));
    VAR_3 = FUNC_6(VAR_6, 1, sizeof(VAR_6), VAR_7);

    FUNC_0(VAR_4, VAR_3);
    FUNC_1(VAR_8, VAR_6, VAR_4);

    FUNC_0(0, FUNC_3(VAR_7));




    FUNC_0(-1, FUNC_9(VAR_2, VAR_4 + 1));
    FUNC_0(VAR_0, VAR_1);

    FUNC_0(-1, FUNC_9(VAR_2, FUNC_8(VAR_5)));
    FUNC_0(VAR_0, VAR_1);

    FUNC_0(-1, FUNC_9(VAR_2, FUNC_8(VAR_5) + 1));
    FUNC_0(VAR_0, VAR_1);

    FUNC_0(-1, FUNC_9(VAR_2, -1));
    FUNC_0(VAR_0, VAR_1);



    const char VAR_9[] = "ABCDE";
    VAR_4 = FUNC_8(VAR_9);

    FUNC_0(0, FUNC_9(VAR_2, VAR_4));

    VAR_7 = FUNC_4(VAR_2, "rb");
    FUNC_2(VAR_7);

    FUNC_7(VAR_6, 0, sizeof(VAR_6));
    VAR_3 = FUNC_6(VAR_6, 1, sizeof(VAR_6), VAR_7);

    FUNC_0(VAR_4, VAR_3);
    FUNC_1(VAR_9, VAR_6, VAR_4);

    FUNC_0(0, FUNC_3(VAR_7));
}
