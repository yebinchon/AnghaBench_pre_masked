
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* cdlms_ttl; int* update_speed; TYPE_1__** cdlms; scalar_t__ bV3RTM; } ;
typedef TYPE_2__ WmallDecodeCtx ;
struct TYPE_4__ {int recent; int order; int* lms_updates; } ;



__attribute__((used)) static void FUNC_0(WmallDecodeCtx *VAR_0, int VAR_1)
{
    int VAR_2, VAR_3, VAR_4;
    for (VAR_2 = VAR_0->cdlms_ttl[VAR_1] - 1; VAR_2 >= 0; VAR_2--) {
        VAR_3 = VAR_0->cdlms[VAR_1][VAR_2].recent;
        if (VAR_0->update_speed[VAR_1] == 8)
            continue;
        if (VAR_0->bV3RTM)
            for (VAR_4 = 0; VAR_4 < VAR_0->cdlms[VAR_1][VAR_2].order; VAR_4++)
                VAR_0->cdlms[VAR_1][VAR_2].lms_updates[VAR_4 + VAR_3] /= 2;
        else
            for (VAR_4 = 0; VAR_4 < VAR_0->cdlms[VAR_1][VAR_2].order; VAR_4++)
                VAR_0->cdlms[VAR_1][VAR_2].lms_updates[VAR_4] /= 2;
    }
    VAR_0->update_speed[VAR_1] = 8;
}
