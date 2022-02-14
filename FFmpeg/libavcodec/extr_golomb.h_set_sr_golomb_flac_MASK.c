
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PutBitContext ;


 int FUNC_0 (int *,int,int,int,int) ;

__attribute__((used)) static inline void FUNC_1(PutBitContext *VAR_0, int VAR_1, int VAR_2,
                                      int VAR_3, int VAR_4)
{
    int VAR_5;

    VAR_5 = -2 * VAR_1 - 1;
    VAR_5 ^= (VAR_5 >> 31);

    FUNC_0(VAR_0, VAR_5, VAR_2, VAR_3, VAR_4);
}
