
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; int surface; } ;
typedef TYPE_1__ QSVFrame ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static QSVFrame *FUNC_2(QSVFrame **VAR_1)
{
    QSVFrame *VAR_2 = *VAR_1;

    for (; VAR_2; VAR_2 = VAR_2->next) {
        if (!VAR_2->surface)
            break;
    }

    if (!VAR_2) {
        VAR_2 = FUNC_1(sizeof(*VAR_2));
        if (!VAR_2) {
            FUNC_0(((void*)0), VAR_0, "Can't alloc new output frame.\n");
            return ((void*)0);
        }
        VAR_2->next = *VAR_1;
        *VAR_1 = VAR_2;
    }

    return VAR_2;
}
