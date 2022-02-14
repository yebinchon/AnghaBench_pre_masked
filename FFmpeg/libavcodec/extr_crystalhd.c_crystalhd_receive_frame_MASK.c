
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* priv_data; } ;
struct TYPE_16__ {scalar_t__ size; int member_0; } ;
struct TYPE_15__ {scalar_t__ ReadyListCount; int member_0; } ;
struct TYPE_14__ {scalar_t__ draining; int dev; } ;
typedef int HANDLE ;
typedef scalar_t__ CopyRet ;
typedef TYPE_1__ CHDContext ;
typedef scalar_t__ BC_STATUS ;
typedef TYPE_2__ BC_DTS_STATUS ;
typedef TYPE_3__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_4__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (TYPE_4__*,int ,char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (TYPE_4__*,int *,int*) ;

__attribute__((used)) static int FUNC_8(AVCodecContext *VAR_10, AVFrame *VAR_11)
{
    BC_STATUS VAR_12;
    BC_DTS_STATUS VAR_13 = { 0, };
    CopyRet VAR_14;
    CHDContext *VAR_15 = VAR_10->priv_data;
    HANDLE VAR_16 = VAR_15->dev;
    int VAR_17 = 0;
    int VAR_18 = 0;
    AVPacket VAR_19 = {0};

    FUNC_3(VAR_10, VAR_4, "CrystalHD: receive_frame\n");

    VAR_18 = FUNC_6(VAR_10, &VAR_19);
    if (VAR_18 < 0 && VAR_18 != VAR_0) {
        return VAR_18;
    }

    while (VAR_19.size > FUNC_2(VAR_16)) {





        FUNC_3(VAR_10, VAR_3, "CrystalHD: Waiting for space in input buffer\n");
    }

    VAR_18 = FUNC_5(VAR_10, &VAR_19);
    FUNC_4(&VAR_19);

    if (VAR_18 == FUNC_0(VAR_6)) {
        VAR_18 = VAR_1;
    }
    if (VAR_18 < 0 && VAR_18 != VAR_0) {
        return VAR_18;
    }

    do {
        VAR_12 = FUNC_1(VAR_16, &VAR_13);
        if (VAR_12 != VAR_5) {
            FUNC_3(VAR_10, VAR_2, "CrystalHD: GetDriverStatus failed\n");
            return -1;
        }

        if (VAR_13.ReadyListCount == 0) {
            FUNC_3(VAR_10, VAR_4, "CrystalHD: Insufficient frames ready. Returning\n");
            VAR_17 = 0;
            VAR_14 = VAR_9;
            break;
        }

        VAR_14 = FUNC_7(VAR_10, VAR_11, &VAR_17);
    } while (VAR_14 == VAR_7);

    if (VAR_14 == VAR_8) {
        return -1;
    } else if (VAR_17 == 0) {
        return VAR_15->draining ? VAR_0 : FUNC_0(VAR_6);
    } else {
        return 0;
    }
}
