
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVHWDeviceType { ____Placeholder_AVHWDeviceType } AVHWDeviceType ;
struct TYPE_8__ {scalar_t__ data; } ;
struct TYPE_7__ {int type; } ;
typedef TYPE_1__ AVHWDeviceContext ;
typedef TYPE_2__ AVBufferRef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_2__**,int,TYPE_2__*,int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(AVBufferRef *VAR_2, const char *VAR_3)
{
    enum AVHWDeviceType VAR_4;
    const char *VAR_5;
    AVBufferRef *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    AVHWDeviceContext *VAR_8, *VAR_9;
    int VAR_10;

    VAR_8 = (AVHWDeviceContext*)VAR_2->data;

    VAR_4 = VAR_0;
    while (1) {
        VAR_4 = FUNC_3(VAR_4);
        if (VAR_4 == VAR_0)
            break;

        VAR_5 = FUNC_2(VAR_4);

        VAR_10 = FUNC_1(&VAR_6, VAR_4,
                                             VAR_2, 0);
        if (VAR_10 < 0) {
            FUNC_4(VAR_1, "Unable to derive %s -> %s: %d.\n",
                    VAR_3, VAR_5, VAR_10);
            continue;
        }

        VAR_9 = (AVHWDeviceContext*)VAR_6->data;
        if (VAR_9->type != VAR_4) {
            FUNC_4(VAR_1, "Device derived as type %d has type %d.\n",
                    VAR_4, VAR_9->type);
            goto fail;
        }

        if (VAR_4 == VAR_8->type) {
            if (VAR_9 != VAR_8) {
                FUNC_4(VAR_1, "Derivation of %s from itself succeeded "
                        "but did not return the same device.\n", VAR_3);
                goto fail;
            }
            FUNC_0(&VAR_6);
            continue;
        }

        VAR_10 = FUNC_1(&VAR_7, VAR_8->type,
                                             VAR_6, 0);
        if (VAR_10 < 0) {
            FUNC_4(VAR_1, "Derivation %s to %s succeeded, but derivation "
                    "back again failed: %d.\n",
                    VAR_3, VAR_5, VAR_10);
            goto fail;
        }

        if (VAR_7->data != VAR_2->data) {
            FUNC_4(VAR_1, "Derivation %s to %s succeeded, but derivation "
                    "back again did not return the original device.\n",
                   VAR_3, VAR_5);
            goto fail;
        }

        FUNC_4(VAR_1, "Successfully tested derivation %s -> %s.\n",
                VAR_3, VAR_5);

        FUNC_0(&VAR_6);
        FUNC_0(&VAR_7);
    }

    return 0;

fail:
    FUNC_0(&VAR_6);
    FUNC_0(&VAR_7);
    return -1;
}
