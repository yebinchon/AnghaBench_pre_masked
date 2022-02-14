
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {scalar_t__ black_fade; scalar_t__ alpha; } ;
typedef TYPE_1__ FadeContext ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1)
{
    const FadeContext *VAR_2 = VAR_1->priv;
    static const enum AVPixelFormat VAR_3[] = {
        135, 137, 138,
        139, 140,
        128, 130, 131,
        136, 129,
        134, 133, 132,
        142, 145,
        146, 147,
        141, 144,
        143
    };
    static const enum AVPixelFormat VAR_4[] = {
        142, 145,
        146, 147,
        141, 144,
        143
    };
    static const enum AVPixelFormat VAR_5[] = {
        134, 133, 132,
        146, 147,
        141, 144,
        143
    };
    static const enum AVPixelFormat VAR_6[] = {
        146, 147,
        141, 144,
        143
    };
    AVFilterFormats *VAR_7;

    if (VAR_2->alpha) {
        if (VAR_2->black_fade)
            VAR_7 = FUNC_1(VAR_5);
        else
            VAR_7 = FUNC_1(VAR_6);
    } else {
        if (VAR_2->black_fade)
            VAR_7 = FUNC_1(VAR_3);
        else
            VAR_7 = FUNC_1(VAR_4);
    }
    if (!VAR_7)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_1, VAR_7);
}
