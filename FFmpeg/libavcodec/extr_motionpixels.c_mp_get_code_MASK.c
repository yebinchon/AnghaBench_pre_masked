
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int max_codes_bits; size_t current_codes_count; TYPE_1__* codes; int avctx; } ;
struct TYPE_4__ {int code; int size; } ;
typedef TYPE_2__ MotionPixelsContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(MotionPixelsContext *VAR_3, GetBitContext *VAR_4, int VAR_5, int VAR_6)
{
    while (FUNC_1(VAR_4)) {
        ++VAR_5;
        if (VAR_5 > VAR_3->max_codes_bits) {
            FUNC_0(VAR_3->avctx, VAR_1, "invalid code size %d/%d\n", VAR_5, VAR_3->max_codes_bits);
            return VAR_0;
        }
        VAR_6 <<= 1;
        if (FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6 + 1) < 0)
            return VAR_0;
    }
    if (VAR_3->current_codes_count >= VAR_2) {
        FUNC_0(VAR_3->avctx, VAR_1, "too many codes\n");
        return VAR_0;
    }

    VAR_3->codes[VAR_3->current_codes_count ].code = VAR_6;
    VAR_3->codes[VAR_3->current_codes_count++].size = VAR_5;
    return 0;
}
