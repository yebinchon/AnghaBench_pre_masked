
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_3__ {size_t* revtab; size_t* revtab32; int nbits; void** tmp_buf; } ;
typedef TYPE_1__ FFTContext ;
typedef void* FFTComplex ;


 int FUNC_0 (void**,void**,int) ;

__attribute__((used)) static void FUNC_1(FFTContext *VAR_0, FFTComplex *VAR_1)
{
    int VAR_2, VAR_3;
    const uint16_t *VAR_4 = VAR_0->revtab;
    const uint32_t *VAR_5 = VAR_0->revtab32;
    VAR_3 = 1 << VAR_0->nbits;

    if (VAR_4) {
        for(VAR_2=0;VAR_2<VAR_3;VAR_2++) VAR_0->tmp_buf[VAR_4[VAR_2]] = VAR_1[VAR_2];
    } else
        for(VAR_2=0;VAR_2<VAR_3;VAR_2++) VAR_0->tmp_buf[VAR_5[VAR_2]] = VAR_1[VAR_2];

    FUNC_0(VAR_1, VAR_0->tmp_buf, VAR_3 * sizeof(FFTComplex));
}
