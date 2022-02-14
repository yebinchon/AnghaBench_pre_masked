
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int *,int,int) ;

__attribute__((used)) static inline void FUNC_3(PutBitContext *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                 int VAR_4)
{
    int VAR_5;

    FUNC_0(VAR_1 >= 0);

    VAR_5 = VAR_1 >> VAR_2;
    if (VAR_5 < VAR_3)
        FUNC_2(VAR_0, VAR_5 + VAR_2 + 1, (1 << VAR_2) + FUNC_1(VAR_1, VAR_2));
    else
        FUNC_2(VAR_0, VAR_3 + VAR_4, VAR_1 - VAR_3 + 1);
}
