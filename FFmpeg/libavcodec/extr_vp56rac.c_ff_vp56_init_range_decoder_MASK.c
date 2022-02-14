
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int high; int bits; int const* buffer; int code_word; scalar_t__ end_reached; int const* end; } ;
typedef TYPE_1__ VP56RangeCoder ;


 int VAR_0 ;
 int FUNC_0 (int const**) ;

int FUNC_1(VP56RangeCoder *VAR_1, const uint8_t *VAR_2, int VAR_3)
{
    VAR_1->high = 255;
    VAR_1->bits = -16;
    VAR_1->buffer = VAR_2;
    VAR_1->end = VAR_2 + VAR_3;
    VAR_1->end_reached = 0;
    if (VAR_3 < 1)
        return VAR_0;
    VAR_1->code_word = FUNC_0(&VAR_1->buffer);
    return 0;
}
