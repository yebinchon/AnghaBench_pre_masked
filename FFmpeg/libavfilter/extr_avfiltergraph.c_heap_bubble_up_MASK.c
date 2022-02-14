
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__** sink_links; } ;
struct TYPE_5__ {scalar_t__ current_pts_us; int age_index; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterGraph ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(AVFilterGraph *VAR_0,
                           AVFilterLink *VAR_1, int VAR_2)
{
    AVFilterLink **VAR_3 = VAR_0->sink_links;

    FUNC_0(VAR_2 >= 0);

    while (VAR_2) {
        int VAR_4 = (VAR_2 - 1) >> 1;
        if (VAR_3[VAR_4]->current_pts_us >= VAR_1->current_pts_us)
            break;
        VAR_3[VAR_2] = VAR_3[VAR_4];
        VAR_3[VAR_2]->age_index = VAR_2;
        VAR_2 = VAR_4;
    }
    VAR_3[VAR_2] = VAR_1;
    VAR_1->age_index = VAR_2;
}
