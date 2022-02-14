
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_10__ {TYPE_1__* priv; } ;
struct TYPE_9__ {TYPE_3__* src; } ;
struct TYPE_8__ {int depth; int depthx; int depthy; int nb_planes; int nb_planesx; int odepth; double** lut; int* var_values; int * comp_expr_str; int ** comp_expr; void* lut2; } ;
typedef TYPE_1__ LUT2Context ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 double FUNC_1 (int *,int*,TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,int ,int *,int *,int *,int *,int ,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int ,char*,int ,int,...) ;
 double* FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (double) ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_14)
{
    AVFilterContext *VAR_15 = VAR_14->src;
    LUT2Context *VAR_16 = VAR_15->priv;
    int VAR_17, VAR_18;

    VAR_16->depth = VAR_16->depthx + VAR_16->depthy;
    VAR_16->nb_planes = VAR_16->nb_planesx;

    VAR_16->lut2 = VAR_16->depth > 16 ? VAR_5 : VAR_12;
    if (VAR_16->odepth) {
        if (VAR_16->depthx == 8 && VAR_16->depthy == 8 && VAR_16->odepth > 8)
            VAR_16->lut2 = VAR_8;
        if (VAR_16->depthx > 8 && VAR_16->depthy == 8 && VAR_16->odepth > 8)
            VAR_16->lut2 = VAR_6;
        if (VAR_16->depthx == 8 && VAR_16->depthy > 8 && VAR_16->odepth > 8)
            VAR_16->lut2 = VAR_7;
        if (VAR_16->depthx == 8 && VAR_16->depthy == 8 && VAR_16->odepth == 8)
            VAR_16->lut2 = VAR_12;
        if (VAR_16->depthx > 8 && VAR_16->depthy == 8 && VAR_16->odepth == 8)
            VAR_16->lut2 = VAR_10;
        if (VAR_16->depthx == 8 && VAR_16->depthy > 8 && VAR_16->odepth == 8)
            VAR_16->lut2 = VAR_11;
        if (VAR_16->depthx > 8 && VAR_16->depthy > 8 && VAR_16->odepth == 8)
            VAR_16->lut2 = VAR_9;
    } else {
        VAR_16->odepth = VAR_16->depthx;
    }

    for (VAR_17 = 0; VAR_17 < VAR_16->nb_planes; VAR_17++) {
        VAR_16->lut[VAR_17] = FUNC_5(1 << VAR_16->depth, sizeof(uint16_t));
        if (!VAR_16->lut[VAR_17])
            return FUNC_0(VAR_2);
    }

    for (VAR_17 = 0; VAR_17 < VAR_16->nb_planes; VAR_17++) {
        double VAR_19;
        int VAR_20, VAR_21;


        FUNC_2(VAR_16->comp_expr[VAR_17]);
        VAR_16->comp_expr[VAR_17] = ((void*)0);
        VAR_18 = FUNC_3(&VAR_16->comp_expr[VAR_17], VAR_16->comp_expr_str[VAR_17],
                            VAR_13, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_15);
        if (VAR_18 < 0) {
            FUNC_4(VAR_15, VAR_0,
                   "Error when parsing the expression '%s' for the component %d.\n",
                   VAR_16->comp_expr_str[VAR_17], VAR_17);
            return FUNC_0(VAR_1);
        }


        for (VAR_21 = 0; VAR_21 < (1 << VAR_16->depthy); VAR_21++) {
            VAR_16->var_values[VAR_4] = VAR_21;
            for (VAR_20 = 0; VAR_20 < (1 << VAR_16->depthx); VAR_20++) {
                VAR_16->var_values[VAR_3] = VAR_20;
                VAR_19 = FUNC_1(VAR_16->comp_expr[VAR_17], VAR_16->var_values, VAR_16);
                if (FUNC_6(VAR_19)) {
                    FUNC_4(VAR_15, VAR_0,
                           "Error when evaluating the expression '%s' for the values %d and %d for the component %d.\n",
                           VAR_16->comp_expr_str[VAR_17], VAR_20, VAR_21, VAR_17);
                    return FUNC_0(VAR_1);
                }

                VAR_16->lut[VAR_17][(VAR_21 << VAR_16->depthx) + VAR_20] = VAR_19;
            }
        }
    }

    return 0;
}
