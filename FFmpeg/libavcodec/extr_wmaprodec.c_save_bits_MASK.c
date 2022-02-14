
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int frame_offset; int num_saved_bits; int packet_loss; int gb; int frame_data; int pb; int avctx; } ;
typedef TYPE_1__ WMAProDecodeCtx ;
struct TYPE_9__ {scalar_t__ buffer; } ;
typedef int PutBitContext ;
typedef TYPE_2__ GetBitContext ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_14(WMAProDecodeCtx *VAR_1, GetBitContext* VAR_2, int VAR_3,
                      int VAR_4)
{
    int VAR_5;





    if (!VAR_4) {
        VAR_1->frame_offset = FUNC_6(VAR_2) & 7;
        VAR_1->num_saved_bits = VAR_1->frame_offset;
        FUNC_8(&VAR_1->pb, VAR_1->frame_data, VAR_0);
    }

    VAR_5 = (FUNC_10(&VAR_1->pb) + VAR_3 + 8) >> 3;

    if (VAR_3 <= 0 || VAR_5 > VAR_0) {
        FUNC_3(VAR_1->avctx, "Too small input buffer");
        VAR_1->packet_loss = 1;
        return;
    }

    FUNC_1(VAR_3 <= FUNC_11(&VAR_1->pb));

    VAR_1->num_saved_bits += VAR_3;
    if (!VAR_4) {
        FUNC_2(&VAR_1->pb, VAR_2->buffer + (FUNC_6(VAR_2) >> 3),
                     VAR_1->num_saved_bits);
    } else {
        int VAR_6 = 8 - (FUNC_6(VAR_2) & 7);
        VAR_6 = FUNC_0(VAR_6, VAR_3);
        FUNC_9(&VAR_1->pb, VAR_6, FUNC_5(VAR_2, VAR_6));
        VAR_3 -= VAR_6;
        FUNC_2(&VAR_1->pb, VAR_2->buffer + (FUNC_6(VAR_2) >> 3), VAR_3);
    }
    FUNC_13(VAR_2, VAR_3);

    {
        PutBitContext VAR_7 = VAR_1->pb;
        FUNC_4(&VAR_7);
    }

    FUNC_7(&VAR_1->gb, VAR_1->frame_data, VAR_1->num_saved_bits);
    FUNC_12(&VAR_1->gb, VAR_1->frame_offset);
}
