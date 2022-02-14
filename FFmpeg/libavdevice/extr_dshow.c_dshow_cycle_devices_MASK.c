
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct dshow_ctx {char** device_name; int video_device_number; int audio_device_number; } ;
typedef enum dshowSourceFilterType { ____Placeholder_dshowSourceFilterType } dshowSourceFilterType ;
typedef enum dshowDeviceType { ____Placeholder_dshowDeviceType } dshowDeviceType ;
struct TYPE_6__ {int * bstrVal; int vt; } ;
typedef TYPE_1__ VARIANT ;
struct TYPE_7__ {struct dshow_ctx* priv_data; } ;
typedef int * LPOLESTR ;
typedef int * LPMALLOC ;
typedef int IPropertyBag ;
typedef int IMoniker ;
typedef int IEnumMoniker ;
typedef int ICreateDevEnum ;
typedef int IBindCtx ;
typedef int IBaseFilter ;
typedef int GUID ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int FUNC_1 (int,int **) ;
 int FUNC_2 (int ,int **) ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int const*,int **,int ) ;
 int FUNC_5 (int *,int,int **,int *) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ,int ,int *,void*) ;
 int FUNC_9 (int *,int ,int ,int *,void*) ;
 int FUNC_10 (int *,int *,int *,int **) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,TYPE_1__*,int *) ;
 int FUNC_13 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 (char**) ;
 int FUNC_15 (TYPE_2__*,int ,char*,char const*,...) ;
 char* FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (char const*,char*) ;
 int FUNC_18 (char*) ;

__attribute__((used)) static int
FUNC_19(AVFormatContext *VAR_11, ICreateDevEnum *VAR_12,
                    enum dshowDeviceType VAR_13, enum dshowSourceFilterType VAR_14,
                    IBaseFilter **VAR_15, char **VAR_16)
{
    struct dshow_ctx *VAR_17 = VAR_11->priv_data;
    IBaseFilter *VAR_18 = ((void*)0);
    IEnumMoniker *VAR_19 = ((void*)0);
    IMoniker *VAR_20 = ((void*)0);
    const char *VAR_21 = VAR_17->device_name[VAR_13];
    int VAR_22 = (VAR_13 == VAR_9) ? VAR_17->video_device_number
                                        : VAR_17->audio_device_number;
    int VAR_23;

    const GUID *VAR_24[2] = { &VAR_3,
                                   &VAR_2 };
    const char *VAR_25 = (VAR_13 == VAR_9) ? "video" : "audio only";
    const char *VAR_26 = (VAR_14 == VAR_10) ? "video" : "audio";

    VAR_23 = FUNC_4(VAR_12, VAR_24[VAR_14],
                                             (IEnumMoniker **) &VAR_19, 0);
    if (VAR_23 != VAR_7) {
        FUNC_15(VAR_11, VAR_0, "Could not enumerate %s devices (or none found).\n",
               VAR_25);
        return FUNC_0(VAR_4);
    }

    while (!VAR_18 && FUNC_5(VAR_19, 1, &VAR_20, ((void*)0)) == VAR_7) {
        IPropertyBag *VAR_27 = ((void*)0);
        char *VAR_28 = ((void*)0);
        char *VAR_29 = ((void*)0);
        VARIANT VAR_30;
        IBindCtx *VAR_31 = ((void*)0);
        LPOLESTR VAR_32 = ((void*)0);
        LPMALLOC VAR_33 = ((void*)0);
        int VAR_34;

        VAR_23 = FUNC_1(1, &VAR_33);
        if (VAR_23 != VAR_7)
            goto fail1;
        VAR_23 = FUNC_2(0, &VAR_31);
        if (VAR_23 != VAR_7)
            goto fail1;

        VAR_23 = FUNC_10(VAR_20, VAR_31, ((void*)0), &VAR_32);
        if (VAR_23 != VAR_7)
            goto fail1;
        VAR_29 = FUNC_16(VAR_32);

        for (VAR_34 = 0; VAR_34 < FUNC_18(VAR_29); VAR_34++) {
            if (VAR_29[VAR_34] == ':')
                VAR_29[VAR_34] = '_';
        }

        VAR_23 = FUNC_9(VAR_20, 0, 0, &VAR_6, (void *) &VAR_27);
        if (VAR_23 != VAR_7)
            goto fail1;

        VAR_30.vt = VAR_8;
        VAR_23 = FUNC_12(VAR_27, L"FriendlyName", &VAR_30, ((void*)0));
        if (VAR_23 != VAR_7)
            goto fail1;
        VAR_28 = FUNC_16(VAR_30.bstrVal);

        if (VAR_15) {
            if (FUNC_17(VAR_21, VAR_28) && FUNC_17(VAR_21, VAR_29))
                goto fail1;

            if (!VAR_22--) {
                VAR_23 = FUNC_8(VAR_20, 0, 0, &VAR_5, (void *) &VAR_18);
                if (VAR_23 != VAR_7) {
                    FUNC_15(VAR_11, VAR_0, "Unable to BindToObject for %s\n", VAR_21);
                    goto fail1;
                }
                *VAR_16 = VAR_29;
                VAR_29 = ((void*)0);

            }
        } else {
            FUNC_15(VAR_11, VAR_1, " \"%s\"\n", VAR_28);
            FUNC_15(VAR_11, VAR_1, "    Alternative name \"%s\"\n", VAR_29);
        }

fail1:
        if (VAR_32 && VAR_33)
            FUNC_7(VAR_33, VAR_32);
        if (VAR_31)
            FUNC_3(VAR_31);
        FUNC_14(&VAR_28);
        FUNC_14(&VAR_29);
        if (VAR_27)
            FUNC_13(VAR_27);
        FUNC_11(VAR_20);
    }

    FUNC_6(VAR_19);

    if (VAR_15) {
        if (!VAR_18) {
            FUNC_15(VAR_11, VAR_0, "Could not find %s device with name [%s] among source devices of type %s.\n",
                   VAR_25, VAR_21, VAR_26);
            return FUNC_0(VAR_4);
        }
        *VAR_15 = VAR_18;
    }

    return 0;
}
