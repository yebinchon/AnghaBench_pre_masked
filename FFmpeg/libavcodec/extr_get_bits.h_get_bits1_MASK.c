
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct TYPE_5__ {unsigned int index; unsigned int* buffer; unsigned int size_in_bits_plus8; int bits_left; } ;
typedef TYPE_1__ GetBitContext ;


 unsigned int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static inline unsigned int FUNC_2(GetBitContext *VAR_0)
{
    unsigned int VAR_1 = VAR_0->index;
    uint8_t VAR_2 = VAR_0->buffer[VAR_1 >> 3];




    VAR_2 <<= VAR_1 & 7;
    VAR_2 >>= 8 - 1;


    if (VAR_0->index < VAR_0->size_in_bits_plus8)

        VAR_1++;
    VAR_0->index = VAR_1;

    return VAR_2;

}
