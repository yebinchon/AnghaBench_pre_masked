
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ eval_mode; int volume_pexpr; } ;
typedef TYPE_1__ VolumeContext ;
struct TYPE_7__ {TYPE_1__* priv; } ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char const*,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (char const*,char*) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_2, const char *VAR_3, const char *VAR_4,
                           char *VAR_5, int VAR_6, int VAR_7)
{
    VolumeContext *VAR_8 = VAR_2->priv;
    int VAR_9 = FUNC_0(VAR_0);

    if (!FUNC_3(VAR_3, "volume")) {
        if ((VAR_9 = FUNC_1(&VAR_8->volume_pexpr, VAR_4, VAR_2)) < 0)
            return VAR_9;
        if (VAR_8->eval_mode == VAR_1)
            FUNC_2(VAR_2);
    }

    return VAR_9;
}
