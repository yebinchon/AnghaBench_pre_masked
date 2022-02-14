
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_8__ {TYPE_2__* priv; } ;
struct TYPE_6__ {scalar_t__ color_model; } ;
struct TYPE_7__ {TYPE_1__ plugin_info; } ;
typedef TYPE_2__ Frei0rContext ;
typedef int AVFilterFormats ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int ) ;




 int const VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int **,int const) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_4)
{
    Frei0rContext *VAR_5 = VAR_4->priv;
    AVFilterFormats *VAR_6 = ((void*)0);
    int VAR_7;

    if (VAR_5->plugin_info.color_model == VAR_2) {
        if ((VAR_7 = FUNC_1(&VAR_6, 129)) < 0)
            return VAR_7;
    } else if (VAR_5->plugin_info.color_model == VAR_3) {
        if ((VAR_7 = FUNC_1(&VAR_6, VAR_0)) < 0)
            return VAR_7;
    } else {
        static const enum AVPixelFormat VAR_8[] = {
            129, 130, 131, 130, 128
        };
        VAR_6 = FUNC_2(VAR_8);
    }

    if (!VAR_6)
        return FUNC_0(VAR_1);

    return FUNC_3(VAR_4, VAR_6);
}
