
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HEVCSEI ;
typedef int HEVCParamSets ;
typedef int GetBitContext ;


 int FUNC_0 (int *,void*,int *,int const*,int) ;
 scalar_t__ FUNC_1 (int *) ;

int FUNC_2(GetBitContext *VAR_0, void *VAR_1, HEVCSEI *VAR_2,
                           const HEVCParamSets *VAR_3, int VAR_4)
{
    int VAR_5;

    do {
        VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
        if (VAR_5 < 0)
            return VAR_5;
    } while (FUNC_1(VAR_0));
    return 1;
}
