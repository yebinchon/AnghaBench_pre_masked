
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int member_0; int member_1; } ;
struct TYPE_13__ {int Minor; int Major; TYPE_1__ member_0; } ;
typedef TYPE_2__ mfxVersion ;
typedef scalar_t__ mfxStatus ;
typedef int mfxIMPL ;
typedef int mfxHandleType ;
typedef int mfxHDL ;
struct TYPE_15__ {int type; TYPE_3__* hwctx; } ;
struct TYPE_14__ {scalar_t__ session; int devmgr; int display; } ;
typedef TYPE_3__ AVVAAPIDeviceContext ;
typedef TYPE_3__ AVQSVDeviceContext ;
typedef TYPE_5__ AVHWDeviceContext ;
typedef TYPE_3__ AVDXVA2DeviceContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (TYPE_5__*,int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_6(AVHWDeviceContext *VAR_9,
                                        mfxIMPL VAR_10,
                                        AVHWDeviceContext *VAR_11,
                                        int VAR_12)
{
    AVQSVDeviceContext *VAR_13 = VAR_9->hwctx;

    mfxVersion VAR_14 = { { 3, 1 } };
    mfxHDL VAR_15;
    mfxHandleType VAR_16;
    mfxStatus VAR_17;
    int VAR_18;

    switch (VAR_11->type) {
    default:
        VAR_18 = FUNC_0(VAR_3);
        goto fail;
    }

    VAR_17 = FUNC_2(VAR_10, &VAR_14, &VAR_13->session);
    if (VAR_17 != VAR_4) {
        FUNC_5(VAR_9, VAR_1, "Error initializing an MFX session: "
               "%d.\n", VAR_17);
        VAR_18 = VAR_0;
        goto fail;
    }

    VAR_17 = FUNC_3(VAR_13->session, &VAR_14);
    if (VAR_17 != VAR_4) {
        FUNC_5(VAR_9, VAR_1, "Error querying an MFX session: %d.\n", VAR_17);
        VAR_18 = VAR_0;
        goto fail;
    }

    FUNC_5(VAR_9, VAR_2,
           "Initialize MFX session: API version is %d.%d, implementation version is %d.%d\n",
           VAR_7, VAR_8, VAR_14.Major, VAR_14.Minor);

    FUNC_1(VAR_13->session);

    VAR_17 = FUNC_2(VAR_10, &VAR_14, &VAR_13->session);
    if (VAR_17 != VAR_4) {
        FUNC_5(VAR_9, VAR_1,
               "Error initializing an MFX session: %d.\n", VAR_17);
        VAR_18 = VAR_0;
        goto fail;
    }

    VAR_17 = FUNC_4(VAR_13->session, VAR_16, VAR_15);
    if (VAR_17 != VAR_4) {
        FUNC_5(VAR_9, VAR_1, "Error setting child device handle: "
               "%d\n", VAR_17);
        VAR_18 = VAR_0;
        goto fail;
    }

    return 0;

fail:
    if (VAR_13->session)
        FUNC_1(VAR_13->session);
    return VAR_18;
}
