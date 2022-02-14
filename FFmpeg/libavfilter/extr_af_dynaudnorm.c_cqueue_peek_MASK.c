
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_elements; double* elements; int first; int size; } ;
typedef TYPE_1__ cqueue ;


 int FUNC_0 (int) ;

__attribute__((used)) static double FUNC_1(cqueue *VAR_0, int VAR_1)
{
    FUNC_0(VAR_1 < VAR_0->nb_elements);
    return VAR_0->elements[(VAR_0->first + VAR_1) % VAR_0->size];
}
