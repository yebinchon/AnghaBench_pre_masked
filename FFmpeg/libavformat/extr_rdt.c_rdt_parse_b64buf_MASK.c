
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char*,char const*,unsigned int) ;
 unsigned char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static unsigned char *
FUNC_3 (unsigned int *VAR_1, const char *VAR_2)
{
    unsigned char *VAR_3;
    int VAR_4 = FUNC_2(VAR_2);
    if (*VAR_2 == '\"') {
        VAR_2++;
        VAR_4 -= 2;
    }
    *VAR_1 = VAR_4 * 3 / 4;
    VAR_3 = FUNC_1(*VAR_1 + VAR_0);
    if (!VAR_3)
        return ((void*)0);
    FUNC_0(VAR_3, VAR_2, *VAR_1);
    return VAR_3;
}
