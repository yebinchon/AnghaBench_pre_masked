
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {unsigned int nb_inputs; TYPE_1__** inputs; } ;
struct TYPE_5__ {int status_out; int time_base; int status_in_pts; int current_pts; } ;
typedef int AVRational ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int64_t FUNC_3(AVFilterContext *VAR_3, int VAR_4, AVRational VAR_5)
{
    unsigned VAR_6;
    int64_t VAR_7 = VAR_2;

    for (VAR_6 = 0; VAR_6 < VAR_3->nb_inputs; VAR_6++)
        if (VAR_3->inputs[VAR_6]->status_out == VAR_4)
            VAR_7 = FUNC_0(VAR_7, FUNC_2(VAR_3->inputs[VAR_6]->current_pts, VAR_3->inputs[VAR_6]->time_base, VAR_5));
    if (VAR_7 < VAR_2)
        return VAR_7;
    FUNC_1(VAR_3, VAR_0, "EOF timestamp not reliable\n");
    for (VAR_6 = 0; VAR_6 < VAR_3->nb_inputs; VAR_6++)
        VAR_7 = FUNC_0(VAR_7, FUNC_2(VAR_3->inputs[VAR_6]->status_in_pts, VAR_3->inputs[VAR_6]->time_base, VAR_5));
    if (VAR_7 < VAR_2)
        return VAR_7;
    return VAR_1;
}
