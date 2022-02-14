
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char wchar_t ;
struct dshow_ctx {char* audio_filter_load_file; char* video_filter_load_file; char** device_unique_name; char* audio_filter_save_file; char* video_filter_save_file; int ** capture_pin; TYPE_1__** capture_filter; int ** device_pin; int ** device_filter; int * graph; } ;
typedef int libAVPin ;
struct TYPE_10__ {int * pin; } ;
typedef TYPE_1__ libAVFilter ;
typedef enum dshowSourceFilterType { ____Placeholder_dshowSourceFilterType } dshowSourceFilterType ;
typedef enum dshowDeviceType { ____Placeholder_dshowDeviceType } dshowDeviceType ;
struct TYPE_11__ {struct dshow_ctx* priv_data; } ;
typedef int LPCSTR ;
typedef int IUnknown ;
typedef int IStream ;
typedef int IPin ;
typedef int IPersistStream ;
typedef int IGraphBuilder ;
typedef int ICreateDevEnum ;
typedef int ICaptureGraphBuilder2 ;
typedef int IBaseFilter ;
typedef int HRESULT ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int *,int ,int *,void**) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int *,int *,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *,void**) ;
 int FUNC_13 (int *,int *) ;
 int FUNC_14 (int ,int,int **) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_15 (TYPE_2__*,int ,char*,...) ;
 int VAR_18 ;
 int FUNC_16 (TYPE_2__*,int *,int,int,int **,char**) ;
 int FUNC_17 (TYPE_2__*,int,int,int *,int **) ;
 int FUNC_18 (int *,int *,int,TYPE_2__*) ;
 TYPE_1__* FUNC_19 (TYPE_2__*,int ,int) ;
 int FUNC_20 (int *) ;
 scalar_t__ FUNC_21 (char*,char*) ;
 scalar_t__ FUNC_22 (char*) ;

__attribute__((used)) static int
FUNC_23(AVFormatContext *VAR_19, ICreateDevEnum *VAR_20,
                  enum dshowDeviceType VAR_21, enum dshowSourceFilterType VAR_22)
{
    struct dshow_ctx *VAR_23 = VAR_19->priv_data;
    IBaseFilter *VAR_24 = ((void*)0);
    char *VAR_25 = ((void*)0);
    IGraphBuilder *VAR_26 = VAR_23->graph;
    IPin *VAR_27 = ((void*)0);
    libAVPin *VAR_28 = ((void*)0);
    libAVFilter *VAR_29 = ((void*)0);
    ICaptureGraphBuilder2 *VAR_30 = ((void*)0);
    int VAR_31 = FUNC_0(VAR_7);
    int VAR_32;
    IStream *VAR_33 = ((void*)0);
    IStream *VAR_34 = ((void*)0);
    IPersistStream *VAR_35 = ((void*)0);
    enum dshowDeviceType VAR_36 = (VAR_21 == VAR_16) ? VAR_3 : VAR_16;

    const wchar_t *VAR_37[2] = { L"Audio capture filter", L"Video capture filter" };


    if ( ((VAR_23->audio_filter_load_file) && (FUNC_22(VAR_23->audio_filter_load_file)>0) && (VAR_22 == VAR_4)) ||
            ((VAR_23->video_filter_load_file) && (FUNC_22(VAR_23->video_filter_load_file)>0) && (VAR_22 == VAR_17)) ) {
        HRESULT VAR_38;
        char *VAR_39 = ((void*)0);

        if (VAR_22 == VAR_4)
            VAR_39 = VAR_23->audio_filter_load_file;
        else
            VAR_39 = VAR_23->video_filter_load_file;

        VAR_38 = FUNC_14 ((LPCSTR) VAR_39, VAR_13, &VAR_33);
        if (VAR_15 != VAR_38) {
            FUNC_15(VAR_19, VAR_1, "Could not open capture filter description file.\n");
            goto error;
        }

        VAR_38 = FUNC_12(VAR_33, &VAR_8, (void **) &VAR_24);
        if (VAR_38 != VAR_15) {
            FUNC_15(VAR_19, VAR_1, "Could not load capture filter from file.\n");
            goto error;
        }

        if (VAR_22 == VAR_4)
            FUNC_15(VAR_19, VAR_2, "Audio-");
        else
            FUNC_15(VAR_19, VAR_2, "Video-");
        FUNC_15(VAR_19, VAR_2, "Capture filter loaded successfully from file \"%s\".\n", VAR_39);
    } else {

        if ((VAR_32 = FUNC_16(VAR_19, VAR_20, VAR_21, VAR_22, &VAR_24, &VAR_25)) < 0) {
            VAR_31 = VAR_32;
            goto error;
        }
    }
        if (VAR_23->device_filter[VAR_36]) {


        if (FUNC_21(VAR_25, VAR_23->device_unique_name[VAR_36]) == 0) {
          FUNC_15(VAR_19, VAR_0, "reusing previous graph capture filter... %s\n", VAR_25);
          FUNC_4(VAR_24);
          VAR_24 = VAR_23->device_filter[VAR_36];
          FUNC_2(VAR_23->device_filter[VAR_36]);
        } else {
            FUNC_15(VAR_19, VAR_0, "not reusing previous graph capture filter %s != %s\n", VAR_25, VAR_23->device_unique_name[VAR_36]);
        }
    }

