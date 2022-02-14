
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ color_range; scalar_t__ colorspace; scalar_t__ color_primaries; scalar_t__ color_trc; } ;
typedef TYPE_1__ AVFrame ;
typedef int AVFilterContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 char* FUNC_2 (scalar_t__) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int ,char*,...) ;

__attribute__((used)) static void FUNC_5(AVFilterContext *VAR_5, AVFrame *VAR_6)
{
    const char *VAR_7 = FUNC_1(VAR_6->color_range);
    const char *VAR_8 = FUNC_2(VAR_6->colorspace);
    const char *VAR_9 = FUNC_0(VAR_6->color_primaries);
    const char *VAR_10 = FUNC_3(VAR_6->color_trc);

    if (!VAR_7 || VAR_6->color_range == VAR_1) {
        FUNC_4(VAR_5, VAR_4, "color_range:unknown");
    } else {
        FUNC_4(VAR_5, VAR_4, "color_range:%s", VAR_7);
    }

    if (!VAR_8 || VAR_6->colorspace == VAR_2) {
        FUNC_4(VAR_5, VAR_4, " color_space:unknown");
    } else {
        FUNC_4(VAR_5, VAR_4, " color_space:%s", VAR_8);
    }

    if (!VAR_9 || VAR_6->color_primaries == VAR_0) {
        FUNC_4(VAR_5, VAR_4, " color_primaries:unknown");
    } else {
        FUNC_4(VAR_5, VAR_4, " color_primaries:%s", VAR_9);
    }

    if (!VAR_10 || VAR_6->color_trc == VAR_3) {
        FUNC_4(VAR_5, VAR_4, " color_trc:unknown");
    } else {
        FUNC_4(VAR_5, VAR_4, " color_trc:%s", VAR_10);
    }
    FUNC_4(VAR_5, VAR_4, "\n");
}
