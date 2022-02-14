
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_18__ {TYPE_1__* oc; int avctx; } ;
struct LATMContext {int initialized; TYPE_4__ aac_ctx; } ;
struct TYPE_17__ {long long extradata_size; int extradata; struct LATMContext* priv_data; } ;
struct TYPE_16__ {int size; int data; } ;
struct TYPE_14__ {int object_type; } ;
struct TYPE_15__ {TYPE_10__ m4ac; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVCodecContext ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,void*,int*,int *) ;
 int FUNC_1 (TYPE_3__*,void*,int*,int *,TYPE_2__*) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,TYPE_10__*,int ,long long,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct LATMContext*,int *) ;
 int FUNC_9 (int *,int) ;

__attribute__((used)) static int FUNC_10(AVCodecContext *VAR_3, void *VAR_4,
                             int *VAR_5, AVPacket *VAR_6)
{
    struct LATMContext *VAR_7 = VAR_3->priv_data;
    int VAR_8, VAR_9;
    GetBitContext VAR_10;

    if ((VAR_9 = FUNC_5(&VAR_10, VAR_6->data, VAR_6->size)) < 0)
        return VAR_9;


    if (FUNC_4(&VAR_10, 11) != VAR_2)
        return VAR_0;

    VAR_8 = FUNC_4(&VAR_10, 13) + 3;

    if (VAR_8 > VAR_6->size)
        return VAR_0;

    if ((VAR_9 = FUNC_8(VAR_7, &VAR_10)))
        return (VAR_9 < 0) ? VAR_9 : VAR_6->size;

    if (!VAR_7->initialized) {
        if (!VAR_3->extradata) {
            *VAR_5 = 0;
            return VAR_6->size;
        } else {
            FUNC_7(&VAR_7->aac_ctx);
            if ((VAR_9 = FUNC_3(
                    &VAR_7->aac_ctx, VAR_3, &VAR_7->aac_ctx.oc[1].m4ac,
                    VAR_3->extradata, VAR_3->extradata_size*8LL, 1)) < 0) {
                FUNC_6(&VAR_7->aac_ctx);
                return VAR_9;
            }
            VAR_7->initialized = 1;
        }
    }

    if (FUNC_9(&VAR_10, 12) == 0xfff) {
        FUNC_2(VAR_7->aac_ctx.avctx, VAR_1,
               "ADTS header detected, probably as result of configuration "
               "misparsing\n");
        return VAR_0;
    }

    switch (VAR_7->aac_ctx.oc[1].m4ac.object_type) {
    case 130:
    case 128:
    case 129:
    case 131:
        VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_5, &VAR_10);
        break;
    default:
        VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_10, VAR_6);
    }
    if (VAR_9 < 0)
        return VAR_9;

    return VAR_8;
}
