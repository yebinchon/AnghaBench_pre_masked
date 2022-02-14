
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int tabsize; int bits; scalar_t__ mode; TYPE_1__* tab; } ;
struct TYPE_4__ {int code; int hash_prefix; int suffix; } ;
typedef TYPE_2__ LZWEncodeState ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void FUNC_0(LZWEncodeState * VAR_1, uint8_t VAR_2, int VAR_3, int VAR_4)
{
    VAR_1->tab[VAR_4].code = VAR_1->tabsize;
    VAR_1->tab[VAR_4].suffix = VAR_2;
    VAR_1->tab[VAR_4].hash_prefix = VAR_3;

    VAR_1->tabsize++;

    if (VAR_1->tabsize >= (1 << VAR_1->bits) + (VAR_1->mode == VAR_0))
        VAR_1->bits++;
}
