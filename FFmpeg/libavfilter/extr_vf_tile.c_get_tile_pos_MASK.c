
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int w; unsigned int margin; unsigned int const padding; } ;
typedef TYPE_1__ TileContext ;
struct TYPE_7__ {TYPE_2__** inputs; TYPE_1__* priv; } ;
struct TYPE_6__ {unsigned int const w; unsigned int const h; } ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;



__attribute__((used)) static void FUNC_0(AVFilterContext *VAR_0, unsigned *VAR_1, unsigned *VAR_2, unsigned VAR_3)
{
    TileContext *VAR_4 = VAR_0->priv;
    AVFilterLink *VAR_5 = VAR_0->inputs[0];
    const unsigned VAR_6 = VAR_3 % VAR_4->w;
    const unsigned VAR_7 = VAR_3 / VAR_4->w;

    *VAR_1 = VAR_4->margin + (VAR_5->w + VAR_4->padding) * VAR_6;
    *VAR_2 = VAR_4->margin + (VAR_5->h + VAR_4->padding) * VAR_7;
}
