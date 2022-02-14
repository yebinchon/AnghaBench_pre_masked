
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name_src ;
typedef int name_dst ;
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
 int FUNC_10 (char*,int,char*,char const*) ;
 int FUNC_11 (char*) ;

void FUNC_12(const char* VAR_2)
{
    char VAR_3[64];
    char VAR_4[64];
    FUNC_10(VAR_3, sizeof(VAR_3), "%s_dst.txt", VAR_2);
    FUNC_10(VAR_4, sizeof(VAR_4), "%s_src.txt", VAR_2);

    FUNC_11(VAR_3);
    FUNC_11(VAR_4);

    FILE* VAR_5 = FUNC_5(VAR_4, "w+");
    FUNC_2(VAR_5);
    const char* VAR_6 = "0123456789";
    for (int VAR_7 = 0; VAR_7 < 400; ++VAR_7) {
        FUNC_1(VAR_0, FUNC_6(VAR_6, VAR_5));
    }
    FUNC_0(0, FUNC_4(VAR_5));
    FUNC_0(0, FUNC_9(VAR_4, VAR_3));
    FUNC_3(FUNC_5(VAR_4, "r"));
    FILE* VAR_8 = FUNC_5(VAR_3, "r");
    FUNC_2(VAR_8);
    FUNC_0(0, FUNC_7(VAR_8, 0, VAR_1));
    FUNC_0(4000, FUNC_8(VAR_8));
    FUNC_0(0, FUNC_4(VAR_8));
}
