
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int size; int elements; scalar_t__ first; scalar_t__ nb_elements; } ;
typedef TYPE_1__ cqueue ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static cqueue *FUNC_3(int VAR_0)
{
    cqueue *VAR_1;

    VAR_1 = FUNC_1(sizeof(cqueue));
    if (!VAR_1)
        return ((void*)0);

    VAR_1->size = VAR_0;
    VAR_1->nb_elements = 0;
    VAR_1->first = 0;

    VAR_1->elements = FUNC_2(VAR_0, sizeof(double));
    if (!VAR_1->elements) {
        FUNC_0(VAR_1);
        return ((void*)0);
    }

    return VAR_1;
}
