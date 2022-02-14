
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv; TYPE_2__** inputs; } ;
struct TYPE_9__ {TYPE_3__* src; } ;
struct TYPE_8__ {int palette_pushed; scalar_t__ stats_mode; scalar_t__ nb_refs; } ;
typedef TYPE_1__ PaletteGenContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->src;
    AVFilterLink *VAR_4 = VAR_3->inputs[0];
    PaletteGenContext *VAR_5 = VAR_3->priv;
    int VAR_6;

    VAR_6 = FUNC_1(VAR_4);
    if (VAR_6 == VAR_0 && !VAR_5->palette_pushed && VAR_5->nb_refs && VAR_5->stats_mode != VAR_1) {
        VAR_6 = FUNC_0(VAR_2, FUNC_2(VAR_3));
        VAR_5->palette_pushed = 1;
        return VAR_6;
    }
    return VAR_6;
}
