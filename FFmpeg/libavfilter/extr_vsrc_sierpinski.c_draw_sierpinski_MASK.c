
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* internal; TYPE_3__** outputs; TYPE_2__* priv; } ;
struct TYPE_10__ {int h; } ;
struct TYPE_9__ {scalar_t__ pos_x; scalar_t__ dest_x; scalar_t__ pos_y; scalar_t__ dest_y; int jump; int draw_slice; int lfg; } ;
struct TYPE_8__ {int (* execute ) (TYPE_4__*,int ,int *,int *,int ) ;} ;
typedef TYPE_2__ SierpinskiContext ;
typedef int AVFrame ;
typedef TYPE_3__ AVFilterLink ;
typedef TYPE_4__ AVFilterContext ;


 int FUNC_0 (int ,int ) ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ,int *,int *,int ) ;

__attribute__((used)) static void FUNC_4(AVFilterContext *VAR_0, AVFrame *VAR_1)
{
    SierpinskiContext *VAR_2 = VAR_0->priv;
    AVFilterLink *VAR_3 = VAR_0->outputs[0];

    if (VAR_2->pos_x == VAR_2->dest_x && VAR_2->pos_y == VAR_2->dest_y) {
        unsigned int VAR_4 = FUNC_1(&VAR_2->lfg);
        int VAR_5 = 2 * VAR_2->jump + 1;

        VAR_2->dest_x += (int)((VAR_4 & 0xffff) % VAR_5) - VAR_2->jump;
        VAR_2->dest_y += (int)((VAR_4 >> 16) % VAR_5) - VAR_2->jump;
    } else {
        if (VAR_2->pos_x < VAR_2->dest_x)
            VAR_2->pos_x++;
        else if (VAR_2->pos_x > VAR_2->dest_x)
            VAR_2->pos_x--;

        if (VAR_2->pos_y < VAR_2->dest_y)
            VAR_2->pos_y++;
        else if (VAR_2->pos_y > VAR_2->dest_y)
            VAR_2->pos_y--;
    }

    VAR_0->internal->execute(VAR_0, VAR_2->draw_slice, VAR_1, ((void*)0), FUNC_0(VAR_3->h, FUNC_2(VAR_0)));
}
