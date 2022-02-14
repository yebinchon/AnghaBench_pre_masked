
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,char) ;

__attribute__((used)) static int FUNC_4(char **VAR_1, uint64_t *VAR_2, char VAR_3)
{
    char *VAR_4 = FUNC_3(*VAR_1, VAR_3);
    if (!VAR_4 && VAR_3 == '-')
        return FUNC_0(VAR_0);
    *VAR_2 = FUNC_1(*VAR_1);
    if (FUNC_2(*VAR_2) != 1)
        return FUNC_0(VAR_0);
    *VAR_1 = VAR_4;
    return 0;
}
