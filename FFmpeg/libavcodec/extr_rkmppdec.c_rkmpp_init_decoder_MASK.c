
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int (* control ) (int ,int ,int *) ;} ;
struct TYPE_13__ {int codec_id; int pix_fmt; TYPE_2__* priv_data; } ;
struct TYPE_12__ {int decoder_ref; } ;
struct TYPE_11__ {int first_packet; int device_ref; int * frame_group; int ctx; TYPE_7__* mpi; } ;
typedef int RK_S64 ;
typedef int RK_S32 ;
typedef TYPE_1__ RKMPPDecoder ;
typedef TYPE_2__ RKMPPDecodeContext ;
typedef scalar_t__ MppCodingType ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
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
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *,int,int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_3__*,int ,char*,...) ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int *,TYPE_7__**) ;
 int FUNC_11 (int ,int ,scalar_t__) ;
 int FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (TYPE_3__*) ;
 int VAR_17 ;
 int FUNC_14 (int ,int ,int *) ;
 int FUNC_15 (int ,int ,int *) ;
 int FUNC_16 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_17(AVCodecContext *VAR_18)
{
    RKMPPDecodeContext *VAR_19 = VAR_18->priv_data;
    RKMPPDecoder *VAR_20 = ((void*)0);
    MppCodingType VAR_21 = VAR_15;
    int VAR_22;
    RK_S64 VAR_23;
    RK_S32 VAR_24;

    VAR_18->pix_fmt = VAR_5;


    VAR_20 = FUNC_6(sizeof(RKMPPDecoder));
    if (!VAR_20) {
        VAR_22 = FUNC_0(VAR_6);
        goto fail;
    }

    VAR_19->decoder_ref = FUNC_1((uint8_t *)VAR_20, sizeof(*VAR_20), VAR_17,
                                               ((void*)0), VAR_1);
    if (!VAR_19->decoder_ref) {
        FUNC_2(VAR_20);
        VAR_22 = FUNC_0(VAR_6);
        goto fail;
    }

    FUNC_5(VAR_18, VAR_3, "Initializing RKMPP decoder.\n");

    VAR_21 = FUNC_13(VAR_18);
    if (VAR_21 == VAR_15) {
        FUNC_5(VAR_18, VAR_4, "Unknown codec type (%d).\n", VAR_18->codec_id);
        VAR_22 = VAR_0;
        goto fail;
    }

    VAR_22 = FUNC_9(VAR_9, VAR_21);
    if (VAR_22 != VAR_11) {
        FUNC_5(VAR_18, VAR_4, "Codec type (%d) unsupported by MPP\n", VAR_18->codec_id);
        VAR_22 = VAR_0;
        goto fail;
    }


    VAR_22 = FUNC_10(&VAR_20->ctx, &VAR_20->mpi);
    if (VAR_22 != VAR_11) {
        FUNC_5(VAR_18, VAR_4, "Failed to create MPP context (code = %d).\n", VAR_22);
        VAR_22 = VAR_0;
        goto fail;
    }


    VAR_22 = FUNC_11(VAR_20->ctx, VAR_9, VAR_21);
    if (VAR_22 != VAR_11) {
        FUNC_5(VAR_18, VAR_4, "Failed to initialize MPP context (code = %d).\n", VAR_22);
        VAR_22 = VAR_0;
        goto fail;
    }


    VAR_24 = VAR_12;
    VAR_22 = VAR_20->mpi->control(VAR_20->ctx, VAR_13, &VAR_24);
    if (VAR_22 != VAR_11) {
        FUNC_5(VAR_18, VAR_4, "Failed to set blocking mode on MPI (code = %d).\n", VAR_22);
        VAR_22 = VAR_0;
        goto fail;
    }

    VAR_23 = VAR_16;
    VAR_22 = VAR_20->mpi->control(VAR_20->ctx, VAR_14, &VAR_23);
    if (VAR_22 != VAR_11) {
        FUNC_5(VAR_18, VAR_4, "Failed to set block timeout on MPI (code = %d).\n", VAR_22);
        VAR_22 = VAR_0;
        goto fail;
    }

    VAR_22 = FUNC_7(&VAR_20->frame_group, VAR_8);
    if (VAR_22) {
       FUNC_5(VAR_18, VAR_4, "Failed to retrieve buffer group (code = %d)\n", VAR_22);
       VAR_22 = VAR_0;
       goto fail;
    }

    VAR_22 = VAR_20->mpi->control(VAR_20->ctx, VAR_10, VAR_20->frame_group);
    if (VAR_22) {
        FUNC_5(VAR_18, VAR_4, "Failed to assign buffer group (code = %d)\n", VAR_22);
        VAR_22 = VAR_0;
        goto fail;
    }

    VAR_22 = FUNC_8(VAR_20->frame_group, 0, VAR_7);
    if (VAR_22) {
        FUNC_5(VAR_18, VAR_4, "Failed to set buffer group limit (code = %d)\n", VAR_22);
        VAR_22 = VAR_0;
        goto fail;
    }

    VAR_20->first_packet = 1;

    FUNC_5(VAR_18, VAR_3, "RKMPP decoder initialized successfully.\n");

    VAR_20->device_ref = FUNC_3(VAR_2);
    if (!VAR_20->device_ref) {
        VAR_22 = FUNC_0(VAR_6);
        goto fail;
    }
    VAR_22 = FUNC_4(VAR_20->device_ref);
    if (VAR_22 < 0)
        goto fail;

    return 0;

fail:
    FUNC_5(VAR_18, VAR_4, "Failed to initialize RKMPP decoder.\n");
    FUNC_12(VAR_18);
    return VAR_22;
}
