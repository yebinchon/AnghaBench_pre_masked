
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
struct TYPE_12__ {int format; TYPE_5__* src; } ;
struct TYPE_11__ {TYPE_1__* comp; } ;
struct TYPE_10__ {int depth; int max; int step; int rgba_map; int color_balance; } ;
struct TYPE_9__ {int depth; } ;
typedef TYPE_2__ ColorBalanceContext ;
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
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_4)
{
    AVFilterContext *VAR_5 = VAR_4->src;
    ColorBalanceContext *VAR_6 = VAR_5->priv;
    const AVPixFmtDescriptor *VAR_7 = FUNC_2(VAR_4->format);
    const int VAR_8 = VAR_7->comp[0].depth;
    const int VAR_9 = (1 << VAR_8) - 1;
    const int VAR_10 = FUNC_1(VAR_4->format) > 1;

    VAR_6->depth = VAR_8;
    VAR_6->max = VAR_9;

    if (VAR_9 == 255 && VAR_10) {
        VAR_6->color_balance = VAR_3;
    } else if (VAR_10) {
        VAR_6->color_balance = VAR_1;
    } else if (VAR_9 == 255) {
        VAR_6->color_balance = VAR_2;
    } else {
        VAR_6->color_balance = VAR_0;
    }

    FUNC_3(VAR_6->rgba_map, VAR_4->format);
    VAR_6->step = FUNC_0(VAR_7) >> 3;

    return 0;
}
