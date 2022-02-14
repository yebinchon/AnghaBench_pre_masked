
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct FLACStreaminfo {int max_blocksize; scalar_t__ channels; int bps; int samples; void* samplerate; void* max_framesize; } ;
struct TYPE_5__ {scalar_t__ channels; int bits_per_raw_sample; int channel_layout; void* sample_rate; } ;
typedef int GetBitContext ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int const*,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

int FUNC_9(AVCodecContext *VAR_5, struct FLACStreaminfo *VAR_6,
                              const uint8_t *VAR_7)
{
    GetBitContext VAR_8;
    FUNC_6(&VAR_8, VAR_7, VAR_4*8);

    FUNC_7(&VAR_8, 16);
    VAR_6->max_blocksize = FUNC_3(&VAR_8, 16);
    if (VAR_6->max_blocksize < VAR_3) {
        FUNC_1(VAR_5, VAR_2, "invalid max blocksize: %d\n",
               VAR_6->max_blocksize);
        VAR_6->max_blocksize = 16;
        return VAR_0;
    }

    FUNC_7(&VAR_8, 24);
    VAR_6->max_framesize = FUNC_5(&VAR_8, 24);

    VAR_6->samplerate = FUNC_5(&VAR_8, 20);
    VAR_6->channels = FUNC_3(&VAR_8, 3) + 1;
    VAR_6->bps = FUNC_3(&VAR_8, 5) + 1;

    if (VAR_6->bps < 4) {
        FUNC_1(VAR_5, VAR_1, "invalid bps: %d\n", VAR_6->bps);
        VAR_6->bps = 16;
        return VAR_0;
    }

    VAR_5->channels = VAR_6->channels;
    VAR_5->sample_rate = VAR_6->samplerate;
    VAR_5->bits_per_raw_sample = VAR_6->bps;

    if (!VAR_5->channel_layout ||
        FUNC_0(VAR_5->channel_layout) != VAR_5->channels)
        FUNC_2(VAR_5);

    VAR_6->samples = FUNC_4(&VAR_8, 36);

    FUNC_8(&VAR_8, 64);
    FUNC_8(&VAR_8, 64);

    return 0;
}
