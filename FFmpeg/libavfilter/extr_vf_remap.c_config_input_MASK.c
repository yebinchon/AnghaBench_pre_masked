
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
struct TYPE_12__ {int format; TYPE_5__* dst; } ;
struct TYPE_11__ {int nb_components; TYPE_1__* comp; } ;
struct TYPE_10__ {int nb_planes; int nb_components; int step; int remap_slice; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ RemapContext ;
typedef TYPE_3__ AVPixFmtDescriptor ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;


 int FUNC_0 (TYPE_3__ const*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->dst;
    RemapContext *VAR_6 = VAR_5->priv;
    const AVPixFmtDescriptor *VAR_7 = FUNC_2(VAR_4->format);

    VAR_6->nb_planes = FUNC_1(VAR_4->format);
    VAR_6->nb_components = VAR_7->nb_components;

    if (VAR_7->comp[0].depth == 8) {
        if (VAR_6->nb_planes > 1 || VAR_6->nb_components == 1) {
            VAR_6->remap_slice = VAR_3;
        } else {
            VAR_6->remap_slice = VAR_1;
        }
    } else {
        if (VAR_6->nb_planes > 1 || VAR_6->nb_components == 1) {
            VAR_6->remap_slice = VAR_2;
        } else {
            VAR_6->remap_slice = VAR_0;
        }
    }

    VAR_6->step = FUNC_0(VAR_7) >> 3;
    return 0;
}
