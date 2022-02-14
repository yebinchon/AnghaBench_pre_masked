
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_17__ {int object_type; } ;
struct TYPE_16__ {scalar_t__ dmono_mode; scalar_t__ force_dmono_mode; TYPE_1__* oc; int avctx; } ;
struct TYPE_15__ {TYPE_4__* priv_data; } ;
struct TYPE_14__ {scalar_t__* data; int size; } ;
struct TYPE_13__ {TYPE_6__ m4ac; int status; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;
typedef TYPE_4__ AACContext ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,void*,int*,int *) ;
 int FUNC_1 (TYPE_3__*,void*,int*,int *,TYPE_2__*) ;
 scalar_t__* FUNC_2 (TYPE_2__*,int ,int*) ;
 int FUNC_3 (TYPE_4__*,int ,TYPE_6__*,scalar_t__ const*,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,scalar_t__ const*,int) ;

__attribute__((used)) static int FUNC_6(AVCodecContext *VAR_5, void *VAR_6,
                            int *VAR_7, AVPacket *VAR_8)
{
    AACContext *VAR_9 = VAR_5->priv_data;
    const uint8_t *VAR_10 = VAR_8->data;
    int VAR_11 = VAR_8->size;
    GetBitContext VAR_12;
    int VAR_13;
    int VAR_14;
    int VAR_15;
    int VAR_16;
    const uint8_t *VAR_17 = FUNC_2(VAR_8,
                                       VAR_2,
                                       &VAR_16);
    int VAR_18;
    const uint8_t *VAR_19 = FUNC_2(VAR_8,
                                       VAR_1,
                                       &VAR_18);

    if (VAR_17) {

        VAR_9->oc[1].status = VAR_4;
        VAR_15 = FUNC_3(VAR_9, VAR_9->avctx, &VAR_9->oc[1].m4ac,
                                           VAR_17,
                                           VAR_16 * 8LL, 1);
        if (VAR_15 < 0) {
            return VAR_15;
        }
    }

    VAR_9->dmono_mode = 0;
    if (VAR_19 && VAR_18 > 0)
        VAR_9->dmono_mode = 1 + *VAR_19;
    if (VAR_9->force_dmono_mode >= 0)
        VAR_9->dmono_mode = VAR_9->force_dmono_mode;

    if (VAR_3 / 8 <= VAR_11)
        return VAR_0;

    if ((VAR_15 = FUNC_5(&VAR_12, VAR_10, VAR_11)) < 0)
        return VAR_15;

    switch (VAR_9->oc[1].m4ac.object_type) {
    case 130:
    case 128:
    case 129:
    case 131:
        VAR_15 = FUNC_0(VAR_5, VAR_6, VAR_7, &VAR_12);
        break;
    default:
        VAR_15 = FUNC_1(VAR_5, VAR_6, VAR_7, &VAR_12, VAR_8);
    }
    if (VAR_15 < 0)
        return VAR_15;

    VAR_13 = (FUNC_4(&VAR_12) + 7) >> 3;
    for (VAR_14 = VAR_13; VAR_14 < VAR_11; VAR_14++)
        if (VAR_10[VAR_14])
            break;

    return VAR_11 > VAR_14 ? VAR_13 : VAR_11;
}
