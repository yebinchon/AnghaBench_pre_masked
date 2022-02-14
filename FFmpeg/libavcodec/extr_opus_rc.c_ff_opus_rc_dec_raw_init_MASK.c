
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ cacheval; scalar_t__ cachelen; int bytes; int const* position; } ;
struct TYPE_5__ {TYPE_1__ rb; } ;
typedef TYPE_2__ OpusRangeCoder ;



void FUNC_0(OpusRangeCoder *VAR_0, const uint8_t *VAR_1, uint32_t VAR_2)
{
    VAR_0->rb.position = VAR_1;
    VAR_0->rb.bytes = VAR_2;
    VAR_0->rb.cachelen = 0;
    VAR_0->rb.cacheval = 0;
}
