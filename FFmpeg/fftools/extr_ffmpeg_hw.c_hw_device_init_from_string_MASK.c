
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_5__ {char const* name; int type; int * device_ref; } ;
typedef TYPE_1__ HWDevice ;
typedef int AVDictionary ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int **,char const*,char*,char*,int ) ;
 int FUNC_4 (char const**) ;
 int FUNC_5 (int **,int,char const*,int *,int ) ;
 int FUNC_6 (int **,int,int *,int ) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int *,int ,char*,...) ;
 char* FUNC_9 (char const*,int) ;
 TYPE_1__* FUNC_10 () ;
 char* FUNC_11 (int) ;
 TYPE_1__* FUNC_12 (char const*) ;
 char* FUNC_13 (char const*,char) ;
 size_t FUNC_14 (char const*,char*) ;

int FUNC_15(const char *VAR_4, HWDevice **VAR_5)
{







    AVDictionary *VAR_6 = ((void*)0);
    const char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    enum AVHWDeviceType VAR_10;
    HWDevice *VAR_11, *VAR_12;
    AVBufferRef *VAR_13 = ((void*)0);
    int VAR_14;
    const char *VAR_15, *VAR_16, *VAR_17;
    size_t VAR_18;

    VAR_18 = FUNC_14(VAR_4, ":=@");
    VAR_16 = VAR_4 + VAR_18;

    VAR_7 = FUNC_9(VAR_4, VAR_18);
    if (!VAR_7) {
        VAR_14 = FUNC_0(VAR_3);
        goto fail;
    }
    VAR_10 = FUNC_7(VAR_7);
    if (VAR_10 == VAR_0) {
        VAR_15 = "unknown device type";
        goto invalid;
    }

    if (*VAR_16 == '=') {
        VAR_18 = FUNC_14(VAR_16 + 1, ":@");

        VAR_8 = FUNC_9(VAR_16 + 1, VAR_18);
        if (!VAR_8) {
            VAR_14 = FUNC_0(VAR_3);
            goto fail;
        }
        if (FUNC_12(VAR_8)) {
            VAR_15 = "named device already exists";
            goto invalid;
        }

        VAR_16 += 1 + VAR_18;
    } else {
        VAR_8 = FUNC_11(VAR_10);
        if (!VAR_8) {
            VAR_14 = FUNC_0(VAR_3);
            goto fail;
        }
    }

    if (!*VAR_16) {

        VAR_14 = FUNC_5(&VAR_13, VAR_10,
                                     ((void*)0), ((void*)0), 0);
        if (VAR_14 < 0)
            goto fail;

    } else if (*VAR_16 == ':') {

        ++VAR_16;
        VAR_17 = FUNC_13(VAR_16, ',');
        if (VAR_17) {
            if (VAR_17 - VAR_16 > 0) {
                VAR_9 = FUNC_9(VAR_16, VAR_17 - VAR_16);
                if (!VAR_9) {
                    VAR_14 = FUNC_0(VAR_3);
                    goto fail;
                }
            }
            VAR_14 = FUNC_3(&VAR_6, VAR_17 + 1, "=", ",", 0);
            if (VAR_14 < 0) {
                VAR_15 = "failed to parse options";
                goto invalid;
            }
        }

        VAR_14 = FUNC_5(&VAR_13, VAR_10,
                                     VAR_17 ? VAR_9 : VAR_16[0] ? VAR_16 : ((void*)0),
                                     VAR_6, 0);
        if (VAR_14 < 0)
            goto fail;

    } else if (*VAR_16 == '@') {


        VAR_12 = FUNC_12(VAR_16 + 1);
        if (!VAR_12) {
            VAR_15 = "invalid source device name";
            goto invalid;
        }

        VAR_14 = FUNC_6(&VAR_13, VAR_10,
                                             VAR_12->device_ref, 0);
        if (VAR_14 < 0)
            goto fail;
    } else {
        VAR_15 = "parse error";
        goto invalid;
    }

    VAR_11 = FUNC_10();
    if (!VAR_11) {
        VAR_14 = FUNC_0(VAR_3);
        goto fail;
    }

    VAR_11->name = VAR_8;
    VAR_11->type = VAR_10;
    VAR_11->device_ref = VAR_13;

    if (VAR_5)
        *VAR_5 = VAR_11;

    VAR_8 = ((void*)0);
    VAR_14 = 0;
done:
    FUNC_4(&VAR_7);
    FUNC_4(&VAR_8);
    FUNC_4(&VAR_9);
    FUNC_2(&VAR_6);
    return VAR_14;
invalid:
    FUNC_8(((void*)0), VAR_1,
           "Invalid device specification \"%s\": %s\n", VAR_4, VAR_15);
    VAR_14 = FUNC_0(VAR_2);
    goto done;
fail:
    FUNC_8(((void*)0), VAR_1,
           "Device creation failed: %d.\n", VAR_14);
    FUNC_1(&VAR_13);
    goto done;
}
