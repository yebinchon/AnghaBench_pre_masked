
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int stereo_in; TYPE_1__* ch; scalar_t__ hybrid_bitrate; } ;
typedef TYPE_2__ WavpackFrameContext ;
struct TYPE_4__ {int bitrate_acc; int bitrate_delta; void* error_limit; int slow_level; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(WavpackFrameContext *VAR_2)
{
    int VAR_3, VAR_4[2], VAR_5[2];

    for (VAR_3 = 0; VAR_3 <= VAR_2->stereo_in; VAR_3++) {
        if (VAR_2->ch[VAR_3].bitrate_acc > VAR_1 - VAR_2->ch[VAR_3].bitrate_delta)
            return VAR_0;
        VAR_2->ch[VAR_3].bitrate_acc += VAR_2->ch[VAR_3].bitrate_delta;
        VAR_4[VAR_3] = VAR_2->ch[VAR_3].bitrate_acc >> 16;
        VAR_5[VAR_3] = FUNC_0(VAR_2->ch[VAR_3].slow_level);
    }
    if (VAR_2->stereo_in && VAR_2->hybrid_bitrate) {
        int VAR_6 = (VAR_5[1] - VAR_5[0] + VAR_4[1] + 1) >> 1;
        if (VAR_6 > VAR_4[0]) {
            VAR_4[1] = VAR_4[0] * 2;
            VAR_4[0] = 0;
        } else if (-VAR_6 > VAR_4[0]) {
            VAR_4[0] *= 2;
            VAR_4[1] = 0;
        } else {
            VAR_4[1] = VAR_4[0] + VAR_6;
            VAR_4[0] = VAR_4[0] - VAR_6;
        }
    }
    for (VAR_3 = 0; VAR_3 <= VAR_2->stereo_in; VAR_3++) {
        if (VAR_2->hybrid_bitrate) {
            if (VAR_5[VAR_3] - VAR_4[VAR_3] > -0x100)
                VAR_2->ch[VAR_3].error_limit = FUNC_1(VAR_5[VAR_3] - VAR_4[VAR_3] + 0x100);
            else
                VAR_2->ch[VAR_3].error_limit = 0;
        } else {
            VAR_2->ch[VAR_3].error_limit = FUNC_1(VAR_4[VAR_3]);
        }
    }

    return 0;
}
