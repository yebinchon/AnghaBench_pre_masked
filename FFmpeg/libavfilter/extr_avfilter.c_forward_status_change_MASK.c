
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int status_in; } ;
struct TYPE_9__ {unsigned int nb_outputs; TYPE_5__** outputs; } ;
struct TYPE_8__ {int status_in_pts; int status_in; int status_out; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_0, AVFilterLink *VAR_1)
{
    unsigned VAR_2 = 0, VAR_3 = 0;
    int VAR_4;

    FUNC_0(!VAR_1->status_out);
    if (!VAR_0->nb_outputs) {

        return 0;
    }
    while (!VAR_1->status_out) {
        if (!VAR_0->outputs[VAR_2]->status_in) {
            VAR_3++;
            VAR_4 = FUNC_3(VAR_0->outputs[VAR_2]);
            if (VAR_4 < 0)
                return VAR_4;
        }
        if (++VAR_2 == VAR_0->nb_outputs) {
            if (!VAR_3) {


                FUNC_1(VAR_1, VAR_1->status_in, VAR_1->status_in_pts);
                return 0;
            }
            VAR_3 = 0;
            VAR_2 = 0;
        }
    }
    FUNC_2(VAR_0, 200);
    return 0;
}
