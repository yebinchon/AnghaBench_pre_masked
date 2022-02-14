
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* priv; } ;
struct TYPE_5__ {int tempo; int pitch; int rbs; } ;
typedef TYPE_1__ RubberBandContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (TYPE_2__*,char const*,char const*,char*,int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_0, const char *VAR_1, const char *VAR_2,
                           char *VAR_3, int VAR_4, int VAR_5)
{
    RubberBandContext *VAR_6 = VAR_0->priv;
    int VAR_7;

    VAR_7 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_7 < 0)
        return VAR_7;

    FUNC_2(VAR_6->rbs, 1. / VAR_6->tempo);
    FUNC_1(VAR_6->rbs, VAR_6->pitch);

    return 0;
}
