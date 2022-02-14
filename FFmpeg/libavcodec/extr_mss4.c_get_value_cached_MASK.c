
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(GetBitContext *VAR_0, int VAR_1, uint8_t *VAR_2,
                            int VAR_3, int VAR_4, int VAR_5, int *VAR_6)
{
    if (VAR_1 < VAR_3)
        return VAR_2[VAR_1];
    if (!FUNC_1(VAR_0))
        return VAR_6[VAR_4];
    VAR_6[VAR_4] = FUNC_0(VAR_0, 8 - VAR_5) << VAR_5;
    return VAR_6[VAR_4];
}
