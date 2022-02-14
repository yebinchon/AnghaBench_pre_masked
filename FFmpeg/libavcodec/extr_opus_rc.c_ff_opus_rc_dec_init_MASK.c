
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int range; int total_bits; int gb; scalar_t__ value; } ;
typedef TYPE_1__ OpusRangeCoder ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(OpusRangeCoder *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_1(&VAR_0->gb, VAR_1, VAR_2);
    if (VAR_3 < 0)
        return VAR_3;

    VAR_0->range = 128;
    VAR_0->value = 127 - FUNC_0(&VAR_0->gb, 7);
    VAR_0->total_bits = 9;
    FUNC_2(VAR_0);

    return 0;
}
