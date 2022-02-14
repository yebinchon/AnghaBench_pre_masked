
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct dshow_ctx {scalar_t__ show_analog_tv_tuner_audio_dialog; scalar_t__ show_analog_tv_tuner_dialog; scalar_t__ show_audio_crossbar_connection_dialog; scalar_t__ show_video_crossbar_connection_dialog; } ;
typedef enum dshowDeviceType { ____Placeholder_dshowDeviceType } dshowDeviceType ;
struct TYPE_6__ {struct dshow_ctx* priv_data; } ;
typedef int ICaptureGraphBuilder2 ;
typedef int IBaseFilter ;
typedef int IAMTVTuner ;
typedef int IAMCrossbar ;
typedef int IAMAudioInputMixer ;
typedef scalar_t__ HRESULT ;
typedef int GUID ;
typedef TYPE_1__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *,void**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int *,int const*,int *,int *,void**) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_1__*,int ,char*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_7 (int *,int,TYPE_1__*) ;

HRESULT
FUNC_8(ICaptureGraphBuilder2 *VAR_9,
    IBaseFilter *VAR_10, enum dshowDeviceType VAR_11, AVFormatContext *VAR_12)
{
    struct dshow_ctx *VAR_13 = VAR_12->priv_data;
    IAMCrossbar *VAR_14 = ((void*)0);
    IBaseFilter *VAR_15 = ((void*)0);
    IAMTVTuner *VAR_16 = ((void*)0);
    IBaseFilter *VAR_17 = ((void*)0);
    IAMAudioInputMixer *VAR_18 = ((void*)0);
    IBaseFilter *VAR_19 = ((void*)0);
    HRESULT VAR_20;

    VAR_20 = FUNC_4(VAR_9, &VAR_6, (const GUID *) ((void*)0),
            VAR_10, &VAR_2, (void**) &VAR_14);
    if (VAR_20 != VAR_7) {

        VAR_20 = VAR_7;
        goto end;
    }


    if (VAR_11 == VAR_8 && VAR_13->show_video_crossbar_connection_dialog ||
        VAR_11 == VAR_1 && VAR_13->show_audio_crossbar_connection_dialog) {
        VAR_20 = FUNC_0(VAR_14, &VAR_5, (void **) &VAR_15);
        if (VAR_20 != VAR_7)
            goto end;
        FUNC_6(VAR_15, VAR_12);
    }

    if (VAR_11 == VAR_8 && VAR_13->show_analog_tv_tuner_dialog) {
        VAR_20 = FUNC_4(VAR_9, &VAR_6, ((void*)0),
             VAR_10, &VAR_4, (void**) &VAR_16);
        if (VAR_20 == VAR_7) {
            VAR_20 = FUNC_0(VAR_16, &VAR_5, (void **) &VAR_17);
            if (VAR_20 != VAR_7)
                goto end;
            FUNC_6(VAR_17, VAR_12);
        } else {
            FUNC_5(VAR_12, VAR_0, "unable to find a tv tuner to display dialog for!");
        }
    }
    if (VAR_11 == VAR_1 && VAR_13->show_analog_tv_tuner_audio_dialog) {
        VAR_20 = FUNC_4(VAR_9, &VAR_6, ((void*)0),
             VAR_10, &VAR_3, (void**) &VAR_18);
        if (VAR_20 == VAR_7) {
            VAR_20 = FUNC_0(VAR_18, &VAR_5, (void **) &VAR_19);
            if (VAR_20 != VAR_7)
                goto end;
            FUNC_6(VAR_19, VAR_12);
        } else {
            FUNC_5(VAR_12, VAR_0, "unable to find a tv audio tuner to display dialog for!");
        }
    }

    VAR_20 = FUNC_7(VAR_14, VAR_11, VAR_12);
    if (VAR_20 != VAR_7)
        goto end;

end:
    if (VAR_14)
        FUNC_1(VAR_14);
    if (VAR_15)
        FUNC_3(VAR_15);
    if (VAR_16)
        FUNC_2(VAR_16);
    if (VAR_17)
        FUNC_3(VAR_17);
    return VAR_20;
}
