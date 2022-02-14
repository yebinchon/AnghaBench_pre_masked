
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {unsigned int nb_outputs; TYPE_1__** outputs; } ;
struct TYPE_7__ {unsigned int nb_filters; TYPE_3__** filters; } ;
struct TYPE_6__ {scalar_t__ type; int format; int h; int w; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterGraph ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVClass ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,int ,TYPE_3__*) ;

__attribute__((used)) static int FUNC_1(AVFilterGraph *VAR_2, AVClass *VAR_3)
{
    AVFilterContext *VAR_4;
    AVFilterLink *VAR_5;
    unsigned VAR_6, VAR_7;
    int VAR_8;

    for (VAR_6 = 0; VAR_6 < VAR_2->nb_filters; VAR_6++) {
        VAR_4 = VAR_2->filters[VAR_6];
        for (VAR_7 = 0; VAR_7 < VAR_4->nb_outputs; VAR_7++) {
            VAR_5 = VAR_4->outputs[VAR_7];
            if (VAR_5->type == VAR_0) {
                VAR_8 = FUNC_0(VAR_5->w, VAR_5->h, VAR_1, VAR_5->format, 0, VAR_4);
                if (VAR_8 < 0)
                    return VAR_8;
            }
        }
    }
    return 0;
}
