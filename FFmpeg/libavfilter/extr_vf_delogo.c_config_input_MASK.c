
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int w; int h; TYPE_1__* dst; } ;
struct TYPE_7__ {int x; int band; int w; int y; int h; } ;
struct TYPE_6__ {TYPE_2__* priv; } ;
typedef TYPE_2__ DelogoContext ;
typedef TYPE_3__ AVFilterLink ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;

__attribute__((used)) static int FUNC_2(AVFilterLink *VAR_2)
{
    DelogoContext *VAR_3 = VAR_2->dst->priv;


    if (VAR_3->x + (VAR_3->band - 1) < 0 || VAR_3->x + VAR_3->w - (VAR_3->band*2 - 2) > VAR_2->w ||
        VAR_3->y + (VAR_3->band - 1) < 0 || VAR_3->y + VAR_3->h - (VAR_3->band*2 - 2) > VAR_2->h) {
        FUNC_1(VAR_3, VAR_0, "Logo area is outside of the frame.\n");
        return FUNC_0(VAR_1);
    }

    return 0;
}
