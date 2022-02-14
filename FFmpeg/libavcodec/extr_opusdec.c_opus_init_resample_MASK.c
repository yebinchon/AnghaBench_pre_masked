
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const uint8_t ;
struct TYPE_4__ {size_t bandwidth; } ;
struct TYPE_5__ {int avctx; TYPE_1__ packet; int swr; int silk_samplerate; } ;
typedef TYPE_2__ OpusStreamContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int *,int ,int const**,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(OpusStreamContext *VAR_2)
{
    static const float VAR_3[16] = { 0.0 };
    const uint8_t *VAR_4[2] = { (uint8_t*)VAR_3, (uint8_t*)VAR_3 };
    int VAR_5;

    FUNC_1(VAR_2->swr, "in_sample_rate", VAR_2->silk_samplerate, 0);
    VAR_5 = FUNC_3(VAR_2->swr);
    if (VAR_5 < 0) {
        FUNC_0(VAR_2->avctx, VAR_0, "Error opening the resampler.\n");
        return VAR_5;
    }

    VAR_5 = FUNC_2(VAR_2->swr,
                      ((void*)0), 0,
                      VAR_4, VAR_1[VAR_2->packet.bandwidth]);
    if (VAR_5 < 0) {
        FUNC_0(VAR_2->avctx, VAR_0,
               "Error feeding initial silence to the resampler.\n");
        return VAR_5;
    }

    return 0;
}
