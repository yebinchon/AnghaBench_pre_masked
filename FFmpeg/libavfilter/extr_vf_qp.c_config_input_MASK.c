
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {int h; int w; TYPE_3__* dst; } ;
struct TYPE_6__ {int h; int qstride; int evaluate_per_mb; int * lut; int qp_expr_str; } ;
typedef TYPE_1__ QPContext ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;
typedef int AVExpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 double FUNC_1 (int *,double*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int **,int ,char const**,int *,int *,int *,int *,int ,TYPE_3__*) ;
 scalar_t__ FUNC_4 (double) ;
 int FUNC_5 (double) ;
 scalar_t__ FUNC_6 (int ,char) ;

__attribute__((used)) static int FUNC_7(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    QPContext *VAR_4 = VAR_3->priv;
    int VAR_5;
    int VAR_6;
    AVExpr *VAR_7 = ((void*)0);
    static const char *VAR_8[] = { "known", "qp", "x", "y", "w", "h", ((void*)0) };

    if (!VAR_4->qp_expr_str)
        return 0;

    VAR_6 = FUNC_3(&VAR_7, VAR_4->qp_expr_str, VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_3);
    if (VAR_6 < 0)
        return VAR_6;

    VAR_4->h = (VAR_2->h + 15) >> 4;
    VAR_4->qstride = (VAR_2->w + 15) >> 4;
    for (VAR_5 = -129; VAR_5 < 128; VAR_5++) {
        double VAR_9[] = { VAR_5 != -129, VAR_5, VAR_1, VAR_1, VAR_4->qstride, VAR_4->h, 0};
        double VAR_10 = FUNC_1(VAR_7, VAR_9, ((void*)0));

        if (FUNC_4(VAR_10)) {
            if(FUNC_6(VAR_4->qp_expr_str, 'x') || FUNC_6(VAR_4->qp_expr_str, 'y'))
                VAR_4->evaluate_per_mb = 1;
            else {
                FUNC_2(VAR_7);
                return FUNC_0(VAR_0);
            }
        }

        VAR_4->lut[VAR_5 + 129] = FUNC_5(VAR_10);
    }
    FUNC_2(VAR_7);

    return 0;
}
