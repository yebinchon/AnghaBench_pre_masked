
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int filter; } ;
struct TYPE_6__ {TYPE_3__* priv; } ;
struct TYPE_5__ {int format; TYPE_2__* dst; } ;
typedef TYPE_1__ AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;
typedef TYPE_3__ ASoftClipContext ;






 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(AVFilterLink *VAR_2)
{
    AVFilterContext *VAR_3 = VAR_2->dst;
    ASoftClipContext *VAR_4 = VAR_3->priv;

    switch (VAR_2->format) {
    case 129:
    case 128: VAR_4->filter = VAR_1; break;
    case 131:
    case 130: VAR_4->filter = VAR_0; break;
    }

    return 0;
}
