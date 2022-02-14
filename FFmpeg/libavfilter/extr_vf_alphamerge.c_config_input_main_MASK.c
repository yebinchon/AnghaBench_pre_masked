
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int format; TYPE_1__* dst; } ;
struct TYPE_6__ {int is_packed_rgb; int rgba_map; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ AlphaMergeContext ;
typedef TYPE_3__ AVFilterLink ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_1)
{
    AlphaMergeContext *VAR_2 = VAR_1->dst->priv;
    VAR_2->is_packed_rgb =
        FUNC_0(VAR_2->rgba_map, VAR_1->format) >= 0 &&
        VAR_1->format != VAR_0;
    return 0;
}
