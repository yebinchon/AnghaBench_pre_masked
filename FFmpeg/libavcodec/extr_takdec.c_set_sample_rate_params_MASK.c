
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sample_rate; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int uval; int subframe_scale; } ;
typedef TYPE_1__ TAKDecContext ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (long long,int) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_0)
{
    TAKDecContext *VAR_1 = VAR_0->priv_data;
    int VAR_2;

    if (VAR_0->sample_rate < 11025) {
        VAR_2 = 3;
    } else if (VAR_0->sample_rate < 22050) {
        VAR_2 = 2;
    } else if (VAR_0->sample_rate < 44100) {
        VAR_2 = 1;
    } else {
        VAR_2 = 0;
    }
    VAR_1->uval = FUNC_0((VAR_0->sample_rate + 511LL) >> 9, 4) << VAR_2;
    VAR_1->subframe_scale = FUNC_0((VAR_0->sample_rate + 511LL) >> 9, 4) << 1;
}
