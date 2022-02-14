
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* priv; int ** inputs; } ;
struct TYPE_6__ {int x; int y; int w; int h; int thickness; int replace; } ;
typedef TYPE_1__ DrawBoxContext ;
typedef int AVFilterLink ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char const*,char const*,char*,int,int) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(AVFilterContext *VAR_0, const char *VAR_1, const char *VAR_2, char *VAR_3, int VAR_4, int VAR_5)
{
    AVFilterLink *VAR_6 = VAR_0->inputs[0];
    DrawBoxContext *VAR_7 = VAR_0->priv;
    int VAR_8 = VAR_7->x;
    int VAR_9 = VAR_7->y;
    int VAR_10 = VAR_7->w;
    int VAR_11 = VAR_7->h;
    int VAR_12 = VAR_7->thickness;
    int VAR_13 = VAR_7->replace;
    int VAR_14;

    VAR_14 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    if (VAR_14 < 0)
        return VAR_14;

    VAR_14 = FUNC_2(VAR_0);
    if (VAR_14 < 0)
        goto end;
    VAR_14 = FUNC_0(VAR_6);;
end:
    if (VAR_14 < 0) {
        VAR_7->x = VAR_8;
        VAR_7->y = VAR_9;
        VAR_7->w = VAR_10;
        VAR_7->h = VAR_11;
        VAR_7->thickness = VAR_12;
        VAR_7->replace = VAR_13;
    }

    return VAR_14;
}
