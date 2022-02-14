
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_8__ {int channel_layout; int sample_rate; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_1__ AVFilterContext ;
typedef TYPE_2__ ANullContext ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1)
{
    ANullContext *VAR_2 = VAR_1->priv;
    int64_t VAR_3[] = { VAR_2->channel_layout, -1 };
    int VAR_4[] = { VAR_2->sample_rate, -1 };
    int VAR_5;

    if ((VAR_5 = FUNC_4 (VAR_1, FUNC_1 (VAR_0))) < 0 ||
        (VAR_5 = FUNC_3 (VAR_1, FUNC_0 (VAR_3 ))) < 0 ||
        (VAR_5 = FUNC_5 (VAR_1, FUNC_2 (VAR_4 ))) < 0)
        return VAR_5;

    return 0;
}
