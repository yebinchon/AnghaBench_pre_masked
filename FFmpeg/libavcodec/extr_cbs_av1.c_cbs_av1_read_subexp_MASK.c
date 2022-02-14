
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ trace_enable; } ;
typedef int GetBitContext ;
typedef TYPE_1__ CodedBitstreamContext ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int *,int ,scalar_t__,char*,scalar_t__*) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__,char*,int *,scalar_t__*) ;
 int FUNC_5 (TYPE_1__*,int *,scalar_t__,char*,int *,scalar_t__*,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int,char const*,int const*,char*,scalar_t__) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(CodedBitstreamContext *VAR_0, GetBitContext *VAR_1,
                               uint32_t VAR_2, const char *VAR_3,
                               const int *VAR_4, uint32_t *VAR_5)
{
    uint32_t VAR_6;
    int VAR_7, VAR_8;
    uint32_t VAR_9, VAR_10, VAR_11, VAR_12;

    if (VAR_0->trace_enable)
        VAR_7 = FUNC_7(VAR_1);

    FUNC_1(VAR_2 > 0);
    VAR_9 = FUNC_2(VAR_2 - 1) - 3;

    VAR_8 = FUNC_3(VAR_0, VAR_1, 0, VAR_9,
                                 "subexp_more_bits", &VAR_10);
    if (VAR_8 < 0)
        return VAR_8;

    if (VAR_10) {
        VAR_12 = 2 + VAR_10;
        VAR_11 = 1 << VAR_12;
    } else {
        VAR_12 = 3;
        VAR_11 = 0;
    }

    if (VAR_10 < VAR_9) {
        VAR_8 = FUNC_5(VAR_0, VAR_1, VAR_12,
                                   "subexp_bits", ((void*)0), &VAR_6,
                                   0, FUNC_0(VAR_12));
        if (VAR_8 < 0)
            return VAR_8;

    } else {
        VAR_8 = FUNC_4(VAR_0, VAR_1, VAR_2 - VAR_11,
                              "subexp_final_bits", ((void*)0), &VAR_6);
        if (VAR_8 < 0)
            return VAR_8;
    }
    VAR_6 += VAR_11;

    if (VAR_0->trace_enable)
        FUNC_6(VAR_0, VAR_7,
                                    VAR_3, VAR_4, "", VAR_6);

    *VAR_5 = VAR_6;
    return VAR_8;
}
