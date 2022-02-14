
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int order_hint_bits_minus_1; int enable_order_hint; } ;
typedef TYPE_1__ AV1RawSequenceHeader ;



__attribute__((used)) static int FUNC_0(const AV1RawSequenceHeader *VAR_0,
                                     unsigned int VAR_1, unsigned int VAR_2)
{
    unsigned int VAR_3, VAR_4;
    if (!VAR_0->enable_order_hint)
        return 0;
    VAR_3 = VAR_1 - VAR_2;
    VAR_4 = 1 << VAR_0->order_hint_bits_minus_1;
    VAR_3 = (VAR_3 & (VAR_4 - 1)) - (VAR_3 & VAR_4);
    return VAR_3;
}
