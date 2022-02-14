
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ** inputs; int ** outputs; TYPE_1__* priv; } ;
struct TYPE_5__ {int x; int y; int w; int h; } ;
typedef TYPE_1__ CropContext ;
typedef int AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,char const*,char const*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(AVFilterContext *VAR_1, const char *VAR_2, const char *VAR_3,
                           char *VAR_4, int VAR_5, int VAR_6)
{
    CropContext *VAR_7 = VAR_1->priv;
    int VAR_8;

    if ( !FUNC_4(VAR_2, "out_w") || !FUNC_4(VAR_2, "w")
        || !FUNC_4(VAR_2, "out_h") || !FUNC_4(VAR_2, "h")
        || !FUNC_4(VAR_2, "x") || !FUNC_4(VAR_2, "y")) {

        int VAR_9 = VAR_7->x;
        int VAR_10 = VAR_7->y;
        int VAR_11 = VAR_7->w;
        int VAR_12 = VAR_7->h;

        AVFilterLink *VAR_13 = VAR_1->outputs[0];
        AVFilterLink *VAR_14 = VAR_1->inputs[0];

        FUNC_1(VAR_7, VAR_2, VAR_3, 0);

        if ((VAR_8 = FUNC_2(VAR_14)) < 0) {
            VAR_7->x = VAR_9;
            VAR_7->y = VAR_10;
            VAR_7->w = VAR_11;
            VAR_7->h = VAR_12;
            return VAR_8;
        }

        VAR_8 = FUNC_3(VAR_13);

    } else
        VAR_8 = FUNC_0(VAR_0);

    return VAR_8;
}
