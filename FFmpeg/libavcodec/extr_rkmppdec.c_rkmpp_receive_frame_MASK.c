
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {TYPE_4__* priv_data; } ;
struct TYPE_19__ {int member_0; } ;
struct TYPE_18__ {TYPE_1__* decoder_ref; } ;
struct TYPE_17__ {int ctx; TYPE_2__* mpi; int eos_reached; } ;
struct TYPE_16__ {int (* control ) (int ,int ,int*) ;} ;
struct TYPE_15__ {scalar_t__ data; } ;
typedef int RK_S32 ;
typedef TYPE_3__ RKMPPDecoder ;
typedef TYPE_4__ RKMPPDecodeContext ;
typedef TYPE_5__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_6__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_6__*,int ,char*,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_6__*,int *) ;
 int FUNC_5 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_7, AVFrame *VAR_8)
{
    RKMPPDecodeContext *VAR_9 = VAR_7->priv_data;
    RKMPPDecoder *VAR_10 = (RKMPPDecoder *)VAR_9->decoder_ref->data;
    int VAR_11 = VAR_5;
    AVPacket VAR_12 = {0};
    RK_S32 VAR_13, VAR_14;

    if (!VAR_10->eos_reached) {

        VAR_11 = VAR_10->mpi->control(VAR_10->ctx, VAR_4, &VAR_13);
        if (VAR_11 != VAR_6) {
            FUNC_1(VAR_7, VAR_1, "Failed to get decoder used slots (code = %d).\n", VAR_11);
            return VAR_11;
        }

        VAR_14 = VAR_3 - VAR_13;
        if (VAR_14 > 0) {
            VAR_11 = FUNC_3(VAR_7, &VAR_12);
            if (VAR_11 < 0 && VAR_11 != VAR_0) {
                return VAR_11;
            }

            VAR_11 = FUNC_5(VAR_7, &VAR_12);
            FUNC_2(&VAR_12);

            if (VAR_11 < 0) {
                FUNC_1(VAR_7, VAR_1, "Failed to send packet to decoder (code = %d)\n", VAR_11);
                return VAR_11;
            }
        }


        if (VAR_14 > 1)
            return FUNC_0(VAR_2);
    }

    return FUNC_4(VAR_7, VAR_8);
}
