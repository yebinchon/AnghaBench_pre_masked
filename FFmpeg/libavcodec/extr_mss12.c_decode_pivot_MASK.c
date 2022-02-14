
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int (* get_model_sym ) (TYPE_2__*,int *) ;int (* get_number ) (TYPE_2__*,int) ;} ;
struct TYPE_8__ {int pivot; int edge_mode; } ;
typedef TYPE_1__ SliceContext ;
typedef TYPE_2__ ArithCoder ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_2__*,int *) ;
 int FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_3(SliceContext *VAR_0, ArithCoder *VAR_1, int VAR_2)
{
    int VAR_3, VAR_4;

    VAR_4 = VAR_1->get_model_sym(VAR_1, &VAR_0->edge_mode);
    VAR_3 = VAR_1->get_model_sym(VAR_1, &VAR_0->pivot) + 1;

    if (VAR_3 > 2) {
        if ((VAR_2 + 1) / 2 - 2 <= 0)
            return -1;

        VAR_3 = VAR_1->get_number(VAR_1, (VAR_2 + 1) / 2 - 2) + 3;
    }

    if ((unsigned)VAR_3 >= VAR_2)
        return -1;

    return VAR_4 ? VAR_2 - VAR_3 : VAR_3;
}
