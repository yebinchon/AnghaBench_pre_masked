
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {unsigned int objecttype; int sample_rate_index; int pce_size; int write_adts; int pce_data; int channel_conf; } ;
struct TYPE_5__ {unsigned int object_type; int sampling_index; int chan_config; } ;
typedef int PutBitContext ;
typedef TYPE_1__ MPEG4AudioConfig ;
typedef int GetBitContext ;
typedef int AVFormatContext ;
typedef TYPE_2__ ADTSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,int const*,int,int,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int const*,int) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_3, ADTSContext *VAR_4, const uint8_t *VAR_5, int VAR_6)
{
    GetBitContext VAR_7;
    PutBitContext VAR_8;
    MPEG4AudioConfig VAR_9;
    int VAR_10;

    FUNC_5(&VAR_7, VAR_5, VAR_6 * 8);
    VAR_10 = FUNC_1(&VAR_9, VAR_5, VAR_6, 1, VAR_3);
    if (VAR_10 < 0)
        return VAR_10;
    FUNC_8(&VAR_7, VAR_10);
    VAR_4->objecttype = VAR_9.object_type - 1;
    VAR_4->sample_rate_index = VAR_9.sampling_index;
    VAR_4->channel_conf = VAR_9.chan_config;

    if (VAR_4->objecttype > 3U) {
        FUNC_0(VAR_3, VAR_1, "MPEG-4 AOT %d is not allowed in ADTS\n", VAR_4->objecttype+1);
        return VAR_0;
    }
    if (VAR_4->sample_rate_index == 15) {
        FUNC_0(VAR_3, VAR_1, "Escape sample rate index illegal in ADTS\n");
        return VAR_0;
    }
    if (FUNC_4(&VAR_7, 1)) {
        FUNC_0(VAR_3, VAR_1, "960/120 MDCT window is not allowed in ADTS\n");
        return VAR_0;
    }
    if (FUNC_4(&VAR_7, 1)) {
        FUNC_0(VAR_3, VAR_1, "Scalable configurations are not allowed in ADTS\n");
        return VAR_0;
    }
    if (FUNC_4(&VAR_7, 1)) {
        FUNC_0(VAR_3, VAR_1, "Extension flag is not allowed in ADTS\n");
        return VAR_0;
    }
    if (!VAR_4->channel_conf) {
        FUNC_6(&VAR_8, VAR_4->pce_data, VAR_2);

        FUNC_7(&VAR_8, 3, 5);
        VAR_4->pce_size = (FUNC_2(&VAR_8, &VAR_7) + 3) / 8;
        FUNC_3(&VAR_8);
    }

    VAR_4->write_adts = 1;

    return 0;
}
