
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name_src ;
typedef int name_dst ;
typedef int name_copy ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,char*) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,int,char*,char const*) ;
 int FUNC_12 (char*) ;

void FUNC_13(const char* VAR_2)
{
    char VAR_3[64];
    char VAR_4[64];
    char VAR_5[64];
    FUNC_11(VAR_3, sizeof(VAR_3), "%s_cpy.txt", VAR_2);
    FUNC_11(VAR_4, sizeof(VAR_4), "%s_dst.txt", VAR_2);
    FUNC_11(VAR_5, sizeof(VAR_5), "%s_src.txt", VAR_2);

    FUNC_12(VAR_3);
    FUNC_12(VAR_4);
    FUNC_12(VAR_5);

    FILE* VAR_6 = FUNC_5(VAR_5, "w+");
    FUNC_2(VAR_6);
    const char* VAR_7 = "0123456789";
    for (int VAR_8 = 0; VAR_8 < 4000; ++VAR_8) {
        FUNC_1(VAR_0, FUNC_6(VAR_7, VAR_6));
    }
    FUNC_0(0, FUNC_4(VAR_6));
    FUNC_0(0, FUNC_9(VAR_5, VAR_3));
    FILE* VAR_9 = FUNC_5(VAR_3, "r");
    FUNC_2(VAR_9);
    FUNC_0(0, FUNC_7(VAR_9, 0, VAR_1));
    FUNC_0(40000, FUNC_8(VAR_9));
    FUNC_0(0, FUNC_4(VAR_9));
    FUNC_0(0, FUNC_10(VAR_3, VAR_4));
    FUNC_3(FUNC_5(VAR_3, "r"));
    FILE* VAR_10 = FUNC_5(VAR_4, "r");
    FUNC_2(VAR_10);
    FUNC_0(0, FUNC_7(VAR_10, 0, VAR_1));
    FUNC_0(40000, FUNC_8(VAR_10));
    FUNC_0(0, FUNC_4(VAR_10));
}
