
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {scalar_t__ coupling; } ;
typedef TYPE_1__ DebandContext ;
typedef int AVFilterFormats ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_1)
{
    DebandContext *VAR_2 = VAR_1->priv;

    static const enum AVPixelFormat VAR_3[] = {
        165, 164, 169,
        168, 167, 166,
        149, 155, 160,
        161, 162, 150,
        128, 130, 131,
        132, 129,
        144, 140, 136,
        156, 151, 145,
        141, 137, 133,
        143, 139, 135,
        159, 154, 148,
        158, 153, 147,
        175, 177,
        170, 174,
        173, 172,
        171, 176,
        157, 152, 146,
        142, 138, 134,
        163
    };

    static const enum AVPixelFormat VAR_4[] = {
        149, 128,
        136, 145,
        133, 135,
        148, 147,
        146, 134,
        175, 177,
        170, 174,
        173, 172,
        171, 176,
        163
    };

    AVFilterFormats *VAR_5 = FUNC_1(VAR_2->coupling ? VAR_4 : VAR_3);
    if (!VAR_5)
        return FUNC_0(VAR_0);

    return FUNC_2(VAR_1, VAR_5);
}
