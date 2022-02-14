
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dshow_ctx {int crossbar_video_input_pin_number; int crossbar_audio_input_pin_number; char** device_name; scalar_t__ list_options; } ;
typedef enum dshowDeviceType { ____Placeholder_dshowDeviceType } dshowDeviceType ;
struct TYPE_4__ {struct dshow_ctx* priv_data; } ;
typedef int IAMCrossbar ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ AVFormatContext ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long FUNC_1 (long) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int *,int,int) ;
 scalar_t__ FUNC_4 (int *,int ,int,long*,long*) ;
 scalar_t__ FUNC_5 (int *,int,long*) ;
 scalar_t__ FUNC_6 (int *,long*,long*) ;
 long VAR_6 ;
 long VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_7 (TYPE_1__*,int,char*,...) ;

__attribute__((used)) static HRESULT
FUNC_8(IAMCrossbar *VAR_10, enum dshowDeviceType VAR_11, AVFormatContext *VAR_12)
{
    struct dshow_ctx *VAR_13 = VAR_12->priv_data;
    long VAR_14, VAR_15;
    int VAR_16;
    int VAR_17 = VAR_13->list_options ? VAR_2 : VAR_0;
    int VAR_18 = VAR_13->crossbar_video_input_pin_number;
    int VAR_19 = VAR_13->crossbar_audio_input_pin_number;
    const char *VAR_20 = VAR_13->device_name[VAR_11];
    HRESULT VAR_21;

    FUNC_7(VAR_12, VAR_17, "Crossbar Switching Information for %s:\n", VAR_20);
    VAR_21 = FUNC_6(VAR_10, &VAR_14, &VAR_15);
    if (VAR_21 != VAR_8) {
        FUNC_7(VAR_12, VAR_1, "Unable to get crossbar pin counts\n");
        return VAR_21;
    }

    for (VAR_16 = 0; VAR_16 < VAR_14; VAR_16++)
    {
        int VAR_22;
        long VAR_23, VAR_24, VAR_25;
        VAR_21 = FUNC_4(VAR_10, VAR_5, VAR_16, &VAR_23, &VAR_24);
        if (VAR_24 == VAR_7) {

            if (VAR_18 != -1) {
                FUNC_7(VAR_12, VAR_17, "Routing video input from pin %d\n", VAR_18);
                VAR_21 = FUNC_3(VAR_10, VAR_16, VAR_18);
                if (VAR_21 != VAR_8) {
                    FUNC_7(VAR_12, VAR_1, "Unable to route video input from pin %d\n", VAR_18);
                    return FUNC_0(VAR_4);
                }
            }
        } else if (VAR_24 == VAR_6) {
            if (VAR_19 != -1) {
                FUNC_7(VAR_12, VAR_17, "Routing audio input from pin %d\n", VAR_19);
                VAR_21 = FUNC_3(VAR_10, VAR_16, VAR_19);
                if (VAR_21 != VAR_8) {
                    FUNC_7(VAR_12, VAR_1, "Unable to route audio input from pin %d\n", VAR_19);
                    return VAR_21;
                }
            }
        } else {
            FUNC_7(VAR_12, VAR_3, "Unexpected output pin type, please report the type if you want to use this (%s)", FUNC_1(VAR_24));
        }

        VAR_21 = FUNC_5(VAR_10, VAR_16, &VAR_25);
        if (VAR_21 != VAR_8) {
            FUNC_7(VAR_12, VAR_1, "Unable to get crossbar is routed to from pin %d\n", VAR_16);
            return VAR_21;
        }
        FUNC_7(VAR_12, VAR_17, "  Crossbar Output pin %d: \"%s\" related output pin: %ld ", VAR_16, FUNC_1(VAR_24), VAR_23);
        FUNC_7(VAR_12, VAR_17, "current input pin: %ld ", VAR_25);
        FUNC_7(VAR_12, VAR_17, "compatible input pins: ");

        for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++)
        {
            VAR_21 = FUNC_2(VAR_10, VAR_16, VAR_22);
            if (VAR_21 == VAR_8)
                FUNC_7(VAR_12, VAR_17 ,"%d ", VAR_22);
        }
        FUNC_7(VAR_12, VAR_17, "\n");
    }

    for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++)
    {
        long VAR_26, VAR_27;
        VAR_21 = FUNC_4(VAR_10, VAR_9, VAR_16, &VAR_26, &VAR_27);
        if (VAR_21 != VAR_8) {
            FUNC_7(VAR_12, VAR_1, "unable to get crossbar info audio input from pin %d\n", VAR_16);
            return VAR_21;
        }
        FUNC_7(VAR_12, VAR_17, "  Crossbar Input pin %d - \"%s\" ", VAR_16, FUNC_1(VAR_27));
        FUNC_7(VAR_12, VAR_17, "related input pin: %ld\n", VAR_26);
    }
    return VAR_8;
}
