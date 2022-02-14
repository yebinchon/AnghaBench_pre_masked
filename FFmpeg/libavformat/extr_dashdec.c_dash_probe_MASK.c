
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ AVProbeData ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(const AVProbeData *VAR_1)
{
    if (!FUNC_0(VAR_1->buf, "<MPD"))
        return 0;

    if (FUNC_0(VAR_1->buf, "dash:profile:isoff-on-demand:2011") ||
        FUNC_0(VAR_1->buf, "dash:profile:isoff-live:2011") ||
        FUNC_0(VAR_1->buf, "dash:profile:isoff-live:2012") ||
        FUNC_0(VAR_1->buf, "dash:profile:isoff-main:2011")) {
        return VAR_0;
    }
    if (FUNC_0(VAR_1->buf, "dash:profile")) {
        return VAR_0;
    }

    return 0;
}
