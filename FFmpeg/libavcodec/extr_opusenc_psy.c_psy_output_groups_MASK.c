
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int frames; void* framesize; int bandwidth; int mode; } ;
struct TYPE_12__ {TYPE_2__ p; TYPE_1__** steps; TYPE_4__* avctx; TYPE_3__* options; } ;
struct TYPE_11__ {int sample_rate; } ;
struct TYPE_10__ {int max_delay_ms; } ;
struct TYPE_8__ {scalar_t__ silence; } ;
typedef TYPE_5__ OpusPsyContext ;


 int VAR_0 ;
 void* FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_3(OpusPsyContext *VAR_3)
{
    int VAR_4 = (VAR_3->options->max_delay_ms*VAR_3->avctx->sample_rate)/1000;
    int VAR_5 = FUNC_0(FUNC_1(VAR_4), VAR_0);


    VAR_3->p.mode = VAR_2;
    VAR_3->p.bandwidth = VAR_1;


    if (VAR_3->steps[0]->silence && FUNC_2(VAR_3))
        return;

    VAR_3->p.framesize = FUNC_0(VAR_5, VAR_0);
    VAR_3->p.frames = 1;
}
