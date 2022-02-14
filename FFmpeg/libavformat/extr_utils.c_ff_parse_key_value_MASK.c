
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* ff_parse_key_val_cb ) (void*,char const*,int,char**,int*) ;


 scalar_t__ FUNC_0 (char const) ;
 char* FUNC_1 (char const*,char) ;

void FUNC_2(const char *VAR_0, ff_parse_key_val_cb VAR_1,
                        void *VAR_2)
{
    const char *VAR_3 = VAR_0;


    for (;;) {
        const char *VAR_4;
        char *VAR_5 = ((void*)0), *VAR_6;
        int VAR_7, VAR_8 = 0;


        while (*VAR_3 && (FUNC_0(*VAR_3) || *VAR_3 == ','))
            VAR_3++;
        if (!*VAR_3)
            break;

        VAR_4 = VAR_3;

        if (!(VAR_3 = FUNC_1(VAR_4, '=')))
            break;
        VAR_3++;
        VAR_7 = VAR_3 - VAR_4;

        VAR_1(VAR_2, VAR_4, VAR_7, &VAR_5, &VAR_8);
        VAR_6 = VAR_5 + VAR_8 - 1;

        if (*VAR_3 == '\"') {
            VAR_3++;
            while (*VAR_3 && *VAR_3 != '\"') {
                if (*VAR_3 == '\\') {
                    if (!VAR_3[1])
                        break;
                    if (VAR_5 && VAR_5 < VAR_6)
                        *VAR_5++ = VAR_3[1];
                    VAR_3 += 2;
                } else {
                    if (VAR_5 && VAR_5 < VAR_6)
                        *VAR_5++ = *VAR_3;
                    VAR_3++;
                }
            }
            if (*VAR_3 == '\"')
                VAR_3++;
        } else {
            for (; *VAR_3 && !(FUNC_0(*VAR_3) || *VAR_3 == ','); VAR_3++)
                if (VAR_5 && VAR_5 < VAR_6)
                    *VAR_5++ = *VAR_3;
        }
        if (VAR_5)
            *VAR_5 = 0;
    }
}
