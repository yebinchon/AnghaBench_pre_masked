
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HEVCSEI ;
typedef int HEVCParamSets ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int ,char*) ;
 int FUNC_1 (int *,void*,int *,int const*,int,int) ;
 int FUNC_2 (int *,void*,int *,int,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(GetBitContext *VAR_4, void *VAR_5, HEVCSEI *VAR_6,
                                  const HEVCParamSets *VAR_7, int VAR_8)
{
    int VAR_9 = 0;
    int VAR_10 = 0;
    int VAR_11 = 0xFF;
    FUNC_0(VAR_5, VAR_1, "Decoding SEI\n");

    while (VAR_11 == 0xFF) {
        if (FUNC_4(VAR_4) < 16 || VAR_9 > VAR_3 - 255)
            return VAR_0;
        VAR_11 = FUNC_3(VAR_4, 8);
        VAR_9 += VAR_11;
    }
    VAR_11 = 0xFF;
    while (VAR_11 == 0xFF) {
        if (FUNC_4(VAR_4) < 8 + 8LL*VAR_10)
            return VAR_0;
        VAR_11 = FUNC_3(VAR_4, 8);
        VAR_10 += VAR_11;
    }
    if (VAR_8 == VAR_2) {
        return FUNC_1(VAR_4, VAR_5, VAR_6, VAR_7, VAR_9, VAR_10);
    } else {
        return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_9, VAR_10);
    }
}
