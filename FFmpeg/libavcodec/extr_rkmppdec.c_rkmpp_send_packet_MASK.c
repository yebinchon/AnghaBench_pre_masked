
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ extradata_size; int * extradata; TYPE_3__* priv_data; } ;
struct TYPE_13__ {int pts; scalar_t__ size; int * data; } ;
struct TYPE_12__ {TYPE_1__* decoder_ref; } ;
struct TYPE_11__ {int eos_reached; scalar_t__ first_packet; } ;
struct TYPE_10__ {scalar_t__ data; } ;
typedef TYPE_2__ RKMPPDecoder ;
typedef TYPE_3__ RKMPPDecodeContext ;
typedef TYPE_4__ AVPacket ;
typedef TYPE_5__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*,int ,char*,...) ;
 int FUNC_2 (TYPE_5__*,int *,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3(AVCodecContext *VAR_3, const AVPacket *VAR_4)
{
    RKMPPDecodeContext *VAR_5 = VAR_3->priv_data;
    RKMPPDecoder *VAR_6 = (RKMPPDecoder *)VAR_5->decoder_ref->data;
    int VAR_7;


    if (!VAR_4->size) {
        FUNC_1(VAR_3, VAR_0, "End of stream.\n");
        VAR_6->eos_reached = 1;
        VAR_7 = FUNC_2(VAR_3, ((void*)0), 0, 0);
        if (VAR_7)
            FUNC_1(VAR_3, VAR_1, "Failed to send EOS to decoder (code = %d)\n", VAR_7);
        return VAR_7;
    }


    if (VAR_6->first_packet) {
        if (VAR_3->extradata_size) {
            VAR_7 = FUNC_2(VAR_3, VAR_3->extradata,
                                            VAR_3->extradata_size,
                                            VAR_4->pts);
            if (VAR_7) {
                FUNC_1(VAR_3, VAR_1, "Failed to write extradata to decoder (code = %d)\n", VAR_7);
                return VAR_7;
            }
        }
        VAR_6->first_packet = 0;
    }


    VAR_7 = FUNC_2(VAR_3, VAR_4->data, VAR_4->size, VAR_4->pts);
    if (VAR_7 && VAR_7!=FUNC_0(VAR_2))
        FUNC_1(VAR_3, VAR_1, "Failed to write data to decoder (code = %d)\n", VAR_7);

    return VAR_7;
}
