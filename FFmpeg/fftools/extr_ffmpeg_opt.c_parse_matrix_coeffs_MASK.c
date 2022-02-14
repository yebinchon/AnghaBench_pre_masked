
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ,char*,char const*,int) ;
 int FUNC_2 (int) ;
 char* FUNC_3 (char const*,char) ;

__attribute__((used)) static void FUNC_4(uint16_t *VAR_1, const char *VAR_2)
{
    int VAR_3;
    const char *VAR_4 = VAR_2;
    for (VAR_3 = 0;; VAR_3++) {
        VAR_1[VAR_3] = FUNC_0(VAR_4);
        if (VAR_3 == 63)
            break;
        VAR_4 = FUNC_3(VAR_4, ',');
        if (!VAR_4) {
            FUNC_1(((void*)0), VAR_0, "Syntax error in matrix \"%s\" at coeff %d\n", VAR_2, VAR_3);
            FUNC_2(1);
        }
        VAR_4++;
    }
}
