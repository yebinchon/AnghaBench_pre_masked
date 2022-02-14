
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {scalar_t__ inplace; } ;
typedef TYPE_1__ PreMultiplyContext ;
typedef TYPE_2__ AVFilterContext ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_2(AVFilterContext *VAR_0)
{
    PreMultiplyContext *VAR_1 = VAR_0->priv;

    static const enum AVPixelFormat VAR_2[] = {
        138, 128,
        133, 137,
        136, 135,
        134,
        151, 146, 150,
        149, 148, 147,
        141, 140, 145, 144, 143, 142,
        139
    };

    static const enum AVPixelFormat VAR_3[] = {
        132,
        129, 131, 130,
        155,
        154, 153, 152,
        139
    };

    return FUNC_1(VAR_0, FUNC_0(VAR_1->inplace ? VAR_3 : VAR_2));
}
