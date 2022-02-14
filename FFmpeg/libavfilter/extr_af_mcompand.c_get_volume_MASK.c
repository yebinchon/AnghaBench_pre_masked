
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {double x; double y; double a; double b; } ;
struct TYPE_4__ {double in_min_lin; double out_min_lin; int nb_segments; TYPE_2__* segments; } ;
typedef TYPE_1__ CompandT ;
typedef TYPE_2__ CompandSegment ;


 double FUNC_0 (double) ;
 double FUNC_1 (double) ;

__attribute__((used)) static double FUNC_2(CompandT *VAR_0, double VAR_1)
{
    CompandSegment *VAR_2;
    double VAR_3, VAR_4;
    int VAR_5;

    if (VAR_1 <= VAR_0->in_min_lin)
        return VAR_0->out_min_lin;

    VAR_3 = FUNC_1(VAR_1);

    for (VAR_5 = 1; VAR_5 < VAR_0->nb_segments; VAR_5++)
        if (VAR_3 <= VAR_0->segments[VAR_5].x)
            break;
    VAR_2 = &VAR_0->segments[VAR_5 - 1];
    VAR_3 -= VAR_2->x;
    VAR_4 = VAR_2->y + VAR_3 * (VAR_2->a * VAR_3 + VAR_2->b);

    return FUNC_0(VAR_4);
}
