
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int cachelen; int cacheval; int* position; scalar_t__ bytes; } ;
struct TYPE_5__ {int total_bits; TYPE_1__ rb; } ;
typedef TYPE_2__ OpusRangeCoder ;


 int FUNC_0 (int,int) ;

uint32_t FUNC_1(OpusRangeCoder *VAR_0, uint32_t VAR_1)
{
    uint32_t VAR_2 = 0;

    while (VAR_0->rb.bytes && VAR_0->rb.cachelen < VAR_1) {
        VAR_0->rb.cacheval |= *--VAR_0->rb.position << VAR_0->rb.cachelen;
        VAR_0->rb.cachelen += 8;
        VAR_0->rb.bytes--;
    }

    VAR_2 = FUNC_0(VAR_0->rb.cacheval, VAR_1);
    VAR_0->rb.cacheval >>= VAR_1;
    VAR_0->rb.cachelen -= VAR_1;
    VAR_0->total_bits += VAR_1;

    return VAR_2;
}
