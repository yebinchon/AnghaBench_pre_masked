
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ passthrough; int dir; scalar_t__ output_width; scalar_t__ output_height; } ;
typedef TYPE_1__ VAAPIVPPContext ;
typedef TYPE_1__ TransposeVAAPIContext ;
struct TYPE_10__ {TYPE_3__** inputs; TYPE_1__* priv; } ;
struct TYPE_9__ {scalar_t__ w; scalar_t__ h; int hw_frames_ctx; TYPE_4__* src; } ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_4__*,int ,char*,...) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_4(AVFilterLink *VAR_6)
{
    AVFilterContext *VAR_7 = VAR_6->src;
    VAAPIVPPContext *VAR_8 = VAR_7->priv;
    TransposeVAAPIContext *VAR_9 = VAR_7->priv;
    AVFilterLink *VAR_10 = VAR_7->inputs[0];

    if ((VAR_10->w >= VAR_10->h && VAR_9->passthrough == VAR_3) ||
        (VAR_10->w <= VAR_10->h && VAR_9->passthrough == VAR_5)) {
        VAR_6->hw_frames_ctx = FUNC_1(VAR_10->hw_frames_ctx);
        if (!VAR_6->hw_frames_ctx)
            return FUNC_0(VAR_2);
        FUNC_2(VAR_7, VAR_1,
               "w:%d h:%d -> w:%d h:%d (passthrough mode)\n",
               VAR_10->w, VAR_10->h, VAR_10->w, VAR_10->h);
        return 0;
    }

    VAR_9->passthrough = VAR_4;

    switch (VAR_9->dir) {
    case 130:
    case 131:
    case 129:
    case 128:
        VAR_8->output_width = VAR_7->inputs[0]->h;
        VAR_8->output_height = VAR_7->inputs[0]->w;
        FUNC_2(VAR_7, VAR_0, "swap width and height for clock/cclock rotation\n");
        break;
    default:
        break;
    }

    return FUNC_3(VAR_6);
}
