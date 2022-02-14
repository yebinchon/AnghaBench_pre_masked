
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {int nb_streams; TYPE_3__** streams; } ;
struct TYPE_8__ {TYPE_1__* codecpar; } ;
struct TYPE_7__ {TYPE_5__* fc; } ;
struct TYPE_6__ {scalar_t__ sample_rate; int frame_size; int channel_layout; int channels; void* bits_per_coded_sample; void* bit_rate; } ;
typedef TYPE_2__ MOVContext ;
typedef int MOVAtom ;
typedef int GetBitContext ;
typedef TYPE_3__ AVStream ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_5__*,int ,char*,...) ;
 int * FUNC_4 (scalar_t__) ;
 int const FUNC_5 (int *,int *,int const) ;
 void* FUNC_6 (int *,int) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;

__attribute__((used)) static int FUNC_11(MOVContext *VAR_11, AVIOContext *VAR_12, MOVAtom VAR_13)
{
    const uint32_t VAR_14 = 20;
    AVStream *VAR_15 = ((void*)0);
    uint8_t *VAR_16 = ((void*)0);
    uint32_t VAR_17 = 0;
    uint32_t VAR_18 = 0;
    GetBitContext VAR_19;

    VAR_16 = FUNC_4(VAR_14 + VAR_7);
    if (!VAR_16) {
        return FUNC_0(VAR_10);
    }
    if (FUNC_5(VAR_12, VAR_16, VAR_14) < VAR_14) {
        FUNC_1(VAR_16);
        return VAR_0;
    }

    FUNC_8(&VAR_19, VAR_16, 8*VAR_14);

    if (VAR_11->fc->nb_streams < 1) {
        FUNC_1(VAR_16);
        return 0;
    }
    VAR_15 = VAR_11->fc->streams[VAR_11->fc->nb_streams-1];

    VAR_15->codecpar->sample_rate = FUNC_7(&VAR_19, 32);
    if (VAR_15->codecpar->sample_rate <= 0) {
        FUNC_3(VAR_11->fc, VAR_8, "Invalid sample rate %d\n", VAR_15->codecpar->sample_rate);
        FUNC_1(VAR_16);
        return VAR_0;
    }
    FUNC_10(&VAR_19, 32);
    VAR_15->codecpar->bit_rate = FUNC_7(&VAR_19, 32);
    VAR_15->codecpar->bits_per_coded_sample = FUNC_6(&VAR_19, 8);
    VAR_17 = FUNC_6(&VAR_19, 2);
    FUNC_9(&VAR_19, 30);
    VAR_18 = FUNC_6(&VAR_19, 16);

    VAR_15->codecpar->frame_size =
            (VAR_17 == 0) ? 512 :
            (VAR_17 == 1) ? 1024 :
            (VAR_17 == 2) ? 2048 :
            (VAR_17 == 3) ? 4096 : 0;

    if (VAR_18 > 0xff) {
        FUNC_3(VAR_11->fc, VAR_9, "Unsupported DTS audio channel layout");
    }
    VAR_15->codecpar->channel_layout =
            ((VAR_18 & 0x1) ? VAR_1 : 0) |
            ((VAR_18 & 0x2) ? VAR_2 : 0) |
            ((VAR_18 & 0x2) ? VAR_3 : 0) |
            ((VAR_18 & 0x4) ? VAR_5 : 0) |
            ((VAR_18 & 0x4) ? VAR_6 : 0) |
            ((VAR_18 & 0x8) ? VAR_4 : 0);

    VAR_15->codecpar->channels = FUNC_2(VAR_15->codecpar->channel_layout);
    FUNC_1(VAR_16);

    return 0;
}
