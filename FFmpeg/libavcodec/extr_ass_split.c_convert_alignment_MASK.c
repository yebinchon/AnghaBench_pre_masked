
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*,int*) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const char *VAR_1, int VAR_2)
{
    int VAR_3;
    if (FUNC_0(VAR_1, "%d", &VAR_3) == 1) {

        *(int *)VAR_0 = VAR_3 + ((VAR_3&4) >> 1) - 5*!!(VAR_3&8);
        return 1;
    }
    return 0;
}
