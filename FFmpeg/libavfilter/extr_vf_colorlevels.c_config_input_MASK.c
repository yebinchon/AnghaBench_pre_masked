
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* priv; } ;
struct TYPE_12__ {int w; int format; TYPE_5__* dst; } ;
struct TYPE_11__ {TYPE_1__* comp; int nb_components; } ;
struct TYPE_10__ {int bpp; int step; int linesize; int rgba_map; int nb_comp; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ ColorLevelsContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (TYPE_3__ const*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    ColorLevelsContext *VAR_2 = VAR_1->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_1(VAR_0->format);

    VAR_2->nb_comp = VAR_3->nb_components;
    VAR_2->bpp = VAR_3->comp[0].depth >> 3;
    VAR_2->step = (FUNC_0(VAR_3) >> 3) / VAR_2->bpp;
    VAR_2->linesize = VAR_0->w * VAR_2->step;
    FUNC_2(VAR_2->rgba_map, VAR_0->format);

    return 0;
}
