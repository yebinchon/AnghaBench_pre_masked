
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;
typedef int GetBitContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline int FUNC_4(PutBitContext *VAR_0, GetBitContext *VAR_1)
{
    int VAR_2, VAR_3, VAR_4, VAR_5;
    int VAR_6 = FUNC_3(VAR_0);

    FUNC_2(VAR_0, VAR_1, 10);
    VAR_2 = FUNC_2(VAR_0, VAR_1, 4);
    VAR_2 += FUNC_2(VAR_0, VAR_1, 4);
    VAR_2 += FUNC_2(VAR_0, VAR_1, 4);
    VAR_3 = FUNC_2(VAR_0, VAR_1, 2);
    VAR_3 += FUNC_2(VAR_0, VAR_1, 3);
    VAR_2 += FUNC_2(VAR_0, VAR_1, 4);
    if (FUNC_2(VAR_0, VAR_1, 1))
        FUNC_2(VAR_0, VAR_1, 4);
    if (FUNC_2(VAR_0, VAR_1, 1))
        FUNC_2(VAR_0, VAR_1, 4);
    if (FUNC_2(VAR_0, VAR_1, 1))
        FUNC_2(VAR_0, VAR_1, 3);
    for (VAR_5 = VAR_2*5+VAR_3*4; VAR_5 > 16; VAR_5 -= 16)
        FUNC_2(VAR_0, VAR_1, 16);
    if (VAR_5)
        FUNC_2(VAR_0, VAR_1, VAR_5);
    FUNC_1(VAR_0);
    FUNC_0(VAR_1);
    VAR_4 = FUNC_2(VAR_0, VAR_1, 8);
    for (; VAR_4 > 0; VAR_4--)
        FUNC_2(VAR_0, VAR_1, 8);

    return FUNC_3(VAR_0) - VAR_6;
}
