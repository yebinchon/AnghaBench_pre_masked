
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int majortype; } ;
typedef TYPE_1__ wchar_t ;
struct dshow_ctx {scalar_t__ pixel_format; scalar_t__ video_codec_id; int show_video_device_dialog; int show_audio_device_dialog; char* video_pin_name; char* audio_pin_name; char const* audio_buffer_size; scalar_t__ sample_rate; scalar_t__ channels; scalar_t__ requested_height; scalar_t__ requested_width; scalar_t__ framerate; } ;
typedef enum dshowSourceFilterType { ____Placeholder_dshowSourceFilterType } dshowSourceFilterType ;
typedef enum dshowDeviceType { ____Placeholder_dshowDeviceType } dshowDeviceType ;
struct TYPE_17__ {struct dshow_ctx* priv_data; } ;
struct TYPE_16__ {scalar_t__ dir; TYPE_1__* achName; int pFilter; int member_0; } ;
typedef TYPE_2__ PIN_INFO ;
typedef int IPin ;
typedef int IKsPropertySet ;
typedef int IEnumPins ;
typedef int IEnumMediaTypes ;
typedef int IBaseFilter ;
typedef int GUID ;
typedef int DWORD ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_1__ AM_MEDIA_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int,TYPE_1__**,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int **,int *) ;
 int FUNC_8 (int *) ;
 int VAR_9 ;
 int FUNC_9 (int *,int *,int ,int *,int ,int *,int,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int **) ;
 int FUNC_12 (int *,TYPE_1__**) ;
 int FUNC_13 (int *,int *,void**) ;
 int FUNC_14 (int *,TYPE_2__*) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int *,int const*) ;
 int const VAR_10 ;
 int const VAR_11 ;
 scalar_t__ VAR_12 ;
 int const VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_17 (char*) ;
 int FUNC_18 (TYPE_3__*,int ,char*,...) ;
 int FUNC_19 (TYPE_3__*,int,int *,int*) ;
 scalar_t__ FUNC_20 (TYPE_3__*,int *) ;
 int FUNC_21 (int *,TYPE_3__*) ;
 char* FUNC_22 (TYPE_1__*) ;
 scalar_t__ FUNC_23 (char*,char*) ;

__attribute__((used)) static int
FUNC_24(AVFormatContext *VAR_17, enum dshowDeviceType VAR_18,
                 enum dshowSourceFilterType VAR_19, IBaseFilter *VAR_20, IPin **VAR_21)
{
    struct dshow_ctx *VAR_22 = VAR_17->priv_data;
    IEnumPins *VAR_23 = 0;
    IPin *VAR_24 = ((void*)0);
    IPin *VAR_25;
    int VAR_26;

    const GUID *VAR_27[2] = { &VAR_11, &VAR_10 };
    const char *VAR_28 = (VAR_18 == VAR_15) ? "video" : "audio only";
    const char *VAR_29 = (VAR_19 == VAR_16) ? "video" : "audio";

    int VAR_30 = (VAR_18 == VAR_15 && (VAR_22->framerate ||
                                                (VAR_22->requested_width && VAR_22->requested_height) ||
                                                 VAR_22->pixel_format != VAR_6 ||
                                                 VAR_22->video_codec_id != VAR_2))
                  || (VAR_18 == VAR_7 && (VAR_22->channels || VAR_22->sample_rate));
    int VAR_31 = 0;
    int VAR_32 = (VAR_18 == VAR_15) ? VAR_22->show_video_device_dialog : VAR_22->show_audio_device_dialog;

    if (VAR_32)
        FUNC_21(VAR_20, VAR_17);

    VAR_26 = FUNC_2(VAR_20, &VAR_23);
    if (VAR_26 != VAR_14) {
        FUNC_18(VAR_17, VAR_4, "Could not enumerate pins.\n");
        return FUNC_0(VAR_8);
    }

    if (!VAR_21) {
        FUNC_18(VAR_17, VAR_5, "DirectShow %s device options (from %s devices)\n",
               VAR_28, VAR_29);
    }

