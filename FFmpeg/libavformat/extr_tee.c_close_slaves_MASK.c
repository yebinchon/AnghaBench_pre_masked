
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int nb_slaves; int * slaves; } ;
typedef TYPE_1__ TeeContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_0)
{
    TeeContext *VAR_1 = VAR_0->priv_data;
    unsigned VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->nb_slaves; VAR_2++) {
        FUNC_1(&VAR_1->slaves[VAR_2]);
    }
    FUNC_0(&VAR_1->slaves);
}
