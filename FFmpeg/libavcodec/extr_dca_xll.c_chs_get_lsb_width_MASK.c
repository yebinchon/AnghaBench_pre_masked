
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* bands; } ;
struct TYPE_7__ {int fixed_lsb_width; } ;
struct TYPE_6__ {int* bit_width_adjust; int* nscalablelsbs; } ;
typedef TYPE_2__ DCAXllDecoder ;
typedef TYPE_3__ DCAXllChSet ;



__attribute__((used)) static int FUNC_0(DCAXllDecoder *VAR_0, DCAXllChSet *VAR_1, int VAR_2, int VAR_3)
{
    int VAR_4 = VAR_1->bands[VAR_2].bit_width_adjust[VAR_3];
    int VAR_5 = VAR_1->bands[VAR_2].nscalablelsbs[VAR_3];

    if (VAR_0->fixed_lsb_width)
        VAR_5 = VAR_0->fixed_lsb_width;
    else if (VAR_5 && VAR_4)
        VAR_5 += VAR_4 - 1;
    else
        VAR_5 += VAR_4;

    return VAR_5;
}
