
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {double w; double h; TYPE_3__* dst; } ;
struct TYPE_6__ {int* region; int * region_expr; } ;
typedef TYPE_1__ AddROIContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;



 int * VAR_5 ;
 double FUNC_0 (int ,double*,int *) ;
 int FUNC_1 (TYPE_3__*,int ,char*,double,int ,...) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_6->dst;
    AddROIContext *VAR_8 = VAR_7->priv;
    int VAR_9;
    double VAR_10[VAR_2];
    double VAR_11;

    VAR_10[VAR_4] = VAR_6->w;
    VAR_10[VAR_3] = VAR_6->h;

    for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
        int VAR_12;
        switch (VAR_9) {
        case 129: VAR_12 = VAR_6->w; break;
        case 128: VAR_12 = VAR_6->h; break;
        case 130: VAR_12 = VAR_6->w - VAR_8->region[129]; break;
        case 131: VAR_12 = VAR_6->h - VAR_8->region[128]; break;
        }

        VAR_11 = FUNC_0(VAR_8->region_expr[VAR_9], VAR_10, ((void*)0));
        if (VAR_11 < 0.0) {
            FUNC_1(VAR_7, VAR_0, "Calculated value %g for %s is "
                   "less than zero - using zero instead.\n", VAR_11,
                   VAR_5[VAR_9]);
            VAR_11 = 0.0;
        } else if (VAR_11 > VAR_12) {
            FUNC_1(VAR_7, VAR_0, "Calculated value %g for %s is "
                   "greater than maximum allowed value %d - "
                   "using %d instead.\n", VAR_11, VAR_5[VAR_9],
                   VAR_12, VAR_12);
            VAR_11 = VAR_12;
        }
        VAR_8->region[VAR_9] = VAR_11;
    }

    return 0;
}
