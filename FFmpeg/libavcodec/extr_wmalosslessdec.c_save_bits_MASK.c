
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int frame_offset; int num_saved_bits; int max_frame_size; int packet_loss; int gb; int frame_data; int pb; int avctx; } ;
typedef TYPE_1__ WmallDecodeCtx ;
struct TYPE_9__ {scalar_t__ buffer; } ;
typedef int PutBitContext ;
typedef TYPE_2__ GetBitContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_11(WmallDecodeCtx *VAR_0, GetBitContext* VAR_1, int VAR_2,
                      int VAR_3)
{
    int VAR_4;
    PutBitContext VAR_5;





    if (!VAR_3) {
        VAR_0->frame_offset = FUNC_5(VAR_1) & 7;
        VAR_0->num_saved_bits = VAR_0->frame_offset;
        FUNC_7(&VAR_0->pb, VAR_0->frame_data, VAR_0->max_frame_size);
    }

    VAR_4 = (VAR_0->num_saved_bits + VAR_2 + 8) >> 3;

    if (VAR_2 <= 0 || VAR_4 > VAR_0->max_frame_size) {
        FUNC_2(VAR_0->avctx, "Too small input buffer");
        VAR_0->packet_loss = 1;
        VAR_0->num_saved_bits = 0;
        return;
    }

    VAR_0->num_saved_bits += VAR_2;
    if (!VAR_3) {
        FUNC_1(&VAR_0->pb, VAR_1->buffer + (FUNC_5(VAR_1) >> 3),
                         VAR_0->num_saved_bits);
    } else {
        int VAR_6 = 8 - (FUNC_5(VAR_1) & 7);
        VAR_6 = FUNC_0(VAR_6, VAR_2);
        FUNC_8(&VAR_0->pb, VAR_6, FUNC_4(VAR_1, VAR_6));
        VAR_2 -= VAR_6;
        FUNC_1(&VAR_0->pb, VAR_1->buffer + (FUNC_5(VAR_1) >> 3), VAR_2);
    }
    FUNC_10(VAR_1, VAR_2);

    VAR_5 = VAR_0->pb;
    FUNC_3(&VAR_5);

    FUNC_6(&VAR_0->gb, VAR_0->frame_data, VAR_0->num_saved_bits);
    FUNC_9(&VAR_0->gb, VAR_0->frame_offset);
}
