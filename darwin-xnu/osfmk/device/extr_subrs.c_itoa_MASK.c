
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
char *
FUNC_0(
 int VAR_0,
 char *VAR_1)
{
        char VAR_2[11];
        char *VAR_3;
        char *VAR_4 = VAR_1;

        if (VAR_0 == 0) {
            *VAR_4++ = '0';
        }
        else {
            VAR_3 = VAR_2;
            while (VAR_0) {
                *VAR_3++ = '0' + VAR_0 % 10;
                VAR_0 /= 10;
            }
            while (VAR_3 != VAR_2) {
                *VAR_4++ = *--VAR_3;
            }
        }
        *VAR_4++ = '\0';

 return VAR_1;
}
