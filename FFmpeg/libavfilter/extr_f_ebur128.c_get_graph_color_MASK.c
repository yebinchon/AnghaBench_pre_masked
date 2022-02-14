
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int y_opt_max; int y_opt_min; int y_zero_lu; scalar_t__* y_line_ref; } ;
typedef TYPE_1__ EBUR128Context ;


 int const* VAR_0 ;

__attribute__((used)) static const uint8_t *FUNC_0(const EBUR128Context *VAR_1, int VAR_2, int VAR_3)
{
    const int VAR_4 = VAR_3 > VAR_1->y_opt_max;
    const int VAR_5 = VAR_3 < VAR_1->y_opt_min;
    const int VAR_6 = VAR_3 >= VAR_2;
    const int VAR_7 = VAR_1->y_line_ref[VAR_3] || VAR_3 == VAR_1->y_zero_lu;
    const int VAR_8 = 8*VAR_5+ 4*VAR_7 + 2*VAR_6 + VAR_4;
    return VAR_0 + 3*VAR_8;
}
