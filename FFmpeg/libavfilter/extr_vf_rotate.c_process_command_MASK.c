
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int * angle_expr; } ;
typedef TYPE_1__ RotContext ;
typedef TYPE_2__ AVFilterContext ;
typedef int AVExpr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*,int ,int *,int *,int *,int *,int ,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ,char*,char const*) ;
 int FUNC_4 (char const*,char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_3, const char *VAR_4, const char *VAR_5,
                           char *VAR_6, int VAR_7, int VAR_8)
{
    RotContext *VAR_9 = VAR_3->priv;
    int VAR_10;

    if (!FUNC_4(VAR_4, "angle") || !FUNC_4(VAR_4, "a")) {
        AVExpr *VAR_11 = VAR_9->angle_expr;
        VAR_10 = FUNC_2(&VAR_9->angle_expr, VAR_5, VAR_2,
                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), 0, VAR_3);
        if (VAR_10 < 0) {
            FUNC_3(VAR_3, VAR_0,
                   "Error when parsing the expression '%s' for angle command\n", VAR_5);
            VAR_9->angle_expr = VAR_11;
            return VAR_10;
        }
        FUNC_1(VAR_11);
    } else
        VAR_10 = FUNC_0(VAR_1);

    return VAR_10;
}
