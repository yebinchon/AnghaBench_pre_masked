
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int path ;
typedef int host ;
typedef enum RTSPMethod { ____Placeholder_RTSPMethod } RTSPMethod ;
typedef int ctl_path ;
typedef int ctl_host ;
typedef int ctl_auth ;
typedef int auth ;
struct TYPE_6__ {TYPE_1__* priv_data; } ;
struct TYPE_5__ {char* control_uri; int state; } ;
typedef TYPE_1__ RTSPState ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (TYPE_2__*,int ,char*,...) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char const*,char*,int *) ;
 int FUNC_4 (int *,int ,char*,int,char*,int,int*,char*,int,char*) ;
 int FUNC_5 (char*,char const*,int) ;
 char* FUNC_6 (char const*,char) ;
 scalar_t__ FUNC_7 (char*,char*) ;

__attribute__((used)) static inline int FUNC_8(AVFormatContext *VAR_17, const char *VAR_18,
                                     int VAR_19, char *VAR_20, int VAR_21,
                                     char *VAR_22, int VAR_23,
                                     enum RTSPMethod *VAR_24)
{
    RTSPState *VAR_25 = VAR_17->priv_data;
    const char *VAR_26, *VAR_27;
    VAR_26 = FUNC_6(VAR_18, ' ');

    if (!VAR_26) {
        FUNC_1(VAR_17, VAR_4, "Error parsing method string\n");
        return VAR_2;
    }

    if (VAR_26 - VAR_18 > VAR_23 - 1) {
        FUNC_1(VAR_17, VAR_4, "Method string too long\n");
        return FUNC_0(VAR_7);
    }
    FUNC_5(VAR_22, VAR_18, VAR_26 - VAR_18);
    VAR_22[VAR_26 - VAR_18] = '\0';
    VAR_26++;
    if (!FUNC_7(VAR_22, "ANNOUNCE"))
        *VAR_24 = VAR_0;
    else if (!FUNC_7(VAR_22, "OPTIONS"))
        *VAR_24 = VAR_8;
    else if (!FUNC_7(VAR_22, "RECORD"))
        *VAR_24 = VAR_10;
    else if (!FUNC_7(VAR_22, "SETUP"))
        *VAR_24 = VAR_14;
    else if (!FUNC_7(VAR_22, "PAUSE"))
        *VAR_24 = VAR_9;
    else if (!FUNC_7(VAR_22, "TEARDOWN"))
        *VAR_24 = VAR_15;
    else
        *VAR_24 = VAR_16;

    if (VAR_25->state == VAR_11) {
        if ((*VAR_24 != VAR_0) && (*VAR_24 != VAR_8)) {
            FUNC_1(VAR_17, VAR_4, "Unexpected command in Idle State %s\n",
                   VAR_18);
            return VAR_3;
        }
    } else if (VAR_25->state == VAR_12) {
        if ((*VAR_24 != VAR_8) && (*VAR_24 != VAR_10)
            && (*VAR_24 != VAR_14)) {
            FUNC_1(VAR_17, VAR_4, "Unexpected command in Paused State %s\n",
                   VAR_18);
            return VAR_3;
        }
    } else if (VAR_25->state == VAR_13) {
        if ((*VAR_24 != VAR_9) && (*VAR_24 != VAR_8)
            && (*VAR_24 != VAR_15)) {
            FUNC_1(VAR_17, VAR_4, "Unexpected command in Streaming State"
                   " %s\n", VAR_18);
            return VAR_3;
        }
    } else {
        FUNC_1(VAR_17, VAR_4, "Unexpected State [%d]\n", VAR_25->state);
        return VAR_1;
    }

    VAR_27 = FUNC_6(VAR_26, ' ');
    if (!VAR_27) {
        FUNC_1(VAR_17, VAR_4, "Error parsing message URI\n");
        return VAR_2;
    }
    if (VAR_27 - VAR_26 > VAR_21 - 1) {
        FUNC_1(VAR_17, VAR_4, "uri string length exceeded buffer size\n");
        return FUNC_0(VAR_7);
    }
    FUNC_5(VAR_20, VAR_26, VAR_27 - VAR_26);
    VAR_20[VAR_27 - VAR_26] = '\0';
    if (FUNC_7(VAR_25->control_uri, VAR_20)) {
        char VAR_28[128], VAR_29[512], VAR_30[128];
        int VAR_31;
        char VAR_32[128], VAR_33[512], VAR_34[128];
        int VAR_35;
        FUNC_4(((void*)0), 0, VAR_30, sizeof(VAR_30), VAR_28, sizeof(VAR_28), &VAR_31,
                     VAR_29, sizeof(VAR_29), VAR_20);
        FUNC_4(((void*)0), 0, VAR_34, sizeof(VAR_34), VAR_32,
                     sizeof(VAR_32), &VAR_35, VAR_33, sizeof(VAR_33),
                     VAR_25->control_uri);
        if (FUNC_7(VAR_28, VAR_32))
            FUNC_1(VAR_17, VAR_5, "Host %s differs from expected %s\n",
                   VAR_28, VAR_32);
        if (FUNC_7(VAR_29, VAR_33) && *VAR_24 != VAR_14)
            FUNC_1(VAR_17, VAR_6, "WARNING: Path %s differs from expected"
                   " %s\n", VAR_29, VAR_33);
        if (*VAR_24 == VAR_0) {
            FUNC_1(VAR_17, VAR_5,
                   "Updating control URI to %s\n", VAR_20);
            FUNC_2(VAR_25->control_uri, VAR_20, sizeof(VAR_25->control_uri));
        }
    }

    VAR_26 = VAR_27 + 1;
    if (!FUNC_3(VAR_26, "RTSP/1.0", ((void*)0))) {
        FUNC_1(VAR_17, VAR_4, "Error parsing protocol or version\n");
        return VAR_3;
    }
    return 0;
}
