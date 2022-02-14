
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {scalar_t__ is_rgb; } ;
typedef TYPE_1__ GEQContext ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1)
{
    GEQContext *VAR_2 = VAR_1->priv;
    static const enum AVPixelFormat VAR_3[] = {
        145, 153, 159,
        160, 161, 147,
        131, 135, 139,
        164,
        140, 148, 154,
        128, 132, 136,
        144, 152, 158,
        146,
        130, 134, 138,
        163, 168,
        143, 151, 157,
        167, 166,
        142, 150, 156,
        141, 149, 155,
        129, 133, 137,
        165,
        162
    };
    static const enum AVPixelFormat VAR_4[] = {
        174, 178,
        169,
        173, 177,
        172, 176,
        171,
        170, 175,
        162
    };
    AVFilterFormats *VAR_5;

    if (VAR_2->is_rgb) {
        VAR_5 = FUNC_1(VAR_4);
    } else
        VAR_5 = FUNC_1(VAR_3);
    if (!VAR_5)
        return FUNC_0(VAR_0);
    return FUNC_2(VAR_1, VAR_5);
}
