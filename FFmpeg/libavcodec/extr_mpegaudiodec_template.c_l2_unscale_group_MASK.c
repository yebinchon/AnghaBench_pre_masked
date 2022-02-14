
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static inline int FUNC_0(int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6, VAR_7;

    VAR_5 = VAR_0[VAR_4];
    VAR_6 = VAR_5 & 3;
    VAR_5 >>= 2;

    VAR_7 = (VAR_3 - (VAR_2 >> 1)) * VAR_1[VAR_2 >> 2][VAR_6];

    if (VAR_5 > 0)
        VAR_7 = (VAR_7 + (1 << (VAR_5 - 1))) >> VAR_5;
    return VAR_7;
}