    while (!VAR_24 && FUNC_7(VAR_23, 1, &VAR_25, ((void*)0)) == VAR_14) {
        IKsPropertySet *VAR_33 = ((void*)0);
        IEnumMediaTypes *VAR_34 = ((void*)0);
        PIN_INFO VAR_35 = {0};
        AM_MEDIA_TYPE *VAR_36;
        GUID VAR_37;
        DWORD VAR_38;
        char *VAR_39 = ((void*)0);
        wchar_t *VAR_40 = ((void*)0);
        char *VAR_41 = ((void*)0);
        char *VAR_42 = VAR_18 == VAR_15 ? VAR_22->video_pin_name : VAR_22->audio_pin_name;

        FUNC_14(VAR_25, &VAR_35);
        FUNC_3(VAR_35.pFilter);

        if (VAR_35.dir != VAR_12)
            goto next;
        if (FUNC_13(VAR_25, &VAR_9, (void **) &VAR_33) != VAR_14)
            goto next;
        if (FUNC_9(VAR_33, &VAR_1, VAR_0,
                               ((void*)0), 0, &VAR_37, sizeof(GUID), &VAR_38) != VAR_14)
            goto next;
        if (!FUNC_16(&VAR_37, &VAR_13))
            goto next;
        VAR_39 = FUNC_22(VAR_35.achName);

        VAR_26 = FUNC_12(VAR_25, &VAR_40);
        if (VAR_26 != VAR_14) {
            FUNC_18(VAR_17, VAR_4, "Could not query pin id\n");
            return FUNC_0(VAR_8);
        }
        VAR_41 = FUNC_22(VAR_40);

        if (!VAR_21) {
            FUNC_18(VAR_17, VAR_5, " Pin \"%s\" (alternative pin name \"%s\")\n", VAR_39, VAR_41);
            FUNC_19(VAR_17, VAR_18, VAR_25, ((void*)0));
            goto next;
        }

        if (VAR_42) {
            if(FUNC_23(VAR_39, VAR_42) && FUNC_23(VAR_41, VAR_42)) {
                FUNC_18(VAR_17, VAR_3, "skipping pin \"%s\" (\"%s\") != requested \"%s\"\n",
                    VAR_39, VAR_41, VAR_42);
                goto next;
            }
        }

        if (VAR_30) {
            FUNC_19(VAR_17, VAR_18, VAR_25, &VAR_31);
            if (!VAR_31) {
                goto next;
            }
        }
        if (VAR_18 == VAR_7 && VAR_22->audio_buffer_size) {
            if (FUNC_20(VAR_17, VAR_25) < 0) {
                FUNC_18(VAR_17, VAR_4, "unable to set audio buffer size %d to pin, using pin anyway...", VAR_22->audio_buffer_size);
            }
        }

        if (FUNC_11(VAR_25, &VAR_34) != VAR_14)
            goto next;

        FUNC_6(VAR_34);

        while (!VAR_24 && FUNC_4(VAR_34, 1, &VAR_36, ((void*)0)) == VAR_14) {
            if (FUNC_16(&VAR_36->majortype, VAR_27[VAR_18])) {
                VAR_24 = VAR_25;
                FUNC_18(VAR_17, VAR_3, "Selecting pin %s on %s\n", VAR_39, VAR_28);
                goto next;
            }
            FUNC_1(VAR_36);
        }

next:
        if (VAR_34)
            FUNC_5(VAR_34);
        if (VAR_33)
            FUNC_10(VAR_33);
        if (VAR_24 != VAR_25)
            FUNC_15(VAR_25);
        FUNC_17(VAR_39);
        FUNC_17(VAR_41);
        if (VAR_40)
            FUNC_1(VAR_40);
    }

    FUNC_8(VAR_23);

    if (VAR_21) {
        if (VAR_30 && !VAR_31) {
            FUNC_18(VAR_17, VAR_4, "Could not set %s options\n", VAR_28);
            return FUNC_0(VAR_8);
        }
        if (!VAR_24) {
            FUNC_18(VAR_17, VAR_4,
                "Could not find output pin from %s capture device.\n", VAR_28);
            return FUNC_0(VAR_8);
        }
        *VAR_21 = VAR_24;
    }

    return 0;
}
