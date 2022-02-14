
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* priv; } ;
struct TYPE_10__ {int sample_rate; TYPE_5__* dst; } ;
struct TYPE_8__ {double freq; int pwidth; int amount; int srate; int offset; int mode; } ;
struct TYPE_7__ {double freq; int pwidth; int amount; int srate; int offset; int mode; } ;
struct TYPE_9__ {int timing; int bpm; int ms; double hertz; int pwidth; TYPE_2__ lfoR; TYPE_1__ lfoL; int amount; int offset_r; int offset_l; int mode; } ;
typedef TYPE_3__ AudioPulsatorContext ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;





 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(AVFilterLink *VAR_0)
{
    AVFilterContext *VAR_1 = VAR_0->dst;
    AudioPulsatorContext *VAR_2 = VAR_1->priv;
    double VAR_3;

    switch (VAR_2->timing) {
    case 130: VAR_3 = VAR_2->bpm / 60; break;
    case 128: VAR_3 = 1 / (VAR_2->ms / 1000.); break;
    case 129: VAR_3 = VAR_2->hertz; break;
    default: FUNC_0(0);
    }

    VAR_2->lfoL.freq = VAR_3;
    VAR_2->lfoR.freq = VAR_3;
    VAR_2->lfoL.mode = VAR_2->mode;
    VAR_2->lfoR.mode = VAR_2->mode;
    VAR_2->lfoL.offset = VAR_2->offset_l;
    VAR_2->lfoR.offset = VAR_2->offset_r;
    VAR_2->lfoL.srate = VAR_0->sample_rate;
    VAR_2->lfoR.srate = VAR_0->sample_rate;
    VAR_2->lfoL.amount = VAR_2->amount;
    VAR_2->lfoR.amount = VAR_2->amount;
    VAR_2->lfoL.pwidth = VAR_2->pwidth;
    VAR_2->lfoR.pwidth = VAR_2->pwidth;

    return 0;
}
