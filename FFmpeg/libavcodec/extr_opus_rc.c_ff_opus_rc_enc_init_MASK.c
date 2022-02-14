
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rem; scalar_t__ buf; scalar_t__ rng_cur; scalar_t__ ext; scalar_t__ total_bits; int range; scalar_t__ value; } ;
typedef TYPE_1__ OpusRangeCoder ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,scalar_t__,int ) ;

void FUNC_1(OpusRangeCoder *VAR_3)
{
    VAR_3->value = 0;
    VAR_3->range = VAR_2;
    VAR_3->total_bits = VAR_1 + 1;
    VAR_3->rem = -1;
    VAR_3->ext = 0;
    VAR_3->rng_cur = VAR_3->buf;
    FUNC_0(VAR_3, VAR_3->buf + VAR_0 + 8, 0);
}
