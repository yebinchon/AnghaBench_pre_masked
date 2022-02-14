
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {scalar_t__ ch_mode; } ;
struct TYPE_10__ {int blocksize; scalar_t__ ch_mode; TYPE_3__* subframes; } ;
struct TYPE_11__ {int channels; TYPE_2__ options; TYPE_4__ frame; } ;
struct TYPE_7__ {int coding_mode; } ;
struct TYPE_9__ {int* samples; int obits; TYPE_1__ rc; } ;
typedef TYPE_4__ FlacFrame ;
typedef TYPE_5__ FlacEncodeContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int*,int*,int,int) ;

__attribute__((used)) static void FUNC_1(FlacEncodeContext *VAR_3)
{
    FlacFrame *VAR_4;
    int32_t *VAR_5, *VAR_6;
    int VAR_7, VAR_8;

    VAR_4 = &VAR_3->frame;
    VAR_8 = VAR_4->blocksize;
    VAR_5 = VAR_4->subframes[0].samples;
    VAR_6 = VAR_4->subframes[1].samples;

    if (VAR_3->channels != 2) {
        VAR_4->ch_mode = VAR_0;
        return;
    }

    if (VAR_3->options.ch_mode < 0) {
        int VAR_9 = (1 << VAR_4->subframes[0].rc.coding_mode) - 2;
        VAR_4->ch_mode = FUNC_0(VAR_5, VAR_6, VAR_8, VAR_9);
    } else
        VAR_4->ch_mode = VAR_3->options.ch_mode;


    if (VAR_4->ch_mode == VAR_0)
        return;
    if (VAR_4->ch_mode == VAR_2) {
        int32_t VAR_10;
        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
            VAR_10 = VAR_5[VAR_7];
            VAR_5[VAR_7] = (VAR_10 + VAR_6[VAR_7]) >> 1;
            VAR_6[VAR_7] = VAR_10 - VAR_6[VAR_7];
        }
        VAR_4->subframes[1].obits++;
    } else if (VAR_4->ch_mode == VAR_1) {
        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
            VAR_6[VAR_7] = VAR_5[VAR_7] - VAR_6[VAR_7];
        VAR_4->subframes[1].obits++;
    } else {
        for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++)
            VAR_5[VAR_7] -= VAR_6[VAR_7];
        VAR_4->subframes[0].obits++;
    }
}
