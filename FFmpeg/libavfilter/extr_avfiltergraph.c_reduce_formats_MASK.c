
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nb_filters; int * filters; } ;
typedef TYPE_1__ AVFilterGraph ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterGraph *VAR_0)
{
    int VAR_1, VAR_2, VAR_3;

    do {
        VAR_2 = 0;

        for (VAR_1 = 0; VAR_1 < VAR_0->nb_filters; VAR_1++) {
            if ((VAR_3 = FUNC_0(VAR_0->filters[VAR_1])) < 0)
                return VAR_3;
            VAR_2 |= VAR_3;
        }
    } while (VAR_2);

    return 0;
}
