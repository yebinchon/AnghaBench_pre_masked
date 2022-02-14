
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int* rgba; TYPE_1__* comp; } ;
struct TYPE_8__ {int nb_planes; } ;
struct TYPE_7__ {int* u8; } ;
typedef TYPE_2__ FFDrawContext ;
typedef TYPE_3__ FFDrawColor ;



__attribute__((used)) static void FUNC_0(FFDrawContext *VAR_0, FFDrawColor *VAR_1, FFDrawColor *VAR_2)
{
    int VAR_3;

    VAR_2->rgba[3] = 255;
    for (VAR_3 = 0; VAR_3 < VAR_0->nb_planes; VAR_3++) {
        VAR_2->comp[VAR_3].u8[0] = VAR_1->comp[VAR_3].u8[0] > 127 ? 0 : 255;
        VAR_2->comp[VAR_3].u8[1] = VAR_1->comp[VAR_3].u8[1] > 127 ? 0 : 255;
        VAR_2->comp[VAR_3].u8[2] = VAR_1->comp[VAR_3].u8[2] > 127 ? 0 : 255;
    }
}
