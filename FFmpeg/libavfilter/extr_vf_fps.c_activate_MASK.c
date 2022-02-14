
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_12__ {int ** outputs; int ** inputs; TYPE_1__* priv; } ;
struct TYPE_11__ {int frames_count; int next_pts; scalar_t__ status; } ;
typedef TYPE_1__ FPSContext ;
typedef int AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__,int ) ;
 int FUNC_6 (TYPE_2__*,TYPE_1__*,int *,int *) ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int *,int *,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*,int *,int*) ;

__attribute__((used)) static int FUNC_9(AVFilterContext *VAR_1)
{
    FPSContext *VAR_2 = VAR_1->priv;
    AVFilterLink *VAR_3 = VAR_1->inputs[0];
    AVFilterLink *VAR_4 = VAR_1->outputs[0];

    int VAR_5;
    int VAR_6 = 0;
    int64_t VAR_7;

    FUNC_0(VAR_4, VAR_3);


    if (!VAR_2->status) {


        while (VAR_2->frames_count < 2 && FUNC_4(VAR_3)) {
            VAR_5 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);
            if (VAR_5 < 0)
                return VAR_5;
        }


        if (VAR_2->frames_count < 2) {

            VAR_5 = FUNC_3(VAR_3, &VAR_2->status, &VAR_7);
            if (VAR_5 > 0)
                FUNC_7(VAR_1, VAR_2, VAR_3, VAR_4, VAR_7);

            if (!VAR_5) {

                FUNC_1(VAR_4, VAR_3);
                return 0;
            }
        }
    }


    if (VAR_2->frames_count > 0) {
        VAR_5 = FUNC_8(VAR_1, VAR_2, VAR_4, &VAR_6);

        if (VAR_6)
            FUNC_2(VAR_1, 100);
        return VAR_5;
    }


    if (VAR_2->status && VAR_2->frames_count == 0) {
        FUNC_5(VAR_4, VAR_2->status, VAR_2->next_pts);
        return 0;
    }

    return VAR_0;
}
