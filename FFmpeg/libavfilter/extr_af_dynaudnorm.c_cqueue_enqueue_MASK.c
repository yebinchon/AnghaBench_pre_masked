
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_elements; int size; int first; double* elements; } ;
typedef TYPE_1__ cqueue ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(cqueue *VAR_0, double VAR_1)
{
    int VAR_2;

    FUNC_0(VAR_0->nb_elements != VAR_0->size);

    VAR_2 = (VAR_0->first + VAR_0->nb_elements) % VAR_0->size;
    VAR_0->elements[VAR_2] = VAR_1;
    VAR_0->nb_elements++;

    return 0;
}
