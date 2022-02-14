
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef scalar_t__ ssize_t ;
struct TYPE_21__ {scalar_t__ current_input_buffer; int codec; } ;
struct TYPE_20__ {TYPE_1__* priv_data; } ;
struct TYPE_19__ {scalar_t__ size; int data; int member_0; } ;
struct TYPE_18__ {TYPE_6__* ctx; TYPE_2__ buffered_pkt; scalar_t__ amlogic_mpeg2_api23_workaround; scalar_t__ delay_flush; } ;
typedef TYPE_1__ MediaCodecH264DecContext ;
typedef TYPE_2__ AVPacket ;
typedef int AVFrame ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ,char*,int,scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_6__*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_6__*,int *,int) ;
 int FUNC_8 (TYPE_3__*,TYPE_6__*,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_3, AVFrame *VAR_4)
{
    MediaCodecH264DecContext *VAR_5 = VAR_3->priv_data;
    int VAR_6;
    ssize_t VAR_7;



    if (VAR_5->delay_flush && FUNC_6(VAR_3, VAR_5->ctx)) {
        if (!FUNC_5(VAR_3, VAR_5->ctx)) {
            return FUNC_0(VAR_2);
        }
    }


    VAR_6 = FUNC_7(VAR_3, VAR_5->ctx, VAR_4, 0);
    if (VAR_6 != FUNC_0(VAR_2))
        return VAR_6;


    while (1) {
        if (VAR_5->ctx->current_input_buffer < 0) {

            VAR_7 = FUNC_3(VAR_5->ctx->codec, 0);
            if (VAR_7 < 0) {

                return FUNC_7(VAR_3, VAR_5->ctx, VAR_4, 1);
            }
            VAR_5->ctx->current_input_buffer = VAR_7;
        }


        if (VAR_5->buffered_pkt.size > 0) {
            VAR_6 = FUNC_8(VAR_3, VAR_5->ctx, &VAR_5->buffered_pkt, 0);
            if (VAR_6 >= 0) {
                VAR_5->buffered_pkt.size -= VAR_6;
                VAR_5->buffered_pkt.data += VAR_6;
                if (VAR_5->buffered_pkt.size <= 0) {
                    FUNC_2(&VAR_5->buffered_pkt);
                } else {
                    FUNC_1(VAR_3, VAR_1,
                           "could not send entire packet in single input buffer (%d < %d)\n",
                           VAR_6, VAR_5->buffered_pkt.size+VAR_6);
                }
            } else if (VAR_6 < 0 && VAR_6 != FUNC_0(VAR_2)) {
                return VAR_6;
            }

            if (VAR_5->amlogic_mpeg2_api23_workaround && VAR_5->buffered_pkt.size <= 0) {

            } else {

                continue;
            }
        }


        VAR_6 = FUNC_4(VAR_3, &VAR_5->buffered_pkt);
        if (VAR_6 == VAR_0) {
            AVPacket VAR_8 = { 0 };
            VAR_6 = FUNC_8(VAR_3, VAR_5->ctx, &VAR_8, 1);
            if (VAR_6 < 0)
                return VAR_6;
            return FUNC_7(VAR_3, VAR_5->ctx, VAR_4, 1);
        } else if (VAR_6 == FUNC_0(VAR_2) && VAR_5->ctx->current_input_buffer < 0) {
            return FUNC_7(VAR_3, VAR_5->ctx, VAR_4, 1);
        } else if (VAR_6 < 0) {
            return VAR_6;
        }
    }

    return FUNC_0(VAR_2);
}
