
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GetBitContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int** VAR_0 ;
 int** VAR_1 ;

__attribute__((used)) static inline int FUNC_2(GetBitContext *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = VAR_0[VAR_3-1][VAR_4-1] - 1;
    int VAR_6 = VAR_5 ? FUNC_1(VAR_2, VAR_5) : 0;

    if (VAR_6 >= VAR_1[VAR_3-1][VAR_4-1])
        VAR_6 = ((VAR_6 << 1) | FUNC_0(VAR_2)) - VAR_1[VAR_3-1][VAR_4-1];

    return VAR_6;
}
