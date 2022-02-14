
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_12__ {TYPE_4__* priv_data; } ;
struct TYPE_11__ {TYPE_1__* decoder_ref; } ;
struct TYPE_10__ {int ctx; TYPE_2__* mpi; } ;
struct TYPE_9__ {int (* decode_put_packet ) (int ,int ) ;} ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_3__ RKMPPDecoder ;
typedef TYPE_4__ RKMPPDecodeContext ;
typedef int MppPacket ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_5__*,int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(AVCodecContext *VAR_6, uint8_t *VAR_7, int VAR_8, int64_t VAR_9)
{
    RKMPPDecodeContext *VAR_10 = VAR_6->priv_data;
    RKMPPDecoder *VAR_11 = (RKMPPDecoder *)VAR_10->decoder_ref->data;
    int VAR_12;
    MppPacket VAR_13;


    VAR_12 = FUNC_3(&VAR_13, VAR_7, VAR_8);
    if (VAR_12 != VAR_5) {
        FUNC_1(VAR_6, VAR_2, "Failed to init MPP packet (code = %d)\n", VAR_12);
        return VAR_0;
    }

    FUNC_5(VAR_13, VAR_9);

    if (!VAR_7)
        FUNC_4(VAR_13);

    VAR_12 = VAR_11->mpi->decode_put_packet(VAR_11->ctx, VAR_13);
    if (VAR_12 != VAR_5) {
        if (VAR_12 == VAR_4) {
            FUNC_1(VAR_6, VAR_1, "Buffer full writing %d bytes to decoder\n", VAR_8);
            VAR_12 = FUNC_0(VAR_3);
        } else
            VAR_12 = VAR_0;
    }
    else
        FUNC_1(VAR_6, VAR_1, "Wrote %d bytes to decoder\n", VAR_8);

    FUNC_2(&VAR_13);

    return VAR_12;
}
