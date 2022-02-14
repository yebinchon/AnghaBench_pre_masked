
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int int32_sent_bits; int int32_zeros; int int32_ones; int int32_dups; int flags; int pb; } ;
typedef TYPE_1__ WavPackEncodeContext ;
typedef int PutBitContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int const,int) ;

__attribute__((used)) static void FUNC_1(WavPackEncodeContext *VAR_1,
                       int32_t *VAR_2, int32_t *VAR_3,
                       int VAR_4)
{
    const int VAR_5 = VAR_1->int32_sent_bits;
    PutBitContext *VAR_6 = &VAR_1->pb;
    int VAR_7, VAR_8;

    VAR_8 = VAR_1->int32_zeros + VAR_1->int32_ones + VAR_1->int32_dups;

    if (!VAR_5)
        return;

    if (VAR_1->flags & VAR_0) {
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
            FUNC_0(VAR_6, VAR_5, VAR_2[VAR_7] >> VAR_8);
        }
    } else {
        for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
            FUNC_0(VAR_6, VAR_5, VAR_2[VAR_7] >> VAR_8);
            FUNC_0(VAR_6, VAR_5, VAR_3[VAR_7] >> VAR_8);
        }
    }
}