    VAR_23->device_filter [VAR_21] = VAR_24;
    VAR_23->device_unique_name [VAR_21] = VAR_25;

    VAR_32 = FUNC_8(VAR_26, VAR_24, ((void*)0));
    if (VAR_32 != VAR_15) {
        FUNC_15(VAR_19, VAR_1, "Could not add device filter to graph.\n");
        goto error;
    }

    if ((VAR_32 = FUNC_17(VAR_19, VAR_21, VAR_22, VAR_24, &VAR_27)) < 0) {
        VAR_31 = VAR_32;
        goto error;
    }

    VAR_23->device_pin[VAR_21] = VAR_27;

    VAR_29 = FUNC_19(VAR_19, VAR_18, VAR_21);
    if (!VAR_29) {
        FUNC_15(VAR_19, VAR_1, "Could not create grabber filter.\n");
        goto error;
    }
    VAR_23->capture_filter[VAR_21] = VAR_29;

    if ( ((VAR_23->audio_filter_save_file) && (FUNC_22(VAR_23->audio_filter_save_file)>0) && (VAR_22 == VAR_4)) ||
            ((VAR_23->video_filter_save_file) && (FUNC_22(VAR_23->video_filter_save_file)>0) && (VAR_22 == VAR_17)) ) {

        HRESULT VAR_40;
        char *VAR_41 = ((void*)0);

        if (VAR_22 == VAR_4)
            VAR_41 = VAR_23->audio_filter_save_file;
        else
            VAR_41 = VAR_23->video_filter_save_file;

        VAR_40 = FUNC_14 ((LPCSTR) VAR_41, VAR_12 | VAR_14, &VAR_34);
        if (VAR_15 != VAR_40) {
            FUNC_15(VAR_19, VAR_1, "Could not create capture filter description file.\n");
            goto error;
        }

        VAR_40 = FUNC_3(VAR_24, &VAR_10, (void **) &VAR_35);
        if (VAR_40 != VAR_15) {
            FUNC_15(VAR_19, VAR_1, "Query for IPersistStream failed.\n");
            goto error;
        }

        VAR_40 = FUNC_13(VAR_35, VAR_34);
        if (VAR_40 != VAR_15) {
            FUNC_15(VAR_19, VAR_1, "Could not save capture filter \n");
            goto error;
        }

        VAR_40 = FUNC_10(VAR_34, VAR_11);
        if (VAR_15 != VAR_40) {
            FUNC_15(VAR_19, VAR_1, "Could not commit capture filter data to file.\n");
            goto error;
        }

        if (VAR_22 == VAR_4)
            FUNC_15(VAR_19, VAR_2, "Audio-");
        else
            FUNC_15(VAR_19, VAR_2, "Video-");
        FUNC_15(VAR_19, VAR_2, "Capture filter saved successfully to file \"%s\".\n", VAR_41);
    }

    VAR_32 = FUNC_8(VAR_26, (IBaseFilter *) VAR_29,
                                VAR_37[VAR_21]);
    if (VAR_32 != VAR_15) {
        FUNC_15(VAR_19, VAR_1, "Could not add capture filter to graph\n");
        goto error;
    }

    FUNC_20(VAR_29->pin);
    VAR_28 = VAR_29->pin;
    VAR_23->capture_pin[VAR_21] = VAR_28;

    VAR_32 = FUNC_1(&VAR_6, ((void*)0), VAR_5,
                         &VAR_9, (void **) &VAR_30);
    if (VAR_32 != VAR_15) {
        FUNC_15(VAR_19, VAR_1, "Could not create CaptureGraphBuilder2\n");
        goto error;
    }
    FUNC_7(VAR_30, VAR_26);
    if (VAR_32 != VAR_15) {
        FUNC_15(VAR_19, VAR_1, "Could not set graph for CaptureGraphBuilder2\n");
        goto error;
    }

    VAR_32 = FUNC_6(VAR_30, ((void*)0), ((void*)0), (IUnknown *) VAR_27, ((void*)0) ,
        (IBaseFilter *) VAR_29);

    if (VAR_32 != VAR_15) {
        FUNC_15(VAR_19, VAR_1, "Could not RenderStream to connect pins\n");
        goto error;
    }

    VAR_32 = FUNC_18(VAR_30, VAR_24, VAR_21, VAR_19);

    if (VAR_32 != VAR_15) {
        FUNC_15(VAR_19, VAR_1, "Could not setup CrossBar\n");
        goto error;
    }

    VAR_31 = 0;

error:
    if (VAR_30 != ((void*)0))
        FUNC_5(VAR_30);

    if (VAR_35)
        FUNC_9(VAR_35);

    if (VAR_33)
        FUNC_11(VAR_33);

    if (VAR_34)
        FUNC_11(VAR_34);

    return VAR_31;
}
