
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ channel_layouts; scalar_t__ sample_rates; scalar_t__ formats; } ;
struct TYPE_7__ {TYPE_2__* priv; } ;
typedef TYPE_1__ AVFilterContext ;
typedef TYPE_2__ AFormatContext ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_1)
{
    AFormatContext *VAR_2 = VAR_1->priv;
    int VAR_3;

    VAR_3 = FUNC_4(VAR_1, VAR_2->formats ? VAR_2->formats :
                                            FUNC_1(VAR_0));
    if (VAR_3 < 0)
        return VAR_3;
    VAR_3 = FUNC_5(VAR_1, VAR_2->sample_rates ? VAR_2->sample_rates :
                                                     FUNC_2());
    if (VAR_3 < 0)
        return VAR_3;
    return FUNC_3(VAR_1, VAR_2->channel_layouts ? VAR_2->channel_layouts :
                                                            FUNC_0());
}
