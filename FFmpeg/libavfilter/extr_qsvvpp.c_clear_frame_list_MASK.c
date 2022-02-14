
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int frame; struct TYPE_4__* next; } ;
typedef TYPE_1__ QSVFrame ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__**) ;

__attribute__((used)) static void FUNC_2(QSVFrame **VAR_0)
{
    while (*VAR_0) {
        QSVFrame *VAR_1;

        VAR_1 = *VAR_0;
        *VAR_0 = (*VAR_0)->next;
        FUNC_0(&VAR_1->frame);
        FUNC_1(&VAR_1);
    }
}
