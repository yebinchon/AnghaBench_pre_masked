
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int qmin; TYPE_2__* priv_data; } ;
struct TYPE_11__ {int rateControlMode; } ;
struct TYPE_9__ {TYPE_3__ rcParams; } ;
struct TYPE_10__ {int rc; TYPE_1__ encode_config; } ;
typedef TYPE_2__ NvencContext ;
typedef TYPE_3__ NV_ENC_RC_PARAMS ;
typedef TYPE_4__ AVCodecContext ;


 int VAR_0 ;







 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_1)
{
    NvencContext *VAR_2 = VAR_1->priv_data;
    NV_ENC_RC_PARAMS *VAR_3 = &VAR_2->encode_config.rcParams;

    switch (VAR_2->rc) {
    case 131:
        FUNC_1(VAR_1);
        return;
    case 128:
        if (VAR_1->qmin < 0) {
            FUNC_0(VAR_1, VAR_0,
                   "The variable bitrate rate-control requires "
                   "the 'qmin' option set.\n");
            FUNC_2(VAR_1);
            return;
        }

    case 129:
    case 130:
        FUNC_2(VAR_1);
        break;
    case 134:
    case 133:
    case 132:
        break;
    }

    VAR_3->rateControlMode = VAR_2->rc;
}
