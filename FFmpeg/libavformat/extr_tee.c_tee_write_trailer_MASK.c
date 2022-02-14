
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int nb_slaves; int * slaves; } ;
typedef TYPE_1__ TeeContext ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0)
{
    TeeContext *VAR_1 = VAR_0->priv_data;
    int VAR_2 = 0, VAR_3;
    unsigned VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1->nb_slaves; VAR_4++) {
        if ((VAR_3 = FUNC_1(&VAR_1->slaves[VAR_4])) < 0) {
            VAR_3 = FUNC_2(VAR_0, VAR_4, VAR_3);
            if (!VAR_2 && VAR_3 < 0)
                VAR_2 = VAR_3;
        }
    }
    FUNC_0(&VAR_1->slaves);
    return VAR_2;
}
