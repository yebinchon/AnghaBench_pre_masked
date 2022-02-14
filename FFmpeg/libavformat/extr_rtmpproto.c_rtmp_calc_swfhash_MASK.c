
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef float uint8_t ;
typedef int int64_t ;
struct TYPE_11__ {int protocol_blacklist; int protocol_whitelist; int interrupt_callback; TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_12__ {int swfsize; int swfverify; } ;
typedef TYPE_2__ RTMPContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (float**) ;
 int FUNC_2 (TYPE_1__*,int ,char*,...) ;
 float* FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,char*,char*,int,int ) ;
 int FUNC_5 (float*,int,int ,char*,int,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__**,int ,int ,int *,int *,int ,int ,TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,float*,int) ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (float*,char*,int) ;
 int FUNC_11 (float*,float*,int) ;
 int FUNC_12 (float*,int,float**,int*) ;

__attribute__((used)) static int FUNC_13(URLContext *VAR_7)
{
    RTMPContext *VAR_8 = VAR_7->priv_data;
    uint8_t *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11;
    int64_t VAR_12;
    URLContext *VAR_13;
    char VAR_14[32];
    int VAR_15;
    int VAR_16 = 0;


    if ((VAR_16 = FUNC_7(&VAR_13, VAR_8->swfverify, VAR_1,
                                    &VAR_7->interrupt_callback, ((void*)0),
                                    VAR_7->protocol_whitelist, VAR_7->protocol_blacklist, VAR_7)) < 0) {
        FUNC_2(VAR_7, VAR_3, "Cannot open connection %s.\n", VAR_8->swfverify);
        goto fail;
    }

    if ((VAR_12 = FUNC_9(VAR_13, 0, VAR_2)) < 0) {
        VAR_16 = FUNC_0(VAR_5);
        goto fail;
    }

    if (!(VAR_9 = FUNC_3(VAR_12))) {
        VAR_16 = FUNC_0(VAR_6);
        goto fail;
    }

    if ((VAR_16 = FUNC_8(VAR_13, VAR_9, VAR_12)) < 0)
        goto fail;

    if (VAR_12 < 3) {
        VAR_16 = VAR_0;
        goto fail;
    }

    if (!FUNC_10(VAR_9, "CWS", 3)) {
        FUNC_2(VAR_7, VAR_3,
               "Zlib is required for decompressing the SWF player file.\n");
        VAR_16 = FUNC_0(VAR_4);
        goto fail;

    } else {
        VAR_15 = VAR_12;
        VAR_11 = VAR_9;
    }


    if ((VAR_16 = FUNC_5(VAR_11, VAR_15, 0,
                                   "Genuine Adobe Flash Player 001", 30,
                                   VAR_14)) < 0)
        goto fail;


    FUNC_4(VAR_8, "rtmp_swfhash", VAR_14, 32, 0);
    VAR_8->swfsize = VAR_15;

fail:
    FUNC_1(&VAR_9);
    FUNC_1(&VAR_10);
    FUNC_6(VAR_13);
    return VAR_16;
}
