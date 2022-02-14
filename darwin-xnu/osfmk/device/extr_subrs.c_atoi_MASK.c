
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(const char *VAR_0)
{
        int VAR_1;

        for (VAR_1 = 0; ('0' <= *VAR_0) && (*VAR_0 <= '9'); VAR_0++)
                VAR_1 = (VAR_1 * 10) + (*VAR_0 - '0');

        return( VAR_1 );
}
