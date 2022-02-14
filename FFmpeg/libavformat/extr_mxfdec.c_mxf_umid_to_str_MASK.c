
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* UID ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_3(UID VAR_1, UID VAR_2, char **VAR_3)
{
    int VAR_4;
    char *VAR_5;
    VAR_5 = *VAR_3 = FUNC_1(sizeof(UID) * 4 + 2 + 1);
    if (!VAR_5)
        return FUNC_0(VAR_0);
    FUNC_2(VAR_5, 2 + 1, "0x");
    VAR_5 += 2;
    for (VAR_4 = 0; VAR_4 < sizeof(UID); VAR_4++) {
        FUNC_2(VAR_5, 2 + 1, "%.2X", VAR_1[VAR_4]);
        VAR_5 += 2;

    }
    for (VAR_4 = 0; VAR_4 < sizeof(UID); VAR_4++) {
        FUNC_2(VAR_5, 2 + 1, "%.2X", VAR_2[VAR_4]);
        VAR_5 += 2;
    }
    return 0;
}
