
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_12__ ;
typedef struct TYPE_23__ TYPE_11__ ;
typedef struct TYPE_22__ TYPE_10__ ;


struct TYPE_25__ {int num; scalar_t__ den; } ;
struct dshow_ctx {scalar_t__ video_codec_id; int pixel_format; int requested_width; scalar_t__ requested_height; int sample_rate; scalar_t__ sample_size; int channels; TYPE_1__ requested_framerate; scalar_t__ framerate; } ;
typedef int int64_t ;
typedef enum dshowDeviceType { ____Placeholder_dshowDeviceType } dshowDeviceType ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef enum AVCodecID { ____Placeholder_AVCodecID } AVCodecID ;
struct TYPE_28__ {int nSamplesPerSec; scalar_t__ wBitsPerSample; int nChannels; } ;
typedef TYPE_4__ WAVEFORMATEX ;
struct TYPE_27__ {int cx; scalar_t__ cy; } ;
struct TYPE_26__ {int cx; scalar_t__ cy; } ;
struct TYPE_29__ {int MaxFrameInterval; int MinFrameInterval; TYPE_3__ MinOutputSize; TYPE_2__ MaxOutputSize; } ;
typedef TYPE_5__ VIDEO_STREAM_CONFIG_CAPS ;
struct TYPE_32__ {int biWidth; scalar_t__ biHeight; int biBitCount; scalar_t__ biCompression; } ;
struct TYPE_30__ {int AvgTimePerFrame; TYPE_8__ bmiHeader; } ;
typedef TYPE_6__ VIDEOINFOHEADER2 ;
struct TYPE_31__ {int AvgTimePerFrame; TYPE_8__ bmiHeader; } ;
typedef TYPE_7__ VIDEOINFOHEADER ;
struct TYPE_33__ {struct dshow_ctx* priv_data; } ;
struct TYPE_24__ {struct TYPE_24__* pbFormat; int formattype; } ;
struct TYPE_23__ {int MinimumChannels; scalar_t__ MinimumBitsPerSample; int MinimumSampleFrequency; int MaximumChannels; scalar_t__ MaximumBitsPerSample; int MaximumSampleFrequency; } ;
struct TYPE_22__ {int name; } ;
typedef int IPin ;
typedef int IAMStreamConfig ;
typedef TYPE_8__ BITMAPINFOHEADER ;
typedef TYPE_9__ AVFormatContext ;
typedef int AVCodecTag ;
typedef TYPE_10__ AVCodec ;
typedef TYPE_11__ AUDIO_STREAM_CONFIG_CAPS ;
typedef TYPE_12__ AM_MEDIA_TYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_12__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int*,int*) ;
 int FUNC_2 (int *,int,TYPE_12__**,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_12__*) ;
 int VAR_7 ;
 int FUNC_5 (int *,int *,void**) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_7 (int const* const*,scalar_t__) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (TYPE_9__*,int ,char*,int,...) ;
 void* FUNC_11 (int) ;
 TYPE_10__* FUNC_12 (int) ;
 int const* FUNC_13 () ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (TYPE_12__*) ;
 int FUNC_16 (TYPE_11__*) ;
 int FUNC_17 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_18(AVFormatContext *VAR_10, enum dshowDeviceType VAR_11,
                    IPin *VAR_12, int *VAR_13)
{
    struct dshow_ctx *VAR_14 = VAR_10->priv_data;
    IAMStreamConfig *VAR_15 = ((void*)0);
    AM_MEDIA_TYPE *VAR_16 = ((void*)0);
    int VAR_17 = 0;
    void *VAR_18 = ((void*)0);
    int VAR_19, VAR_20, VAR_21, VAR_22;

    if (FUNC_5(VAR_12, &VAR_7, (void **) &VAR_15) != VAR_8)
        return;
    if (FUNC_1(VAR_15, &VAR_20, &VAR_21) != VAR_8)
        goto end;

    VAR_18 = FUNC_11(VAR_21);
    if (!VAR_18)
        goto end;

    for (VAR_19 = 0; VAR_19 < VAR_20 && !VAR_17; VAR_19++) {
        VAR_22 = FUNC_2(VAR_15, VAR_19, &VAR_16, (void *) VAR_18);
        if (VAR_22 != VAR_8)
            goto next;




        if (VAR_11 == VAR_9) {
            VIDEO_STREAM_CONFIG_CAPS *VAR_23 = VAR_18;
            BITMAPINFOHEADER *VAR_24;
            int64_t *VAR_25;
            const AVCodecTag *const VAR_26[] = { FUNC_13(), ((void*)0) };



            if (FUNC_6(&VAR_16->formattype, &VAR_4)) {
                VIDEOINFOHEADER *VAR_27 = (void *) VAR_16->pbFormat;
                VAR_25 = &VAR_27->AvgTimePerFrame;
                VAR_24 = &VAR_27->bmiHeader;
            } else if (FUNC_6(&VAR_16->formattype, &VAR_5)) {
                VIDEOINFOHEADER2 *VAR_28 = (void *) VAR_16->pbFormat;
                VAR_25 = &VAR_28->AvgTimePerFrame;
                VAR_24 = &VAR_28->bmiHeader;
            } else {
                goto next;
            }
            if (!VAR_13) {
                enum AVPixelFormat VAR_29 = FUNC_14(VAR_24->biCompression, VAR_24->biBitCount);
                if (VAR_29 == VAR_3) {
                    enum AVCodecID VAR_30 = FUNC_7(VAR_26, VAR_24->biCompression);
                    AVCodec *VAR_31 = FUNC_12(VAR_30);
                    if (VAR_30 == VAR_0 || !VAR_31) {
                        FUNC_10(VAR_10, VAR_2, "  unknown compression type 0x%X", (int) VAR_24->biCompression);
                    } else {
                        FUNC_10(VAR_10, VAR_2, "  vcodec=%s", VAR_31->name);
                    }
                } else {
                    FUNC_10(VAR_10, VAR_2, "  pixel_format=%s", FUNC_9(VAR_29));
                }
                FUNC_10(VAR_10, VAR_2, "  min s=%ldx%ld fps=%g max s=%ldx%ld fps=%g\n",
                       VAR_23->MinOutputSize.cx, VAR_23->MinOutputSize.cy,
                       1e7 / VAR_23->MaxFrameInterval,
                       VAR_23->MaxOutputSize.cx, VAR_23->MaxOutputSize.cy,
                       1e7 / VAR_23->MinFrameInterval);
                continue;
            }
            if (VAR_14->video_codec_id != VAR_1) {
                if (VAR_14->video_codec_id != FUNC_7(VAR_26, VAR_24->biCompression))
                    goto next;
            }
            if (VAR_14->pixel_format != VAR_3 &&
                VAR_14->pixel_format != FUNC_14(VAR_24->biCompression, VAR_24->biBitCount)) {
                goto next;
            }
            if (VAR_14->framerate) {
                int64_t VAR_32 = ((int64_t) VAR_14->requested_framerate.den*10000000)
                                            / VAR_14->requested_framerate.num;
                if (VAR_32 > VAR_23->MaxFrameInterval ||
                    VAR_32 < VAR_23->MinFrameInterval)
                    goto next;
                *VAR_25 = VAR_32;
            }
            if (VAR_14->requested_width && VAR_14->requested_height) {
                if (VAR_14->requested_width > VAR_23->MaxOutputSize.cx ||
                    VAR_14->requested_width < VAR_23->MinOutputSize.cx ||
                    VAR_14->requested_height > VAR_23->MaxOutputSize.cy ||
                    VAR_14->requested_height < VAR_23->MinOutputSize.cy)
                    goto next;
                VAR_24->biWidth = VAR_14->requested_width;
                VAR_24->biHeight = VAR_14->requested_height;
            }
        } else {
            AUDIO_STREAM_CONFIG_CAPS *VAR_33 = VAR_18;
            WAVEFORMATEX *VAR_34;



            if (FUNC_6(&VAR_16->formattype, &VAR_6)) {
                VAR_34 = (void *) VAR_16->pbFormat;
            } else {
                goto next;
            }
            if (!VAR_13) {
                FUNC_10(VAR_10, VAR_2, "  min ch=%lu bits=%lu rate=%6lu max ch=%lu bits=%lu rate=%6lu\n",
                       VAR_33->MinimumChannels, VAR_33->MinimumBitsPerSample, VAR_33->MinimumSampleFrequency,
                       VAR_33->MaximumChannels, VAR_33->MaximumBitsPerSample, VAR_33->MaximumSampleFrequency);
                continue;
            }
            if (VAR_14->sample_rate) {
                if (VAR_14->sample_rate > VAR_33->MaximumSampleFrequency ||
                    VAR_14->sample_rate < VAR_33->MinimumSampleFrequency)
                    goto next;
                VAR_34->nSamplesPerSec = VAR_14->sample_rate;
            }
            if (VAR_14->sample_size) {
                if (VAR_14->sample_size > VAR_33->MaximumBitsPerSample ||
                    VAR_14->sample_size < VAR_33->MinimumBitsPerSample)
                    goto next;
                VAR_34->wBitsPerSample = VAR_14->sample_size;
            }
            if (VAR_14->channels) {
                if (VAR_14->channels > VAR_33->MaximumChannels ||
                    VAR_14->channels < VAR_33->MinimumChannels)
                    goto next;
                VAR_34->nChannels = VAR_14->channels;
            }
        }
        if (FUNC_4(VAR_15, VAR_16) != VAR_8)
            goto next;
        VAR_17 = 1;
next:
        if (VAR_16->pbFormat)
            FUNC_0(VAR_16->pbFormat);
        FUNC_0(VAR_16);
    }
end:
    FUNC_3(VAR_15);
    FUNC_8(VAR_18);
    if (VAR_13)
        *VAR_13 = VAR_17;
}
