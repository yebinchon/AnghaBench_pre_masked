
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
typedef scalar_t__ VAStatus ;
struct TYPE_15__ {unsigned int fourcc; } ;
typedef TYPE_2__ VAImageFormat ;
struct TYPE_16__ {size_t nb_formats; TYPE_10__* formats; } ;
typedef TYPE_3__ VAAPIDeviceContext ;
struct TYPE_19__ {int quirks; int friendly_name; int match_string; } ;
struct TYPE_18__ {TYPE_4__* hwctx; TYPE_1__* internal; } ;
struct TYPE_17__ {int driver_quirks; int display; } ;
struct TYPE_14__ {TYPE_3__* priv; } ;
struct TYPE_13__ {int pix_fmt; TYPE_2__ image_format; } ;
typedef TYPE_4__ AVVAAPIDeviceContext ;
typedef TYPE_5__ AVHWDeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_10__**) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_5__*,int ,char*,...) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (char const*,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,TYPE_2__*,int*) ;
 char* FUNC_10 (int ) ;
 TYPE_6__* VAR_7 ;
 int FUNC_11 (unsigned int) ;

__attribute__((used)) static int FUNC_12(AVHWDeviceContext *VAR_8)
{
    VAAPIDeviceContext *VAR_9 = VAR_8->internal->priv;
    AVVAAPIDeviceContext *VAR_10 = VAR_8->hwctx;
    VAImageFormat *VAR_11 = ((void*)0);
    VAStatus VAR_12;
    const char *VAR_13;
    int VAR_14, VAR_15, VAR_16;
    enum AVPixelFormat VAR_17;
    unsigned int VAR_18;

    VAR_16 = FUNC_8(VAR_10->display);
    if (VAR_16 <= 0) {
        VAR_14 = FUNC_0(VAR_4);
        goto fail;
    }
    VAR_11 = FUNC_6(VAR_16 * sizeof(*VAR_11));
    if (!VAR_11) {
        VAR_14 = FUNC_0(VAR_5);
        goto fail;
    }
    VAR_12 = FUNC_9(VAR_10->display, VAR_11, &VAR_16);
    if (VAR_12 != VAR_6) {
        VAR_14 = FUNC_0(VAR_4);
        goto fail;
    }

    VAR_9->formats = FUNC_6(VAR_16 * sizeof(*VAR_9->formats));
    if (!VAR_9->formats) {
        VAR_14 = FUNC_0(VAR_5);
        goto fail;
    }
    VAR_9->nb_formats = 0;
    for (VAR_15 = 0; VAR_15 < VAR_16; VAR_15++) {
        VAR_18 = VAR_11[VAR_15].fourcc;
        VAR_17 = FUNC_11(VAR_18);
        if (VAR_17 == VAR_2) {
            FUNC_5(VAR_8, VAR_0, "Format %#x -> unknown.\n",
                   VAR_18);
        } else {
            FUNC_5(VAR_8, VAR_0, "Format %#x -> %s.\n",
                   VAR_18, FUNC_4(VAR_17));
            VAR_9->formats[VAR_9->nb_formats].pix_fmt = VAR_17;
            VAR_9->formats[VAR_9->nb_formats].image_format = VAR_11[VAR_15];
            ++VAR_9->nb_formats;
        }
    }

    VAR_13 = FUNC_10(VAR_10->display);
    if (VAR_13)
        FUNC_5(VAR_8, VAR_1, "VAAPI driver: %s.\n", VAR_13);

    if (VAR_10->driver_quirks & VAR_3) {
        FUNC_5(VAR_8, VAR_1, "Using quirks set by user (%#x).\n",
               VAR_10->driver_quirks);
    } else {

        VAR_10->driver_quirks = 0;
        if (VAR_13) {
            for (VAR_15 = 0; VAR_15 < FUNC_1(VAR_7); VAR_15++) {
                if (FUNC_7(VAR_13,
                           VAR_7[VAR_15].match_string)) {
                    FUNC_5(VAR_8, VAR_1, "Matched driver string "
                           "as known nonstandard driver \"%s\", setting "
                           "quirks (%#x).\n",
                           VAR_7[VAR_15].friendly_name,
                           VAR_7[VAR_15].quirks);
                    VAR_10->driver_quirks |=
                        VAR_7[VAR_15].quirks;
                    break;
                }
            }
            if (!(VAR_15 < FUNC_1(VAR_7))) {
                FUNC_5(VAR_8, VAR_1, "Driver not found in known "
                       "nonstandard list, using standard behaviour.\n");
            }
        } else {
            FUNC_5(VAR_8, VAR_1, "Driver has no vendor string, "
                   "assuming standard behaviour.\n");
        }
    }

    FUNC_2(VAR_11);
    return 0;
fail:
    FUNC_3(&VAR_9->formats);
    FUNC_2(VAR_11);
    return VAR_14;
}
