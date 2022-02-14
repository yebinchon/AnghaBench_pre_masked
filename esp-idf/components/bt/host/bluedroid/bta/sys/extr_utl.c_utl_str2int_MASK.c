
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT32 ;
typedef int INT16 ;



INT16 FUNC_0(const char *VAR_0)
{
    INT32 VAR_1 = 0;

    for (; *VAR_0 == ' ' && *VAR_0 != 0; VAR_0++);

    if (*VAR_0 == 0) {
        return -1;
    }

    for (;;) {
        if ((*VAR_0 < '0') || (*VAR_0 > '9')) {
            return -1;
        }

        VAR_1 += (INT32) (*VAR_0++ - '0');

        if (VAR_1 > 32767) {
            return -1;
        }

        if (*VAR_0 == 0) {
            return (INT16) VAR_1;
        } else {
            VAR_1 *= 10;
        }
    }
}
