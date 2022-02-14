
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(
 char *VAR_0,
 char **VAR_1)
{
        int VAR_2;
        int VAR_3;

        VAR_2 = 0;
        VAR_3 = 0;
        for(;;VAR_0++) {
                switch(*VAR_0) {
                case ' ':
                case '\t':
                        continue;
                case '-':
                        VAR_3++;
                case '+':
                        VAR_0++;
                }
                break;
        }
        while(*VAR_0 >= '0' && *VAR_0 <= '9')
                VAR_2 = VAR_2*10 + *VAR_0++ - '0';


        if ( VAR_1 )
                *VAR_1 = VAR_0;

        return(VAR_3? -VAR_2: VAR_2);
}
