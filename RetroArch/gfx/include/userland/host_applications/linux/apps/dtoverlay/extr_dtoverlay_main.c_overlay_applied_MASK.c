
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int status ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (char*,int,int,int *) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (char*,char const*) ;

__attribute__((used)) static int FUNC_6(const char *VAR_0)
{
    char VAR_1[7] = { '\0' };
    const char *VAR_2 = FUNC_5("%s/status", VAR_0);
    FILE *VAR_3 = FUNC_1(VAR_2, "r");
    int VAR_4 = 0;
    if (VAR_3)
    {
 VAR_4 = FUNC_2(VAR_1, 1, sizeof(VAR_1), VAR_3);
 FUNC_0(VAR_3);
    }
    FUNC_3(VAR_2);
    return (VAR_4 == sizeof(VAR_1)) &&
 (FUNC_4(VAR_1, "applied", sizeof(VAR_1)) == 0);
}
