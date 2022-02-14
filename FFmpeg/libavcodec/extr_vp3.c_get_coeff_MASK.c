
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;
typedef int GetBitContext ;


 int* VAR_0 ;
 int ** VAR_1 ;
 int FUNC_0 (int *,int) ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static inline int FUNC_1(GetBitContext *VAR_4, int VAR_5, int16_t *VAR_6)
{
    int VAR_7, VAR_8;

    VAR_7 = VAR_0[VAR_5];
    if (VAR_7)
        VAR_7 = FUNC_0(VAR_4, VAR_7);
    *VAR_6 = VAR_1[VAR_5][VAR_7];

    VAR_8 = VAR_2[VAR_5];
    if (VAR_3[VAR_5])
        VAR_8 += FUNC_0(VAR_4, VAR_3[VAR_5]);

    return VAR_8;
}
