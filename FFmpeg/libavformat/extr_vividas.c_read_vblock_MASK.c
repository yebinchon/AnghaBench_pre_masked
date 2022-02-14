
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;
typedef int AVIOContext ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (int *,int *,unsigned int) ;
 int FUNC_3 (int *,int *,unsigned int,unsigned int,unsigned int*,int) ;
 unsigned int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int *,int) ;

__attribute__((used)) static uint8_t *FUNC_6(AVIOContext *VAR_0, uint32_t *VAR_1,
                            uint32_t VAR_2, uint32_t *VAR_3, int VAR_4)
{
    uint8_t VAR_5[4];
    uint8_t *VAR_6;
    unsigned VAR_7;

    if (FUNC_2(VAR_0, VAR_5, 4) != 4)
        return ((void*)0);

    FUNC_3(VAR_5, VAR_5, 4, VAR_2, VAR_3, VAR_4);

    VAR_7 = FUNC_4(VAR_5, 4);
    if (VAR_7 < 4)
        return ((void*)0);

    VAR_6 = FUNC_1(VAR_7);
    if (!VAR_6)
        return ((void*)0);

    *VAR_1 = VAR_7;
    VAR_7 -= 4;

    FUNC_5(VAR_6, VAR_5, 4);

    if (FUNC_2(VAR_0, VAR_6 + 4, VAR_7) == VAR_7) {
        FUNC_3(VAR_6 + 4, VAR_6 + 4, VAR_7, VAR_2, VAR_3, VAR_4);
    } else {
        FUNC_0(VAR_6);
        VAR_6 = ((void*)0);
    }

    return VAR_6;
}
