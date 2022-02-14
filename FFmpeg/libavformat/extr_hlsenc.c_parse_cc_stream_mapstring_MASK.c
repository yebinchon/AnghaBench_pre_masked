
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* priv_data; } ;
struct TYPE_8__ {char* instreamid; void* ccgroup; void* language; } ;
struct TYPE_7__ {char const* cc_stream_map; int nb_ccstreams; TYPE_2__* cc_streams; } ;
typedef TYPE_1__ HLSContext ;
typedef TYPE_2__ ClosedCaptionsStream ;
typedef TYPE_3__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char**) ;
 int FUNC_3 (TYPE_3__*,int ,char*,...) ;
 TYPE_2__* FUNC_4 (int) ;
 void* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char*,char const**) ;
 char* FUNC_7 (char*,char*,char**) ;

__attribute__((used)) static int FUNC_8(AVFormatContext *VAR_3)
{
    HLSContext *VAR_4 = VAR_3->priv_data;
    int VAR_5;
    char *VAR_6, *VAR_7, *VAR_8, *VAR_9;
    char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
    const char *VAR_12;
    ClosedCaptionsStream *VAR_13;

    VAR_6 = FUNC_5(VAR_4->cc_stream_map);
    if(!VAR_6)
        return FUNC_0(VAR_2);

    VAR_7 = VAR_6;
    while (FUNC_7(VAR_7, " \t", &VAR_10)) {
        VAR_7 = ((void*)0);
        VAR_4->nb_ccstreams++;
    }
    FUNC_2(&VAR_6);

    VAR_4->cc_streams = FUNC_4(sizeof(*VAR_4->cc_streams) * VAR_4->nb_ccstreams);
    if (!VAR_4->cc_streams)
        return FUNC_0(VAR_2);

    VAR_6 = VAR_4->cc_stream_map;
    VAR_5 = 0;
    while ((VAR_8 = FUNC_7(VAR_6, " \t", &VAR_10))) {
        VAR_6 = ((void*)0);

        if (VAR_5 < VAR_4->nb_ccstreams)
            VAR_13 = &(VAR_4->cc_streams[VAR_5++]);
        else
            return FUNC_0(VAR_1);

        while ((VAR_9 = FUNC_7(VAR_8, ",", &VAR_11))) {
            VAR_8 = ((void*)0);

            if (FUNC_6(VAR_9, "ccgroup:", &VAR_12)) {
                VAR_13->ccgroup = FUNC_5(VAR_12);
                if (!VAR_13->ccgroup)
                    return FUNC_0(VAR_2);
            } else if (FUNC_6(VAR_9, "instreamid:", &VAR_12)) {
                VAR_13->instreamid = FUNC_5(VAR_12);
                if (!VAR_13->instreamid)
                    return FUNC_0(VAR_2);
            } else if (FUNC_6(VAR_9, "language:", &VAR_12)) {
                VAR_13->language = FUNC_5(VAR_12);
                if (!VAR_13->language)
                    return FUNC_0(VAR_2);
            } else {
                FUNC_3(VAR_3, VAR_0, "Invalid keyval %s\n", VAR_9);
                return FUNC_0(VAR_1);
            }
        }

        if (!VAR_13->ccgroup || !VAR_13->instreamid) {
            FUNC_3(VAR_3, VAR_0, "Insufficient parameters in cc stream map string\n");
            return FUNC_0(VAR_1);
        }

        if (FUNC_6(VAR_13->instreamid, "CC", &VAR_12)) {
            if (FUNC_1(VAR_12) < 1 || FUNC_1(VAR_12) > 4) {
                FUNC_3(VAR_3, VAR_0, "Invalid instream ID CC index %d in %s, range 1-4\n",
                       FUNC_1(VAR_12), VAR_13->instreamid);
                return FUNC_0(VAR_1);
            }
        } else if (FUNC_6(VAR_13->instreamid, "SERVICE", &VAR_12)) {
            if (FUNC_1(VAR_12) < 1 || FUNC_1(VAR_12) > 63) {
                FUNC_3(VAR_3, VAR_0, "Invalid instream ID SERVICE index %d in %s, range 1-63 \n",
                       FUNC_1(VAR_12), VAR_13->instreamid);
                return FUNC_0(VAR_1);
            }
        } else {
            FUNC_3(VAR_3, VAR_0, "Invalid instream ID %s, supported are CCn or SERIVICEn\n",
                   VAR_13->instreamid);
            return FUNC_0(VAR_1);
        }
    }

    return 0;
}
