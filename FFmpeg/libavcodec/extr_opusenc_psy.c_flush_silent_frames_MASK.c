
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int framesize; int frames; } ;
struct TYPE_7__ {int buffered_steps; TYPE_1__ p; TYPE_2__** steps; } ;
struct TYPE_6__ {int silence; } ;
typedef TYPE_3__ OpusPsyContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(OpusPsyContext *VAR_2)
{
    int VAR_3, VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->buffered_steps; VAR_4++)
        if (!VAR_2->steps[VAR_4]->silence)
            break;
    if (--VAR_4 < 0)
        return 0;

    for (VAR_3 = VAR_1; VAR_3 > VAR_0; VAR_3--) {
        if ((1 << VAR_3) > VAR_4)
            continue;
        VAR_2->p.frames = FUNC_0(VAR_4 / (1 << VAR_3), 48 >> VAR_3);
        VAR_2->p.framesize = VAR_3;
        return 1;
    }

    return 0;
}
