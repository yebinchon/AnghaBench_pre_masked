
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int format; int h; int w; TYPE_1__* dst; } ;
struct TYPE_6__ {int pp_ctx; } ;
struct TYPE_5__ {TYPE_2__* priv; } ;
typedef TYPE_2__ PPFilterContext ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(AVFilterLink *VAR_7)
{
    int VAR_8 = VAR_1;
    PPFilterContext *VAR_9 = VAR_7->dst->priv;

    switch (VAR_7->format) {
    case 137:
    case 131:
    case 135: VAR_8 |= VAR_3; break;
    case 130:
    case 134: VAR_8 |= VAR_4; break;
    case 136: VAR_8 |= VAR_2; break;
    case 138:
    case 128:
    case 132: VAR_8 |= VAR_6; break;
    case 129:
    case 133: VAR_8 |= VAR_5; break;
    default: FUNC_1(0);
    }

    VAR_9->pp_ctx = FUNC_2(VAR_7->w, VAR_7->h, VAR_8);
    if (!VAR_9->pp_ctx)
        return FUNC_0(VAR_0);
    return 0;
}
