
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int* rgba; TYPE_3__* comp; } ;
struct TYPE_12__ {int nb_planes; TYPE_2__* desc; } ;
struct TYPE_11__ {unsigned int* u16; } ;
struct TYPE_10__ {TYPE_1__* comp; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_4__ FFDrawContext ;
typedef TYPE_5__ FFDrawColor ;



__attribute__((used)) static void FUNC_0(FFDrawContext *VAR_0, FFDrawColor *VAR_1, FFDrawColor *VAR_2)
{
    int VAR_3;

    VAR_2->rgba[3] = 255;
    for (VAR_3 = 0; VAR_3 < VAR_0->nb_planes; VAR_3++) {
        const unsigned VAR_4 = (1 << VAR_0->desc->comp[VAR_3].depth) - 1;
        const unsigned VAR_5 = (VAR_4 + 1) / 2;

        VAR_2->comp[VAR_3].u16[0] = VAR_1->comp[VAR_3].u16[0] > VAR_5 ? 0 : VAR_4;
        VAR_2->comp[VAR_3].u16[1] = VAR_1->comp[VAR_3].u16[1] > VAR_5 ? 0 : VAR_4;
        VAR_2->comp[VAR_3].u16[2] = VAR_1->comp[VAR_3].u16[2] > VAR_5 ? 0 : VAR_4;
    }
}
