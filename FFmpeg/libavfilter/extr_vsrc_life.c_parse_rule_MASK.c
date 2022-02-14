
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int ,char*,char const*) ;
 scalar_t__ FUNC_2 (char*,char const) ;
 long FUNC_3 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_4(uint16_t *VAR_2, uint16_t *VAR_3,
                      const char *VAR_4, void *VAR_5)
{
    char *VAR_6;
    const char *VAR_7 = VAR_4;
    *VAR_2 = 0;
    *VAR_3 = 0;

    if (FUNC_2("bBsS", *VAR_7)) {


        do {
            uint16_t *VAR_8 = (*VAR_7 == 'b' || *VAR_7 == 'B') ? VAR_2 : VAR_3;
            VAR_7++;
            while (*VAR_7 >= '0' && *VAR_7 <= '8') {
                *VAR_8 += 1<<(*VAR_7 - '0');
                VAR_7++;
            }
            if (*VAR_7 != '/')
                break;
            VAR_7++;
        } while (FUNC_2("bBsS", *VAR_7));

        if (*VAR_7)
            goto error;
    } else {


        long int VAR_9 = FUNC_3(VAR_4, &VAR_6, 10);
        if (*VAR_6)
            goto error;
        *VAR_2 = ((1<<9)-1) & VAR_9;
        *VAR_3 = VAR_9 >> 9;
    }

    return 0;

error:
    FUNC_1(VAR_5, VAR_0, "Invalid rule code '%s' provided\n", VAR_4);
    return FUNC_0(VAR_1);
}
