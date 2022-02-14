
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int size_in_bits; int size_in_bits_plus8; scalar_t__ bits_left; scalar_t__ cache; scalar_t__ index; int const* buffer_end; int const* buffer; } ;
typedef TYPE_1__ GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline int FUNC_2(GetBitContext *VAR_3, const uint8_t *VAR_4,
                                   int VAR_5, int VAR_6)
{
    int VAR_7;
    int VAR_8 = 0;

    if (VAR_5 >= VAR_2 - FUNC_0(7, VAR_1*8) || VAR_5 < 0 || !VAR_4) {
        VAR_5 = 0;
        VAR_4 = ((void*)0);
        VAR_8 = VAR_0;
    }

    VAR_7 = (VAR_5 + 7) >> 3;

    VAR_3->buffer = VAR_4;
    VAR_3->size_in_bits = VAR_5;
    VAR_3->size_in_bits_plus8 = VAR_5 + 8;
    VAR_3->buffer_end = VAR_4 + VAR_7;
    VAR_3->index = 0;







    return VAR_8;
}
