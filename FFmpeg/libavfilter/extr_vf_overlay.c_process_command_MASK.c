
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* priv; } ;
struct TYPE_7__ {scalar_t__ eval_mode; int y; int * var_values; int x; int y_pexpr; int x_pexpr; } ;
typedef TYPE_1__ OverlayContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (TYPE_2__*,int ,char*,int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,char const*,char const*,TYPE_2__*) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_5, const char *VAR_6, const char *VAR_7,
                           char *VAR_8, int VAR_9, int VAR_10)
{
    OverlayContext *VAR_11 = VAR_5->priv;
    int VAR_12;

    if (!FUNC_4(VAR_6, "x"))
        VAR_12 = FUNC_3(&VAR_11->x_pexpr, VAR_7, VAR_6, VAR_5);
    else if (!FUNC_4(VAR_6, "y"))
        VAR_12 = FUNC_3(&VAR_11->y_pexpr, VAR_7, VAR_6, VAR_5);
    else
        VAR_12 = FUNC_0(VAR_1);

    if (VAR_12 < 0)
        return VAR_12;

    if (VAR_11->eval_mode == VAR_2) {
        FUNC_2(VAR_5);
        FUNC_1(VAR_5, VAR_0, "x:%f xi:%d y:%f yi:%d\n",
               VAR_11->var_values[VAR_3], VAR_11->x,
               VAR_11->var_values[VAR_4], VAR_11->y);
    }
    return VAR_12;
}
