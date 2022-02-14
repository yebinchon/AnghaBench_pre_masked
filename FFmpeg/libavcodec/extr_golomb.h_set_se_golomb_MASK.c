
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void FUNC_1(PutBitContext *VAR_0, int VAR_1)
{
    VAR_1 = 2 * VAR_1 - 1;
    if (VAR_1 < 0)
        VAR_1 ^= -1;
    FUNC_0(VAR_0, VAR_1);
}
