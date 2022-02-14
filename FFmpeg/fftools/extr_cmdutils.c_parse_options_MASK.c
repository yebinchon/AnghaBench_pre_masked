
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int OptionDef ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,char const*,char*,int const*) ;
 int FUNC_2 (int*,char***) ;

void FUNC_3(void *VAR_0, int VAR_1, char **VAR_2, const OptionDef *VAR_3,
                   void (*VAR_4)(void *, const char*))
{
    const char *VAR_5;
    int VAR_6, VAR_7 = 1, VAR_8;


    FUNC_2(&VAR_1, &VAR_2);


    VAR_6 = 1;
    while (VAR_6 < VAR_1) {
        VAR_5 = VAR_2[VAR_6++];

        if (VAR_7 && VAR_5[0] == '-' && VAR_5[1] != '\0') {
            if (VAR_5[1] == '-' && VAR_5[2] == '\0') {
                VAR_7 = 0;
                continue;
            }
            VAR_5++;

            if ((VAR_8 = FUNC_1(VAR_0, VAR_5, VAR_2[VAR_6], VAR_3)) < 0)
                FUNC_0(1);
            VAR_6 += VAR_8;
        } else {
            if (VAR_4)
                VAR_4(VAR_0, VAR_5);
        }
    }
}
