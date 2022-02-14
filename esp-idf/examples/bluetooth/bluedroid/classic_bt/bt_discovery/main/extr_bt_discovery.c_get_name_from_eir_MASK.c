
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t* FUNC_0 (size_t*,int ,size_t*) ;
 int FUNC_1 (size_t*,size_t*,size_t) ;

__attribute__((used)) static bool FUNC_2(uint8_t *VAR_3, uint8_t *VAR_4, uint8_t *VAR_5)
{
    uint8_t *VAR_6 = ((void*)0);
    uint8_t VAR_7 = 0;

    if (!VAR_3) {
        return 0;
    }

    VAR_6 = FUNC_0(VAR_3, VAR_0, &VAR_7);
    if (!VAR_6) {
        VAR_6 = FUNC_0(VAR_3, VAR_1, &VAR_7);
    }

    if (VAR_6) {
        if (VAR_7 > VAR_2) {
            VAR_7 = VAR_2;
        }

        if (VAR_4) {
            FUNC_1(VAR_4, VAR_6, VAR_7);
            VAR_4[VAR_7] = '\0';
        }
        if (VAR_5) {
            *VAR_5 = VAR_7;
        }
        return 1;
    }

    return 0;
}
