
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dim; scalar_t__ points; } ;
typedef TYPE_1__ elbg_data ;
struct TYPE_6__ {int index; struct TYPE_6__* next; } ;
typedef TYPE_2__ cell ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int*,scalar_t__,int,int ) ;

__attribute__((used)) static int FUNC_1(elbg_data *VAR_1, int *VAR_2, cell *VAR_3)
{
    int VAR_4=0;
    for (; VAR_3; VAR_3=VAR_3->next)
        VAR_4 += FUNC_0(VAR_2, VAR_1->points + VAR_3->index*VAR_1->dim, VAR_1->dim, VAR_0);

    return VAR_4;
}
