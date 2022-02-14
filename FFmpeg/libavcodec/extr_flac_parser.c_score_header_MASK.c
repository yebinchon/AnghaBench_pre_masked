
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int max_score; scalar_t__* link_penalty; struct TYPE_10__* next; struct TYPE_10__* best_child; int fi; } ;
struct TYPE_9__ {int last_fi; scalar_t__ last_fi_valid; } ;
typedef TYPE_1__ FLACParseContext ;
typedef TYPE_2__ FLACHeaderMarker ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int *,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*,TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(FLACParseContext *VAR_5, FLACHeaderMarker *VAR_6)
{
    FLACHeaderMarker *VAR_7;
    int VAR_8 = 0;
    int VAR_9;
    int VAR_10 = VAR_1;
    if (VAR_6->max_score != VAR_3)
        return VAR_6->max_score;


    if (VAR_5->last_fi_valid) {

        VAR_10 -= FUNC_0(VAR_5, &VAR_5->last_fi, &VAR_6->fi,
                                               VAR_0);
    }

    VAR_6->max_score = VAR_10;


    VAR_7 = VAR_6->next;
    for (VAR_8 = 0; VAR_8 < VAR_4 && VAR_7; VAR_8++) {


        if (VAR_6->link_penalty[VAR_8] == VAR_2) {
            VAR_6->link_penalty[VAR_8] = FUNC_1(VAR_5, VAR_6,
                                                               VAR_7, VAR_0);
        }
        VAR_9 = FUNC_2(VAR_5, VAR_7) - VAR_6->link_penalty[VAR_8];

        if (VAR_1 + VAR_9 > VAR_6->max_score) {

            VAR_6->best_child = VAR_7;
            VAR_6->max_score = VAR_10 + VAR_9;
        }
        VAR_7 = VAR_7->next;
    }

    return VAR_6->max_score;
}
