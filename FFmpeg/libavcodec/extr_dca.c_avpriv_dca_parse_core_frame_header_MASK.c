
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int GetBitContext ;
typedef int DCACoreFrameHeader ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int const*,int) ;

int FUNC_2(DCACoreFrameHeader *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    GetBitContext VAR_4;
    int VAR_5;

    VAR_5 = FUNC_1(&VAR_4, VAR_2, VAR_3);
    if (VAR_5 < 0)
        return VAR_5;

    if (FUNC_0(VAR_1, &VAR_4) < 0)
        return VAR_0;

    return 0;
}
