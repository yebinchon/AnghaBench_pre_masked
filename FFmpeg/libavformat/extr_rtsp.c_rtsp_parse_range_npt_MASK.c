
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,char*) ;
 scalar_t__ FUNC_1 (int *,char*,int) ;
 int FUNC_2 (char const*,char*,char const**) ;
 int FUNC_3 (char*,int,char*,char const**) ;
 int FUNC_4 (char const*,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3, int64_t *VAR_4, int64_t *VAR_5)
{
    char VAR_6[256];

    VAR_3 += FUNC_4(VAR_3, VAR_2);
    if (!FUNC_2(VAR_3, "npt=", &VAR_3))
        return;

    *VAR_4 = VAR_1;
    *VAR_5 = VAR_1;

    FUNC_3(VAR_6, sizeof(VAR_6), "-", &VAR_3);
    if (FUNC_1(VAR_4, VAR_6, 1) < 0)
        return;
    if (*VAR_3 == '-') {
        VAR_3++;
        FUNC_3(VAR_6, sizeof(VAR_6), "-", &VAR_3);
        if (FUNC_1(VAR_5, VAR_6, 1) < 0)
            FUNC_0(((void*)0), VAR_0, "Failed to parse interval end specification '%s'\n", VAR_6);
    }
}
