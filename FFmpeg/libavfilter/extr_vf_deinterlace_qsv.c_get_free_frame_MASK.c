
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* work_frames; } ;
struct TYPE_7__ {struct TYPE_7__* next; int used; } ;
typedef TYPE_1__ QSVFrame ;
typedef TYPE_2__ QSVDeintContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(QSVDeintContext *VAR_1, QSVFrame **VAR_2)
{
    QSVFrame *VAR_3, **VAR_4;

    FUNC_2(VAR_1);

    VAR_3 = VAR_1->work_frames;
    VAR_4 = &VAR_1->work_frames;
    while (VAR_3) {
        if (!VAR_3->used) {
            *VAR_2 = VAR_3;
            return 0;
        }

        VAR_4 = &VAR_3->next;
        VAR_3 = VAR_3->next;
    }

    VAR_3 = FUNC_1(sizeof(*VAR_3));
    if (!VAR_3)
        return FUNC_0(VAR_0);
    *VAR_4 = VAR_3;
    *VAR_2 = VAR_3;

    return 0;
}
