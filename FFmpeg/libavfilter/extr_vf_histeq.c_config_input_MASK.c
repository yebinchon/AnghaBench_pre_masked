
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; } ;
struct TYPE_6__ {int format; TYPE_3__* dst; } ;
struct TYPE_5__ {int bpp; int rgba_map; } ;
typedef TYPE_1__ HisteqContext ;
typedef int AVPixFmtDescriptor ;
typedef TYPE_2__ AVFilterLink ;
typedef TYPE_3__ AVFilterContext ;


 int FUNC_0 (int const*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    HisteqContext *VAR_2 = VAR_1->priv;
    const AVPixFmtDescriptor *VAR_3 = FUNC_1(VAR_0->format);

    VAR_2->bpp = FUNC_0(VAR_3) / 8;
    FUNC_2(VAR_2->rgba_map, VAR_0->format);

    return 0;
}
