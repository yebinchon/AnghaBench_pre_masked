
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x0; int xscale; int y0; int yscale; double dmax; double const angle; } ;
typedef TYPE_1__ VignetteContext ;


 double FUNC_0 (double const) ;
 double FUNC_1 (int const,int const) ;

__attribute__((used)) static double FUNC_2(const VignetteContext *VAR_0, int VAR_1, int VAR_2)
{
    const int VAR_3 = (VAR_1 - VAR_0->x0) * VAR_0->xscale;
    const int VAR_4 = (VAR_2 - VAR_0->y0) * VAR_0->yscale;
    const double VAR_5 = FUNC_1(VAR_3, VAR_4) / VAR_0->dmax;
    if (VAR_5 > 1) {
        return 0;
    } else {
        const double VAR_6 = FUNC_0(VAR_0->angle * VAR_5);
        return (VAR_6*VAR_6)*(VAR_6*VAR_6);
    }
}
