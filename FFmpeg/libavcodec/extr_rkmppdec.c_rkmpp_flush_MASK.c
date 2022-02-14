
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {TYPE_4__* priv_data; } ;
struct TYPE_11__ {TYPE_1__* decoder_ref; } ;
struct TYPE_10__ {int first_packet; int ctx; TYPE_2__* mpi; } ;
struct TYPE_9__ {int (* reset ) (int ) ;} ;
struct TYPE_8__ {scalar_t__ data; } ;
typedef TYPE_3__ RKMPPDecoder ;
typedef TYPE_4__ RKMPPDecodeContext ;
typedef TYPE_5__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(AVCodecContext *VAR_4)
{
    RKMPPDecodeContext *VAR_5 = VAR_4->priv_data;
    RKMPPDecoder *VAR_6 = (RKMPPDecoder *)VAR_5->decoder_ref->data;
    int VAR_7 = VAR_2;

    FUNC_0(VAR_4, VAR_0, "Flush.\n");

    VAR_7 = VAR_6->mpi->reset(VAR_6->ctx);
    if (VAR_7 == VAR_3) {
        VAR_6->first_packet = 1;
    } else
        FUNC_0(VAR_4, VAR_1, "Failed to reset MPI (code = %d)\n", VAR_7);
}
