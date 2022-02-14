
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int w; int h; TYPE_3__* src; } ;
struct TYPE_5__ {int size; } ;
typedef TYPE_1__ ShowPaletteContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->src;
    const ShowPaletteContext *VAR_2 = VAR_1->priv;
    VAR_0->w = VAR_0->h = 16 * VAR_2->size;
    return 0;
}
