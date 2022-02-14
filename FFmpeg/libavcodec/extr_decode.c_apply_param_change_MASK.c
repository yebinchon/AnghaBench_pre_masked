
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {int err_recognition; scalar_t__ height; scalar_t__ width; scalar_t__ sample_rate; int channel_layout; scalar_t__ channels; TYPE_1__* codec; } ;
struct TYPE_6__ {int capabilities; } ;
typedef int AVPacket ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (TYPE_2__*,int ,char*) ;
 int * FUNC_2 (int const*,int ,int*) ;
 scalar_t__ FUNC_3 (int const**) ;
 int FUNC_4 (int const**) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_11, const AVPacket *VAR_12)
{
    int VAR_13 = 0, VAR_14;
    const uint8_t *VAR_15;
    uint32_t VAR_16;
    int64_t VAR_17;

    VAR_15 = FUNC_2(VAR_12, VAR_4, &VAR_13);
    if (!VAR_15)
        return 0;

    if (!(VAR_11->codec->capabilities & VAR_1)) {
        FUNC_1(VAR_11, VAR_3, "This decoder does not support parameter "
               "changes, but PARAM_CHANGE side data was sent to it.\n");
        VAR_14 = FUNC_0(VAR_9);
        goto fail2;
    }

    if (VAR_13 < 4)
        goto fail;

    VAR_16 = FUNC_3(&VAR_15);
    VAR_13 -= 4;

    if (VAR_16 & VAR_5) {
        if (VAR_13 < 4)
            goto fail;
        VAR_17 = FUNC_3(&VAR_15);
        if (VAR_17 <= 0 || VAR_17 > VAR_10) {
            FUNC_1(VAR_11, VAR_3, "Invalid channel count");
            VAR_14 = VAR_0;
            goto fail2;
        }
        VAR_11->channels = VAR_17;
        VAR_13 -= 4;
    }
    if (VAR_16 & VAR_6) {
        if (VAR_13 < 8)
            goto fail;
        VAR_11->channel_layout = FUNC_4(&VAR_15);
        VAR_13 -= 8;
    }
    if (VAR_16 & VAR_8) {
        if (VAR_13 < 4)
            goto fail;
        VAR_17 = FUNC_3(&VAR_15);
        if (VAR_17 <= 0 || VAR_17 > VAR_10) {
            FUNC_1(VAR_11, VAR_3, "Invalid sample rate");
            VAR_14 = VAR_0;
            goto fail2;
        }
        VAR_11->sample_rate = VAR_17;
        VAR_13 -= 4;
    }
    if (VAR_16 & VAR_7) {
        if (VAR_13 < 8)
            goto fail;
        VAR_11->width = FUNC_3(&VAR_15);
        VAR_11->height = FUNC_3(&VAR_15);
        VAR_13 -= 8;
        VAR_14 = FUNC_5(VAR_11, VAR_11->width, VAR_11->height);
        if (VAR_14 < 0)
            goto fail2;
    }

    return 0;
fail:
    FUNC_1(VAR_11, VAR_3, "PARAM_CHANGE side data too small.\n");
    VAR_14 = VAR_0;
fail2:
    if (VAR_14 < 0) {
        FUNC_1(VAR_11, VAR_3, "Error applying parameter changes.\n");
        if (VAR_11->err_recognition & VAR_2)
            return VAR_14;
    }
    return 0;
}
