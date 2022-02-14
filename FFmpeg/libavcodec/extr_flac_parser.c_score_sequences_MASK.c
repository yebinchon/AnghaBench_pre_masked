
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int max_score; struct TYPE_7__* next; } ;
struct TYPE_6__ {TYPE_2__* best_header; TYPE_2__* headers; } ;
typedef TYPE_1__ FLACParseContext ;
typedef TYPE_2__ FLACHeaderMarker ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*) ;

__attribute__((used)) static void FUNC_1(FLACParseContext *VAR_1)
{
    FLACHeaderMarker *VAR_2;
    int VAR_3 = 0;

    for (VAR_2 = VAR_1->headers; VAR_2; VAR_2 = VAR_2->next)
        VAR_2->max_score = VAR_0;


    for (VAR_2 = VAR_1->headers; VAR_2; VAR_2 = VAR_2->next) {
        if (FUNC_0(VAR_1, VAR_2) > VAR_3) {
            VAR_1->best_header = VAR_2;
            VAR_3 = VAR_2->max_score;
        }
    }
}
