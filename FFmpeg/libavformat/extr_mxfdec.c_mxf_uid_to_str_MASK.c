
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* UID ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_3(UID VAR_1, char **VAR_2)
{
    int VAR_3;
    char *VAR_4;
    VAR_4 = *VAR_2 = FUNC_1(sizeof(UID) * 2 + 4 + 1);
    if (!VAR_4)
        return FUNC_0(VAR_0);
    for (VAR_3 = 0; VAR_3 < sizeof(UID); VAR_3++) {
        FUNC_2(VAR_4, 2 + 1, "%.2x", VAR_1[VAR_3]);
        VAR_4 += 2;
        if (VAR_3 == 3 || VAR_3 == 5 || VAR_3 == 7 || VAR_3 == 9) {
            FUNC_2(VAR_4, 1 + 1, "-");
            VAR_4++;
        }
    }
    return 0;
}
